package Controller;

import Model.Banque;

public class MenuBanque {
    private static Banque banque;

    public MenuBanque(Banque _banque){
        banque = _banque;
    }

    public static void afficherMenuBanque(){
        System.out.println("1. Afficher la banque");
        System.out.println("2. Afficher les clients");
        System.out.println("3. Afficher les comptes");
        System.out.println("4. Service CRUD");
        System.out.println("5. Service QOL");
        System.out.println("6. Service Transactionnel");
        System.out.println("7. Service Utilitaire");
        System.out.println("0. Quitter");
    }

    public static void afficherMenuCRUD(){
        System.out.println("1. Ajouter un client");
        System.out.println("2. Ajouter un compte");
        System.out.println("3. Modifier un client");
        System.out.println("4. Modifier un compte");
        System.out.println("5. Supprimer un client");
        System.out.println("6. Supprimer un compte");
        System.out.println("0. Retour");
    }

    public static void afficherMenuQOL(){
        System.out.println("1. Afficher les comptes d'un client");
        System.out.println("2. Afficher les clients d'un compte");
        System.out.println("3. Afficher les comptes d'un client par type");
        System.out.println("4. Afficher les clients d'un compte par type");
        System.out.println("5. Afficher les comptes d'un client par solde");
        System.out.println("6. Afficher les clients d'un compte par solde");
        System.out.println("0. Retour");
    }

    public static void afficherMenuTransactionnel(){
        System.out.println("1. Créditer un compte");
        System.out.println("2. Débiter un compte");
        System.out.println("3. Virement");
        System.out.println("0. Retour");
    }

    public static void afficherMenuUtilitaire(){
        System.out.println("1. Afficher la banque");
        System.out.println("2. Afficher les clients");
        System.out.println("3. Afficher les comptes");
        System.out.println("0. Retour");
    }

}
