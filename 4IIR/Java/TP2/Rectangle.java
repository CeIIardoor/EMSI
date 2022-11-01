package TP2;

import java.util.Scanner;

public class Rectangle {
    int longueur, largeur;
    public Rectangle(){
        Scanner sc = new Scanner(System.in);
        System.out.print("longueur = ");
        longueur = sc.nextInt();
        System.out.print("largeur = ");
        largeur = sc.nextInt();
        sc.close();        
    }
    public int périmètre(){
        return longueur*2 + largeur*2;
    }
    public int aire(){
        return longueur * largeur;
    }
    public boolean isCarre(){
        return (longueur == largeur);
    }
    @Override
    public String toString(){
        if (isCarre()){
            return "longueur = " + longueur + "largeur = " + largeur + "\n" 
        + "périmètre = " + périmètre() + "aire = " + aire() + "\n"
        + "Ceci est un carré";
        } else {
            return "longueur = " + longueur + "largeur = " + largeur + "\n" 
        + "périmètre = " + périmètre() + "aire = " + aire() + "\n"
        + "Ceci n'est pas un carré";
        }
        

    }
}
