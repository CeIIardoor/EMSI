package TP2;

import java.util.Scanner;

public class Eq2degre {
    double r1, r2;
    double delta;
    double a, b, c;
    Complexe c1, c2;
    public Eq2degre(double a, double b, double c){
        this.a = a;
        this.b = b;
        this.c = c;
    }
    public Eq2degre(){
        Scanner sc = new Scanner(System.in);
        System.out.print("a = ");
        a = sc.nextDouble();
        System.out.print("b = ");
        b = sc.nextDouble();
        System.out.print("c = ");
        c = sc.nextDouble();
        sc.close();
    }
    public Eq2degre(Eq2degre e){
        this(e.a, e.b, e.c);
    }
    public void afficherDiscriminant(){
        delta = b*b - 4*a*c;
        System.out.println("Delta = " + delta);
    }
    public void resoudre(){
        if (delta < 0) {
            c1 = new Complexe(-b/(2*a), Math.sqrt(-delta)/(2*a));
            c2 = new Complexe(-b/(2*a), -Math.sqrt(-delta)/(2*a));
            System.out.println("Les racines sont : " + c1 + " et " + c2);
        }
        if (delta == 0) {
            r1 = -b/(2*a);
            System.out.println("La racine est " + r1);
        }
        if (delta > 0) {
            r1 = (-b + Math.sqrt(delta))/(2*a);
            r2 = (-b - Math.sqrt(delta))/(2*a);
            System.out.println("Les racines sont " + r1 + " et " + r2);
        }
    }
    public void afficherSolutions(){
        if (delta < 0) {
            System.out.println("Les racines sont : " + c1 + " et " + c2);
        }
        if (delta == 0) {
            System.out.println("La racine est " + r1);
        }
        if (delta > 0) {
            System.out.println("Les racines sont " + r1 + " et " + r2);
        }
    }

    public static void main(String[] args) {
        // Eq2degre e = new Eq2degre(-2, 1, 3);
        Eq2degre e = new Eq2degre();
        e.afficherDiscriminant();
        e.resoudre();
        e.afficherSolutions();
    }
}
