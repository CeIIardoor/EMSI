package DecoratorDesignPattern.Models;

import DecoratorDesignPattern.Decorators.BoissonDecorator;
import DecoratorDesignPattern.Interfaces.ISupplement;

public class Supplement extends BoissonDecorator implements ISupplement {
    private final String nom;
    private final double prix;

    public Supplement(Boisson boisson, String nom, double prix) {
        super(boisson);
        this.nom = nom;
        this.prix = prix;
    }

    public String getNom() {
        return nom;
    }

    public double getPrix() {
        return prix;
    }

    public String toString() {
        return '\t' + " " + '\t' + " - Supplement " + this.nom + " : " + this.prix + "MAD" + '\n';
    }
    public String decorate()
    {
        return super.decorate() + decorateWithSupplement();
    }
    private String decorateWithSupplement() {
        return toString();
    }
}
