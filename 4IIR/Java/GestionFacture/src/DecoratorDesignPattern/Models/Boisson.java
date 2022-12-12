package DecoratorDesignPattern.Models;

import DecoratorDesignPattern.Decorators.CommandeDecorator;
import DecoratorDesignPattern.Interfaces.IBoisson;

public class Boisson extends CommandeDecorator implements IBoisson {

    private final String nom;
    private final double prix;

    public Boisson(Commande commande, String nom, double prix) {
        super(commande);
        this.nom = nom;
        this.prix = prix;
    }

    public String cout() {
        return super.cout() + coutWithBoisson();
    }

    public String toString() {
        return '\t' + " " + '\t' + " + Boisson " + this.nom + " : " + this.prix + "MAD" + '\n';
    }

    private String coutWithBoisson() {
        return toString();
    }

    public double getTotal()
    {
        return super.getTotal() + this.prix;
    }
}
