package TP2;

import java.util.Scanner;

public class Livre {
    static int ID;
    String Titre;
    String Auteur;
    double Prix;

    public int getID(){
        return ID;
    }
    public void setID(){
        Scanner sc = new Scanner(System.in);
        System.out.print("ID : ");
        ID = sc.nextInt();
        sc.close();
    }
    
    public String getTitre(){
        return Titre;
    }
    public void setTitre(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Titre : ");
        Titre = sc.nextLine();
        sc.close();
    }
    public String getAuteur(){
        return Auteur;
    }
    public void setAuteur(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Auteur : ");
        Auteur = sc.nextLine();
        sc.close();
    }
    public double getPrix(){
        return Prix;
    }
    public void setPrix(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Prix : ");
        Prix = sc.nextDouble();
        sc.close();
    }
    public Livre(){
        ID = ID++;
        setTitre();
        setAuteur();
        setPrix();
    }
    @Override
    public String toString(){
        return "Le prix du livre " + Titre + "de l'auteur " + Auteur + "est :" + Prix + "\n"
        + "Le nombre des livres est " + ID;
    }

}
