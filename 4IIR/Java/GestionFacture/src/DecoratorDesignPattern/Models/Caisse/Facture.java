package DecoratorDesignPattern.Models.Caisse;

import DecoratorDesignPattern.Models.Boissons.Boisson;

public class Facture {
    private final Commande commande;

    public Facture(Commande commande) {
        this.commande = commande;
    }

    public double total() {
        double total = 0;
        for (Boisson b : commande.boissonsCommandees.keySet()) {
            total += b.getCout() * commande.boissonsCommandees.get(b);
        }
        return total;
    }

    public String toString() {
        return "Facture n°" + commande.getIdCommande() + " : " + '\n' +
                commande;
    }

    public void imprimer() {
        System.out.println("***********************************************************");
        System.out.println("Facture n°" + commande.getIdCommande() + " : " + '\n');
        for (Boisson b : commande.boissonsCommandees.keySet()) {
            System.out.println(commande.boissonsCommandees.get(b) + " x " + b.getDescription() +
                    " : \t\t\t" + b.getCout() * commande.boissonsCommandees.get(b) + "DH");
        }
        System.out.println("***********************************************************");
        System.out.println("\t\t\t\t\t\tTotal : " + total() + "DH");
        System.out.println("***********************************************************");
    }
}

