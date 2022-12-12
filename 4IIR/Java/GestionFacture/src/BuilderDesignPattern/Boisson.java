package BuilderDesignPattern;

import java.util.ArrayList;

public class Boisson {
    private final String nom;
    private final double prix;
    private final String description;
    private final ArrayList<Supplement> supplements;

    public Boisson(String nom, double prix, String description) {
        this.nom = nom;
        this.prix = prix;
        this.description = description;
        this.supplements = new ArrayList<>();
    }

    public Boisson addSupplement(Supplement supplement) {
        this.supplements.add(supplement);
        return this;
    }

    public String getNom() {
        return nom;
    }

    public double getPrix() {
        return prix;
    }

    public String getDescription() {
        return description;
    }

    public ArrayList<Supplement> getSupplements() {
        return supplements;
    }

    public String toString() {
        return  "**************************************************" + '\n' +
                '\t' + " ~> Boisson " + this.nom + " : " + this.prix + "MAD" + '\n' +
                " + Supplements : " + '\n' +
                this.supplements.toString() + '\n' +
                '\t' + " " + '\t' + " " + '\t' +
                "Sous-Total :" + this.getCout() + "MAD" + '\n' +
                "**************************************************" + '\n';

    }

    public double getCout() {
        double cout = this.prix;
        for (Supplement supplement : this.supplements) {
            cout += supplement.getPrix();
        }
        return cout;
    }

}
