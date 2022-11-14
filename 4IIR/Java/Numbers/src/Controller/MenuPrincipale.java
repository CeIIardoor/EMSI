package Controller;

import Model.Number;
import Service.ServiceLecture;
import Service.ServiceNombres;

import java.util.Scanner;

public class MenuPrincipale {
    public static void afficherMenu() {
        do {
            System.out.println("Entrer l'opération souhaitée :");
            System.out.println("1 - Addition [+]");
            System.out.println("2 - Soustraction [-]");
            System.out.println("3 - Multiplication [*]");
            System.out.println("4 - Division [/]");
            System.out.println("5 - Inverse [i]");
            System.out.println("6 - Conjugue [c]");
            System.out.println("7 - Module [m]");
            System.out.println("0 - Quitter [q]");
            System.out.println("Votre choix :");
            String choix = new Scanner(System.in).nextLine();
            switch (choix) {
                case "1":
                    System.out.println("Entrer le premier nombre :");
                    Number n1 = ServiceLecture.read(new Scanner(System.in).nextLine());
                    System.out.println("Entrer le deuxième nombre :");
                    Number n2 = ServiceLecture.read(new Scanner(System.in).nextLine());
                    System.out.println("Résultat : " + ServiceNombres.add(n1, n2));
                    break;
                case "2":
                    System.out.println("Entrer le premier nombre :");
                    n1 = ServiceLecture.read(new Scanner(System.in).nextLine());
                    System.out.println("Entrer le deuxième nombre :");
                    n2 = ServiceLecture.read(new Scanner(System.in).nextLine());
                    System.out.println("Résultat : " + ServiceNombres.minus(n1, n2));
                    break;
                case "3":
                    System.out.println("Entrer le premier nombre :");
                    n1 = ServiceLecture.read(new Scanner(System.in).nextLine());
                    System.out.println("Entrer le deuxième nombre :");
                    n2 = ServiceLecture.read(new Scanner(System.in).nextLine());
                    System.out.println("Résultat : " + ServiceNombres.times(n1, n2));
                    break;
                case "4":
                    System.out.println("Entrer le premier nombre :");
                    n1 = ServiceLecture.read(new Scanner(System.in).nextLine());
                    System.out.println("Entrer le deuxième nombre :");
                    n2 = ServiceLecture.read(new Scanner(System.in).nextLine());
                    System.out.println("Résultat : " + ServiceNombres.divide(n1, n2));
                    break;
                case "5":
                    System.out.println("Entrer le nombre :");
                    n1 = ServiceLecture.read(new Scanner(System.in).nextLine());
                    System.out.println("Résultat : " + ServiceNombres.inverse(n1));
                    break;
                case "6":
                    System.out.println("Entrer le nombre :");
                    n1 = ServiceLecture.read(new Scanner(System.in).nextLine());
                    System.out.println("Résultat : " + ServiceNombres.conjugate(n1));
                    break;
                case "7":
                    System.out.println("Entrer le nombre :");
                    n1 = ServiceLecture.read(new Scanner(System.in).nextLine());
                    System.out.println("Résultat : " + ServiceNombres.module(n1));
                    break;

                case "0":
                    System.out.println("Au revoir !");
                    System.exit(0);
                    break;
                default:
                    System.out.println("Choix invalide !");
                    break;
            }

        } while (true);
    }
}
