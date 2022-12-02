package View;

import Model.Banque;
import Model.Client;
import Model.User;

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
            System.out.println("5. Se déconnecter");
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
                    break;
                default:
                    System.out.println("Choix invalide");
                    afficherMenuPrincipale();
                    break;
            }
        } while (choix != 5);
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
