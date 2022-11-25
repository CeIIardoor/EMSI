package Controller;

import Model.Banque;
import Model.Compte;
import Service.*;

import java.util.Scanner;

public class MenuBanque {
    private static Banque banque;

    public MenuBanque(Banque _banque){
        banque = _banque;
    }

    public static void afficherMenuBanque(){
        System.out.println("________________________________________________________________________________");
        System.out.println("|_______________________________| MENU BANQUE |_________________________________|");
        System.out.println("|___| Infos |_____________________________________| Services |__________________|");
        System.out.println("| 1. Afficher la banque                       | 4. Service CRUD                 |");
        System.out.println("| 2. Afficher les clients                     | 5. Service Transactionnel       |");
        System.out.println("| 3. Afficher les comptes                     | 6. Service Utilitaire           |");
        System.out.println("|                                             | 7. Service QOL                  |");
        System.out.println("|                               9. Quitter                                      |");
        System.out.println("________________________________________________________________________________");
        System.out.println("Entrer votre choix : ");
    }

    public static void afficherMenuCRUD(){
        System.out.println("________________________________________________________________________________");
        System.out.println("|_______________________________| MENU CRUD |___________________________________|");
        System.out.println("|_______________________________________________________________________________|");
        System.out.println("| 1. Ajouter un client                   | 5. Supprimer un client               |");
        System.out.println("| 2. Ajouter un compte                   | 6. Supprimer un compte               |");
        System.out.println("| 3. Modifier un client                  | 7. Consulter details d'un client     |");
        System.out.println("| 4. Modifier un compte                  | 8. Consulter details d'un compte     |");
        System.out.println("|                                0. Retour                                      |");
        System.out.println("________________________________________________________________________________");
        System.out.println("Entrer votre choix : ");
    }

    public static void afficherMenuQOL(){
        System.out.println("________________________________________________________________________________");
        System.out.println("|_______________________________| MENU QOL |____________________________________|");
        System.out.println("|_______________________________________________________________________________|");
        System.out.println("| 1. Afficher les comptes d'un client       | 4. Afficher les clients par type  |");
        System.out.println("| 2. Afficher les clients d'un compte       | 5. Afficher les comptes par solde |");
        System.out.println("| 3. Afficher les comptes par type          | 6. Afficher les clients par solde |");
        System.out.println("|                                     0. Retour                                 |");
        System.out.println("________________________________________________________________________________");
        System.out.println("Entrer votre choix : ");
    }

    public static void afficherMenuTransactionnel(){
        System.out.println("________________________________________________________________________________");
        System.out.println("|_______________________________| MENU TRANSACTIONNEL |_________________________|");
        System.out.println("|_______________________________________________________________________________|");
        System.out.println("| 1. Créditer un compte                                                         |");
        System.out.println("| 2. Débiter un compte                                                          |");
        System.out.println("| 3. Virement                                                                   |");
        System.out.println("|                               0. Retour                                       |");
        System.out.println("________________________________________________________________________________");
        System.out.println("Entrer votre choix : ");
    }

    public static void afficherMenuUtilitaire(){
        System.out.println("________________________________________________________________________________");
        System.out.println("|_______________________________| MENU UTILITAIRE |_____________________________|");
        System.out.println("|_______________________________________________________________________________|");
        System.out.println("| 1. Trier ascendant les clients                                                |");
        System.out.println("| 2. Trier descendant les clients                                               |");
        System.out.println("| 0. Retour                                                                     |");
        System.out.println("________________________________________________________________________________");
        System.out.println("Entrer votre choix : ");
    }
    public void afficherMenuPrincipale(){
        int choix;
        do{
            System.out.println("Bienvenue dans la banque " + banque.getNomAgence());
            MenuBanque.afficherMenuBanque();
            ServiceBanque serviceBanque = new ServiceBanque(banque);
            ServiceCRUD serviceCRUD = new ServiceCRUD(banque);
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
                            serviceCRUD.creerEtAjouterClient();
                            break;
                        case 2:
                            serviceCRUD.creerEtAjouterCompte();
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
                        case 8:
                            System.out.println("Entrer l'ID du client a consulter");
                            int compteID4 = new Scanner(System.in).nextInt();
                            serviceCRUD.consulterDetailClient(compteID4);
                            break;
                        case 9:
                            System.out.println("Entrer l'ID du compte a consulter");
                            int compteID5 = new Scanner(System.in).nextInt();
                            serviceCRUD.consulterDetailCompte(compteID5);
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
                case 6:
                    MenuBanque.afficherMenuUtilitaire();
                    ServiceUtilitaire serviceUtilitaire = new ServiceUtilitaire(banque);
                    choix = new Scanner(System.in).nextInt();
                    switch (choix) {
                        case 1:

                            System.out.println("Trier par :");
                            System.out.println("1. Nom");
                            System.out.println("2. Solde");
                            System.out.println("3. Date");
                            choix = new Scanner(System.in).nextInt();
                            switch (choix) {
                                case 1:
                                    serviceUtilitaire.trierAsc("Nom");
                                    break;
                                case 2:
                                    serviceUtilitaire.trierAsc("Solde");
                                    break;
                                case 3:
                                    serviceUtilitaire.trierAsc("Date");
                                    break;
                                default:
                                    System.out.println("Choix invalide");
                                    break;
                            }

                        case 2:
                            System.out.println("Trier par :");
                            System.out.println("1. Nom");
                            System.out.println("2. Solde");
                            System.out.println("3. Date");
                            choix = new Scanner(System.in).nextInt();
                            switch (choix) {
                                case 1:
                                    serviceUtilitaire.trierDesc("Nom");
                                    break;
                                case 2:
                                    serviceUtilitaire.trierDesc("Solde");
                                    break;
                                case 3:
                                    serviceUtilitaire.trierDesc("Date");
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
                    break;

                case 7:
                    MenuBanque.afficherMenuQOL();
                    ServiceQOL serviceQOL = new ServiceQOL(banque);
                    choix = new Scanner(System.in).nextInt();
                    switch (choix) {
                        case 1:
                            System.out.println("Consulter informations Banque");
                            serviceQOL.consulterInformationsBanque();
                            break;
                        case 2:
                            System.out.println("Lister les clients");
                            serviceQOL.listerClientsDeLaBanque();
                            break;
                        case 3:
                            System.out.println("Trier les clients par nom (ASC)");
                            serviceQOL.trierClientsParNom("asc");
                            break;
                        case 4:
                            System.out.println("Trier les clients par nom (DESC)");
                            serviceQOL.trierClientsParNom("desc");
                            break;
                        case 5:
                            System.out.println("Trier les clients par solde (ASC)");
                            serviceQOL.trierClientsParSolde("asc");
                            break;
                        case 6:
                            System.out.println("Trier les clients par solde (DESC)");
                            serviceQOL.trierClientsParSolde("desc");
                            break;
                        case 7:
                            System.out.println("Trier les clients par date (ASC)");
                            serviceQOL.trierClientsParDate("asc");
                            break;
                        case 8:
                            System.out.println("Trier les clients par date (DESC)");
                            serviceQOL.trierClientsParDate("desc");
                            break;
                        case 0:
                            break;
                        default:
                            System.out.println("Choix invalide");
                            break;
                    }

                case 9:
                    break;
                default:
                    System.out.println("Choix invalide");
                    break;
            }
        } while (choix != 9);
    }


}
