package DecoratorDesignPattern;

import DecoratorDesignPattern.Models.Boisson;
import DecoratorDesignPattern.Models.Commande;
import DecoratorDesignPattern.Models.Supplement;

public class Main {

    public static void main(String[] args) {
        Commande commande1 = new Commande();
        Boisson boisson1 = new Boisson(commande1, "Café Colombia", 10);
        Supplement supplement1 = new Supplement(boisson1, "Chantilly", 5);

        System.out.println(supplement1.decorate());
        }

    }
