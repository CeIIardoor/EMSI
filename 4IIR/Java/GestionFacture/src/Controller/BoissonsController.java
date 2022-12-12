package Controller;

import Model.Commande;

public class BoissonsController {
    private Commande commande;

    BoissonsController(Commande commande) {
        this.commande = commande;
    }

    public static void ajouterBoisson() {
        System.out.println("Ajouter une boisson");
    }

    public static void afficherBoisson() {
        System.out.println("Afficher une boisson");
    }

    public static void afficherToutesLesBoissons() {
        System.out.println("Afficher toutes les boissons");
    }
}
