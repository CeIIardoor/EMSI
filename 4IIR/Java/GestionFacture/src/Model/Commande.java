package Model;

import java.util.ArrayList;

public class Commande {
    private static int id = 1;
    private final int idCommande;
    private final ArrayList<Boisson> boissons;

    public Commande() {
        this.boissons = new ArrayList<>();
        this.idCommande = id++;
    }

    public Commande addBoisson(Boisson boisson) {
        this.boissons.add(boisson);
        return this;
    }

    public String toString() {
            String output =  "______________________________________________________" + '\n' +
                    '\t' + " " + '\t' + " " + '\t' + "Commande " + this.idCommande + '\n' +
                    "______________________________________________________" + '\n' +
                    "Boissons : " + '\n' +
                    this.boissons.toString() + '\n' +
                    '\t' + " " + '\t' + " " + '\t' + " " + '\t' + " " + '\t' + " " + '\t' +
                    "Total à payer : " + this.getTotal() + "MAD";
            return output;
    }

    private double getTotal() {
        double total = 0;
        for (Boisson boisson : this.boissons) {
            total += boisson.getCout();
        }
        return total;
    }
}
