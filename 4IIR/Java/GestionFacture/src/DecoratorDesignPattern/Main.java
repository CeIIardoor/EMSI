package DecoratorDesignPattern;

import DecoratorDesignPattern.Models.Boissons.*;
import DecoratorDesignPattern.Models.Caisse.Commande;
import DecoratorDesignPattern.Models.Supplement.Chocolat;

public class Main {

    public static void main(String[] args) {

            Commande commande = new Commande();

            commande.commander(new Espresso(),
                    new Chocolat(new Sumatra()),
                    new Chocolat(new Chocolat(new Deca())),
                    new Espresso(),
                    new Bueno(),
                    new Colombia(),
                    new Colombia(),
                    new Colombia(),
                    new Colombia());

            commande.creerEtImprimerFacture();
        }

    }
