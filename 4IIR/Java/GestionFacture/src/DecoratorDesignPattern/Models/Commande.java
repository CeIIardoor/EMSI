package DecoratorDesignPattern.Models;

import DecoratorDesignPattern.Interfaces.ICommande;

public class Commande implements ICommande {
    private static int id = 1;
    private final int idCommande;

    public Commande() {
        this.idCommande = id++;
    }

    public int getIdCommande() {
        return idCommande;
    }

    @Override
    public String decorate() {
        return toString();
    }

    @Override
    public String toString() {
        return "Commande " + idCommande + " : " + '\n';
    }



}
