import Controller.MenuBanque;

import Model.Banque;
import Model.Client;
import Model.Compte;
import Service.ServiceBanque;
import Service.ServiceCRUD;
import Service.ServiceTransactionnel;

import java.util.Scanner;

public class Main {
    static void cls() {
        //clear terminal screen
        System.out.print("\033[H\033[2J");
        System.out.flush();
    }
    public static void main(String[] args) {
        Banque banque = new Banque("Banque de test", "banque@test.com", 100, 1000);
        Client client1 = new Client("Client1", "Test", "client1@test.com");
        Client client2 = new Client("Client2", "Test", "client2@test.com");
        Client client3 = new Client("Client3", "Test", "client3@test.com");

        Compte compte1 = new Compte(client1, 1000);
        Compte compte2 = new Compte(client2, 2000);
        Compte compte3 = new Compte(client3, 3000);

        banque.ajouterClient(client1);
        banque.ajouterClient(client2);
        banque.ajouterClient(client3);

        banque.ajouterCompte(compte1);
        banque.ajouterCompte(compte2);
        banque.ajouterCompte(compte3);

        ServiceCRUD serviceCRUD = new ServiceCRUD(banque);
        serviceCRUD.lierCompteAuClient(compte1.getIdCompte(), client1.getIdClient());
        serviceCRUD.lierCompteAuClient(compte2.getIdCompte(), client2.getIdClient());
        serviceCRUD.lierCompteAuClient(compte3.getIdCompte(), client3.getIdClient());

        int choix = 0;
        do{
            cls(); //doesnt work on intellij
            MenuBanque.afficherMenuBanque();
            ServiceBanque serviceBanque = new ServiceBanque(banque);
            choix = new Scanner(System.in).nextInt();
            switch (choix) {
                case 1:
                    serviceBanque.afficherBanque();
                    new Scanner(System.in).nextLine();
                    break;
                case 2:
                    serviceBanque.afficherClients();
                    break;
                case 3:
                    serviceBanque.afficherComptes();
                    break;
                case 4:
                    MenuBanque.afficherMenuCRUD();
                    choix = new Scanner(System.in).nextInt();
                    switch (choix) {
                        case 1:
                            serviceCRUD.creerEtAjouterCompte();
                            break;
                        case 2:
                            serviceCRUD.creerEtAjouterClient();
                            break;
                        case 3:
                            System.out.println("Entrer l'ID du client a modifier");
                            int clientID = new Scanner(System.in).nextInt();
                            serviceCRUD.modifierClient(clientID);
                            break;
                        case 4:
                            System.out.println("Entrer l'ID du compte a modifier");
                            int compteID = new Scanner(System.in).nextInt();
                            serviceCRUD.modifierCompte(compteID);
                            break;
                        case 5:
                            System.out.println("Entrer l'ID du client a supprimer");
                            int clientID2 = new Scanner(System.in).nextInt();
                            serviceCRUD.supprimerClient(clientID2);
                            break;
                        case 6:
                            System.out.println("Entrer l'ID du compte a supprimer");
                            int compteID2 = new Scanner(System.in).nextInt();
                            serviceCRUD.supprimerCompte(compteID2);
                            break;
                        case 7:
                            System.out.println("Entrer l'ID du client a lier");
                            int clientID3 = new Scanner(System.in).nextInt();
                            System.out.println("Entrer l'ID du compte a lier");
                            int compteID3 = new Scanner(System.in).nextInt();
                            serviceCRUD.lierCompteAuClient(clientID3, compteID3);
                            break;
                        case 0:
                            break;
                        default:
                            System.out.println("Choix invalide");
                            break;
                    }
                    break;
                case 5:
                    MenuBanque.afficherMenuTransactionnel();
                    ServiceTransactionnel serviceTransactionnel = new ServiceTransactionnel(banque);
                    choix = new Scanner(System.in).nextInt();
                    switch (choix) {
                        case 1:
                            System.out.println("Entrer l'ID du compte a crediter");
                            int compteID = new Scanner(System.in).nextInt();
                            Compte compteACrediter = ServiceCRUD.getCompteById(compteID);
                            System.out.println("Entrer le montant a crediter");
                            double montant = new Scanner(System.in).nextDouble();
                            serviceTransactionnel.verser(montant, compteACrediter);
                            break;
                        case 2:
                            System.out.println("Entrer l'ID du compte a debiter");
                            int compteID2 = new Scanner(System.in).nextInt();
                            Compte compteADebiter = ServiceCRUD.getCompteById(compteID2);
                            System.out.println("Entrer le montant a debiter");
                            double montant2 = new Scanner(System.in).nextDouble();
                            serviceTransactionnel.retirer(montant2, compteADebiter);
                            break;
                        case 3:
                            System.out.println("Entrer l'ID du compte a debiter");
                            int compteID3 = new Scanner(System.in).nextInt();
                            Compte compteADebiter2 = ServiceCRUD.getCompteById(compteID3);
                            System.out.println("Entrer l'ID du compte a crediter");
                            int compteID4 = new Scanner(System.in).nextInt();
                            Compte compteACrediter2 = ServiceCRUD.getCompteById(compteID4);
                            System.out.println("Entrer le montant a transferer");
                            double montant3 = new Scanner(System.in).nextDouble();
                            serviceTransactionnel.effectuerUnVirement(montant3, compteADebiter2, compteACrediter2);
                            break;
                        case 0:
                            break;
                        default:
                            System.out.println("Choix invalide");
                            break;
                    }
                    break;
                case 0:
                    break;
                default:
                    System.out.println("Choix invalide");
                    break;
            }
        } while (choix != 0);
    }
}