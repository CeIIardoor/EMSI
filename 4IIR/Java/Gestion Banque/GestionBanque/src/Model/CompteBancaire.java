package Model;

import java.util.ArrayList;
import java.util.Date;

public class CompteBancaire {
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

    private static int idCompte;
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


    public CompteBancaire(double solde, Client proprietaire) {
        idCompte = idCompte++;
        this.solde = solde;
        this.dateCreation = new Date().toString();
        this.journalisation = new ArrayList<String>();
        this.proprietaire = proprietaire;
        this.journalisation.add("Création du compte le " + dateCreation);
        if (solde > 0) {
            this.journalisation.add("Dépôt de " + solde + "dh");
        } else if (solde < 0) {
            throw new IllegalArgumentException("Solde initial doit être positif");
        }
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

        CompteBancaire c = (CompteBancaire) autreCompte;
        return  dateCreation.equals(c.dateCreation)
                && journalisation.equals(c.journalisation)
                && proprietaire.equals(c.proprietaire);
    }

}
