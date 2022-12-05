package Controller;

import Model.Commande;

public class CommandesController {

    Commande commande;

    public CommandesController() {
        this.commande = new Commande();
    }
    public Commande getCommande() {
        return commande;
    }
    public void ajouterCommande() {
        System.out.println("Ajouter une commande");

    }

    public static void afficherCommande() {
        System.out.println("Afficher une commande");
    }

    public static void afficherToutesLesCommandes() {
        System.out.println("Afficher toutes les commandes");
    }

    public void quitter() {
        System.out.println("Quitter");
    }
}
