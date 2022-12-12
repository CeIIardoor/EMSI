package BuilderDesignPattern;

public class Supplement {
    private String nom;
    private double prix;

    public Supplement(String nom, double prix) {
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
        return '\t' + " " + '\t' + "Supplement " + this.nom + " : " + this.prix + "MAD" + '\n';
    }
}
