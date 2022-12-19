package DecoratorDesignPattern.Models.Caisse;


import DecoratorDesignPattern.Models.Boissons.Boisson;

import java.util.HashMap;
import java.util.Map;

public class Commande {
    private static int id = 1;
    private final int idCommande;

    Map<Boisson, Integer> boissonsCommandees;

    public Commande() {
        idCommande = id++;
        boissonsCommandees = new HashMap<>();
    }

    public void commander(Boisson... boissons) {
        for (Boisson b : boissons) {
            if (boissonsCommandees.containsKey(b)) {
                boissonsCommandees.put(b, boissonsCommandees.get(b) + 1);
            } else {
                boissonsCommandees.put(b, 1);
            }
        }
    }

    public int getIdCommande() {
        return idCommande;
    }

    public void creerEtImprimerFacture() {
        Facture facture = new Facture(this);
        facture.imprimer();
    }
}
