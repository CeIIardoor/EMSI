package View;

import Model.Banque;
import Model.Client;
import Model.Compte;
import Model.User;
import Service.ServiceTransactionnel;
import View.Interfaces.IMenuClient;

import java.util.Scanner;

public class MenuClient implements IMenuClient {
    private Banque banque;
    private User user;

    public MenuClient(Banque _banque, User currentUser) {
        this.banque = _banque;
        this.user = currentUser;
    }
    @Override
    public void afficherMenuPrincipale() {
        int choix;
        do {
            System.out.println("____________________Menu Client______________________");
            System.out.println("1. Consulter mes comptes");
            System.out.println("2. Consulter mes opérations");
            System.out.println("3. Consulter mes informations");
            System.out.println("4. Changer mon mot de passe");
            System.out.println("5. Service Transactionnel");
            System.out.println("0. Se déconnecter");
            System.out.println("____________________________________________________");
            choix = new Scanner(System.in).nextInt();
            switch (choix) {
                case 1:
                    afficherComptes();
                    break;
                case 2:
                    afficherOperations();
                    break;
                case 3:
                    afficherInfos();
                    break;
                case 4:
                    afficherMenuChangePassword();
                    break;
                case 5:
                    afficherComptes();
                    Scanner scanner = new Scanner(System.in);
                    System.out.println("Entrer le numéro du compte");
                    int numCompte = scanner.nextInt();
                    Compte compte = ((Client) user).getCompteByID(numCompte);
                    if (compte != null) {
                        afficherMenuTransactions(compte);
                    } else {
                        System.out.println("Compte introuvable");
                    }
                    break;
                case 0:
                    break;
                default:
                    System.out.println("Choix invalide");
                    afficherMenuPrincipale();
                    break;
            }
        } while (choix != 0);
    }

    private void afficherMenuTransactions(Compte compte) {
        int choix;
        do {
            System.out.println("____________________Menu Transaction______________________");
            System.out.println("1. Déposer de l'argent");
            System.out.println("2. Retirer de l'argent");
            System.out.println("3. Virement");
            System.out.println("0. Retour");
            System.out.println("__________________________________________________________");
            choix = new Scanner(System.in).nextInt();
            ServiceTransactionnel serviceTransactionnel = new ServiceTransactionnel(banque);
            switch (choix) {
                case 1:
                    System.out.println("Entrer le montant à déposer");
                    double montant = new Scanner(System.in).nextDouble();
                    serviceTransactionnel.verser(montant, compte);
                    break;
                case 2:
                    System.out.println("Entrer le montant à retirer");
                    montant = new Scanner(System.in).nextDouble();
                    serviceTransactionnel.retirer(montant, compte);
                    break;
                case 3:
                    banque.getComptes().forEach(
                            c -> System.out.println(c.getIdCompte() + "- " + c.getProprietaire().getNom()
                            ));
                    System.out.println("Entrer le numéro du compte à créditer");
                    int numCompte = new Scanner(System.in).nextInt();
                    Compte compteCredite = banque.getCompteByID(numCompte);
                    if (compteCredite != null) {
                        System.out.println("Entrer le montant à virer");
                        montant = new Scanner(System.in).nextDouble();
                        serviceTransactionnel.effectuerUnVirement(montant, compte, compteCredite);
                    } else {
                        System.out.println("Compte introuvable");
                    }
                    break;
                case 0:
                    break;
                default:
                    System.out.println("Choix invalide");
                    afficherMenuTransactions(compte);
                    break;
            }
        } while (choix != 0);
    }

    private void afficherMenuChangePassword() {
        System.out.println("____________________Changer mot de passe______________________");
        System.out.println("Entrer votre ancien mot de passe");
        String oldPassword = new Scanner(System.in).nextLine();
        if (oldPassword.equals(user.getPassword())) {
            System.out.println("Entrer votre nouveau mot de passe");
            String newPassword = new Scanner(System.in).nextLine();
            user.setPassword(newPassword);
            System.out.println("Mot de passe changé avec succès");
        } else {
            System.out.println("Mot de passe incorrect");
        }
    }

    private void afficherInfos() {
        Client client = (Client) user;
        System.out.println("____________________Mes informations______________________");
        System.out.println("Nom: " + client.getNom());
        System.out.println("Prénom: " + client.getPrenom());
        System.out.println("Email: " + client.getEmail());
        System.out.println("____________________________________________________");
    }

    private void afficherOperations() {
        Client client = (Client) user;
        System.out.println("____________________Mes opérations______________________");
        for (int i = 0; i < client.getComptes().size(); i++) {
            System.out.println("Compte " + client.getComptes().get(i).getIdCompte());
            System.out.println("Solde: " + client.getComptes().get(i).getSolde());
            System.out.println("Opérations: ");
            for (int j = 0; j < client.getComptes().get(i).getJournalisation().size(); j++) {
                System.out.println(j+1 + "." + client.getComptes().get(i).getJournalisation().get(j));
            }
        }
        System.out.println("____________________________________________________");
    }

    private void afficherComptes() {
        Client client = (Client) user;
        System.out.println("____________________Mes comptes______________________");
        for (int i = 0; i < client.getComptes().size(); i++) {
            System.out.println(i + 1 + ". " + client.getComptes().get(i).toString());
        }
        System.out.println("____________________________________________________");
    }



}
