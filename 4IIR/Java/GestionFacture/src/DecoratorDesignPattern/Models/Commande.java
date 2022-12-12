package DecoratorDesignPattern.Models;

import DecoratorDesignPattern.Interfaces.ICommande;

public class Commande implements ICommande {
    private static int id = 1;
    private final int idCommande;

    public Commande() {
        this.idCommande = id++;
    }


    @Override
    public String cout() {
        return toString();
    }

    @Override
    public String toString() {
        return "Commande " + idCommande + " : " + '\n';
    }

    @Override
    public double getTotal() {
        return 0;
    }

}
