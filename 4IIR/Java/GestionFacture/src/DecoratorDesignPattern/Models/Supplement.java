package DecoratorDesignPattern.Models;

import DecoratorDesignPattern.Decorators.BoissonDecorator;
import DecoratorDesignPattern.Decorators.SupplementDecorator;
import DecoratorDesignPattern.Interfaces.ISupplement;

public class Supplement extends BoissonDecorator implements ISupplement {
    private final String nom;
    private final double prix;

    public Supplement(Boisson boisson, String nom, double prix) {
        super(boisson);
        this.nom = nom;
        this.prix = prix;
    }

    public String toString() {
        return '\t' + " " + '\t' + " - Supplement " + this.nom + " : " + this.prix + "MAD" + '\n';
    }
    public String cout()
    {
        return super.cout() + coutWithSupplement();
    }
    private String coutWithSupplement() {
        return toString() + '\n' +
                '\t' + " " + '\t' + " " + '\t' +
                " => Total : " + getTotal() + "MAD" + '\n';
    }

    public double getTotal()
    {
        return super.getTotal() + this.prix;
    }
}
