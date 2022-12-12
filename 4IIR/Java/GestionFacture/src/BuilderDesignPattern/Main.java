package BuilderDesignPattern;

import BuilderDesignPattern.Boisson;
import BuilderDesignPattern.Commande;
import BuilderDesignPattern.Supplement;

public class Main {
    public static void main(String[] args) {
        Commande commande = new Commande();
        Boisson cafeColombia = new Boisson("Café Colombia", 15, "Café colombien");
        Boisson cafeEthiopia = new Boisson("Café Ethiopia", 20, "Café éthiopien");
        Supplement lait = new Supplement("Lait", 5);
        Supplement chantilly = new Supplement("Chantilly", 7);
        Supplement caramel = new Supplement("Caramel", 4);
        Supplement chocolat = new Supplement("Chocolat", 6);


        // Builder design pattern
        cafeEthiopia.addSupplement(lait).addSupplement(chantilly).addSupplement(caramel);
        cafeColombia.addSupplement(caramel).addSupplement(chocolat).addSupplement(caramel);

        commande.addBoisson(cafeColombia).addBoisson(cafeEthiopia);

        System.out.println(commande);
    }
}