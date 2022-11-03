package Model;

import Service.ServiceCRUD;

import java.util.ArrayList;
import java.util.Date;
import java.util.Scanner;

public class Compte {
    /*
    Écrire une classe Compte définissant un compte bancaire :
    Attributs : idCompte, solde, date de création, tableau de
    journalisation et un propriétaire (Client)
    Accès : getters, setters
    (Solde initiale doit être positif)
    (id doit être auto-généré)
    (la journalisation de la création du compte est stocké dès
    l’initialisation du compte, ainsi que le dépôt du solde
    initiale si ce n'est pas 0dh)
    Méthodes : public String toString(),
    public boolean equals(Object autreCompte)
     */
    public static int cmpCompte = 0;
    private int idCompte;
    private double solde;
    private String dateCreation;
    private ArrayList<String> journalisation;
    private Client proprietaire;

    public int getIdCompte() {
        return idCompte;
    }

    public double getSolde() {
        return solde;
    }

    public void setSolde(double solde) {
        this.solde = solde;
    }

    public String getDateCreation() {
        return dateCreation;
    }

    public void setDateCreation(String dateCreation) {
        this.dateCreation = dateCreation;
    }

    public ArrayList<String> getJournalisation() {
        return journalisation;
    }

    public void setJournalisation(ArrayList<String> journalisation) {
        this.journalisation = journalisation;
    }

    public Client getProprietaire() {
        return proprietaire;
    }

    public void setProprietaire(Client proprietaire) {
        this.proprietaire = proprietaire;
    }

    public Compte(){
        idCompte = cmpCompte++;
        System.out.println("Entrer le solde initial du compte : ");
        do{
            solde = new Scanner(System.in).nextDouble();
            if(solde < 0){
                System.out.println("Le solde doit être positif, veuillez réessayer : ");
            }
        }while(solde < 0);
        dateCreation = new Date().toString();
        journalisation = new ArrayList<>();
        journalisation.add("Création du compte le " + dateCreation);
        if(solde != 0){
            journalisation.add("Dépôt de " + solde + "dh");
        }
        System.out.println("Propriétaire existant ? : ([O]/N)");
        String choix = new Scanner(System.in).nextLine();
        if(choix.equalsIgnoreCase("O")){
            System.out.println("Entrer l'id du propriétaire : ");
            int idProprietaire = new Scanner(System.in).nextInt();
            proprietaire = ServiceCRUD.getClientById(idProprietaire);
        }else{
            proprietaire = new Client();
        }
    }
    public Compte(Client proprietaire){
        //Client deja existant
        idCompte = cmpCompte++;
        do {
            System.out.println("Entrer le solde initial du compte : ");
            solde = new Scanner(System.in).nextDouble();
            if (solde < 0) {
                System.out.println("Le solde doit être positif, veuillez réessayer : ");
            }
        } while (solde < 0);
        dateCreation = new Date().toString();
        journalisation = new ArrayList<>();
        journalisation.add("Création du compte le " + dateCreation);
        if(solde != 0){
            journalisation.add("Dépôt de " + solde + "dh");
        }
        this.proprietaire = proprietaire;
    }
    @Override
    public String toString() {
        return "Compte[" +
                "idCompte=" + idCompte +
                ", solde=" + solde +
                ", dateCreation='" + dateCreation + '\n' +
                ", journalisation=" + journalisation +
                ", proprietaire=" + proprietaire +
                ']';
    }

    @Override
    public boolean equals(Object autreCompte) {
        if (this == autreCompte) return true;
        if (autreCompte == null || getClass() != autreCompte.getClass()) return false;

        Compte c = (Compte) autreCompte;
        return  dateCreation.equals(c.dateCreation)
                && journalisation.equals(c.journalisation)
                && proprietaire.equals(c.proprietaire);
    }

}
