package Service;

import Model.Banque;

public class ServiceUtilitaire {
    /* Fonctions du Service :
    public void afficherMenuServiceBanque()
    public Object[] trierAsc(Object[] objets, Object orderByElement)
    public Object[] trierDec(Object[] objets, Object orderByElement)

     */
    private static Banque banque;

    public ServiceUtilitaire(Banque _banque){
        banque = _banque;
    }

    public void afficherMenuServiceBanque() {
        System.out.println("1. Créer un compte");
        System.out.println("2. Créer un client");
        System.out.println("3. Créer un compte pour un client");
        System.out.println("4. Afficher les comptes");
        System.out.println("5. Afficher les clients");
        System.out.println("6. Afficher les comptes d'un client");
        System.out.println("7. Afficher les clients d'un compte");
        System.out.println("8. Afficher les comptes d'un client par ordre décroissant");
        System.out.println("9. Afficher les clients d'un compte par ordre décroissant");
    }

    public Object[] trierAsc(Object[] objets, Object orderByElement) {
        // TODO : implement polymorphism to sort by any element
        return null;
    }

    public Object[] trierDec(Object[] objets, Object orderByElement) {
        // TODO : implement polymorphism to sort by any element
        return null;
    }
}

