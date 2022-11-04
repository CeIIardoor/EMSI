package Model;

import java.util.ArrayList;
import java.util.Date;
import java.util.Objects;
import java.util.Scanner;

public class Client {
    /*
    Attributs : idClient, nom, prénom, email, tableau de journalisation et
    un tableau de comptes
    Accès : getters, setters
    (email doit être conforme au format Email )
    (id doit être auto-généré)
    Méthodes : public String toString(),
    public boolean equals(Object autreClient)
     */
    private static int cmpClients = 0;
    private int idClient;
    private String nom;
    private String prenom;
    private String email;
    private ArrayList<String> journalisation;
    private ArrayList<Compte> comptes;
    private int maxComptes = 2;
    private Date dateAjout;

    public int getIdClient() {
        return idClient;
    }

    public void setIdClient(int idClient) {
        this.idClient = idClient;
    }

    public String getNom() {
        return nom;
    }

    public void setNom(String nom) {
        this.nom = nom;
    }

    public String getPrenom() {
        return prenom;
    }

    public void setPrenom(String prenom) {
        this.prenom = prenom;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public ArrayList<String> getJournalisation() {
        return journalisation;
    }

    public void setJournalisation(ArrayList<String> journalisation) {
        this.journalisation = journalisation;
    }

    public ArrayList<Compte> getComptes() {
        return comptes;
    }

    public void setComptes(ArrayList<Compte> comptes) {
        this.comptes = comptes;
    }

    public void ajouterCompte(Compte compte) {
        this.comptes.add(compte);
    }

    public void retirerCompte(Compte compte) {
        this.comptes.remove(compte);
    }

    public void ajouterJournalisation(String journalisation) {
        this.journalisation.add(journalisation);
    }

    public void retirerJournalisation(String journalisation) {
        this.journalisation.remove(journalisation);
    }

    @Override
    public String toString() {
        return "Client [idClient=" + idClient + ", nom=" + nom + ", prenom=" + prenom + ", email=" + email
                + ", journalisation=" + journalisation + ", comptes=" + comptes + "]";
    }

    @Override
    public boolean equals(Object autreClient) {
        if (this == autreClient) return true;
        if (autreClient == null || getClass() != autreClient.getClass()) return false;
        Client client = (Client) autreClient;
        return Objects.equals(nom, client.nom) &&
                Objects.equals(prenom, client.prenom) &&
                Objects.equals(email, client.email) &&
                journalisation.equals(client.journalisation) &&
                comptes.equals(client.comptes);
    }

    public Client(){
        System.out.println("Entrer le nom du client : ");
        this.nom = new Scanner(System.in).nextLine();
        System.out.println("Entrer le prénom du client : ");
        this.prenom = new Scanner(System.in).nextLine();
        do {
            System.out.println("Entrer l'email du client : ");
            this.email = new Scanner(System.in).nextLine();
        } while (!this.email.matches("^[a-zA-Z0-9._-]+@[a-z0-9._-]{2,}\\.[a-z]{2,4}$"));
        this.idClient = cmpClients++;
        this.journalisation = new ArrayList<String>();
        this.comptes = new ArrayList<Compte>(2);
        this.dateAjout = new Date();
        this.journalisation.add("Création du client le " + new Date());
    }
    public Client(String nom, String prenom, String email) {
        this.idClient = ++cmpClients;
        this.nom = nom;
        this.prenom = prenom;
        this.email = email;
        this.dateAjout = new Date();
        this.journalisation = new ArrayList<String>();
        this.comptes = new ArrayList<Compte>(2);
    }

    public int getMaxComptes() {
        return maxComptes;
    }

    public Date getDateAjout() {
        return dateAjout;
    }

    public double getSoldeTotal() {
        double sum = 0;
        for (Compte compte : comptes) {
             sum += compte.getSolde();
        }
        return sum;
    }
}