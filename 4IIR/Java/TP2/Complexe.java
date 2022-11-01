package TP2;

import java.util.Scanner;

public class Complexe{
    double re, im;
    public Complexe(double re, double im){
        this.re = re;
        this.im = im;
    }
    
    public Complexe(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Partie réelle : ");
        re = sc.nextDouble();
        System.out.print("Partie imaginaire : ");
        im = sc.nextDouble();
        sc.close();

    }
    public Complexe(Complexe c){
        this(c.re, c.im);
    }
    
    @Override
    public String toString(){
        if (im == 0) return re + "";
        if (re == 0) return im + "i";
        if (im <  0) return re + " - " + (-im) + "i";
        return re + " + " + im + "i";
    }
    public Complexe add(Complexe c){
        return new Complexe(re + c.re, im + c.im);
    }
    public Complexe sub(Complexe c){
        return new Complexe(re - c.re, im - c.im);
    }

    public Complexe mul(Complexe c){
        return new Complexe(re * c.re - im * c.im, re * c.im + im * c.re);
    }
    public Complexe div(Complexe c){
        double den = c.re * c.re + c.im * c.im;
        return new Complexe((re * c.re + im * c.im) / den, (im * c.re - re * c.im) / den);
    }
    public Complexe conj(){
        return new Complexe(re, -im);
    }
    public double abs(){
        return Math.sqrt(re * re + im * im);
    }
    public static void main(String[] args) {
        Complexe c1 = new Complexe();
        Complexe c2 = new Complexe(2.0, 3.0);

        System.out.println("Test Somme : ");
        System.out.println(c1.add(c2));
        System.out.println("Test Soustraction : ");
        System.out.println(c1.sub(c2));
        System.out.println("Test Multiplication : ");
        System.out.println(c1.mul(c2));
        System.out.println("Test Division : ");
        System.out.println(c1.div(c2));
        System.out.println("Test Conjugué : ");
        System.out.println(c1.conj());
        System.out.println("Test Module : ");
        System.out.println(c1.abs());
    }

}