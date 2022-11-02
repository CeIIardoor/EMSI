package Model;

import java.util.ArrayList;
import java.util.Objects;
import java.util.Scanner;
public class Banque{
    /*
    Écrire une classe Banque lié par relation d’agrégation au deux classes Compte et Client :
    Attributs : idBanque, nomAgence, email, maxComptes,
    maxClients et un tableau de comptes, tableau de Clients.
    Accès : getters, setters
    (nombre max de Clients et Comptes doit être fixé dès la
    création de l’agence bancaire)
    (id de la banque doit être auto-généré)
    Méthodes : public String toString(),
    public boolean equals(Object autreBanque)
     */
    private static int cmpBanques = 0;
    private int idBanque;
    private String nomAgence;
    private String email;
    private int maxComptes = 10;
    private int maxClients = 10;
    private ArrayList<CompteBancaire> comptes;
    private ArrayList<Client> clients;

    public int getIdBanque() {
        return idBanque;
    }

    public String getNomAgence() {
        return nomAgence;
    }

    public void setNomAgence(String nomAgence) {
        this.nomAgence = nomAgence;
    }

    public String getEmailAgence() {
        return email;
    }

    public void setEmailAgence(String email) {
        this.email = email;
    }

    public int getMaxComptes() { return maxComptes; }

    public void setMaxComptes(int maxComptes) {
        this.maxComptes = maxComptes;
    }

    public int getMaxClients() {
        return maxClients;
    }

    public void setMaxClients(int maxClients) {
        this.maxClients = maxClients;
    }

    public ArrayList<CompteBancaire> getComptes() {
        return comptes;
    }

    public void setComptes(ArrayList<CompteBancaire> comptes) {
        this.comptes = comptes;
    }

    public ArrayList<Client> getClients() {
        return clients;
    }

    public void setClients(ArrayList<Client> clients) {
        this.clients = clients;
    }

    public Banque(){
        this.idBanque = cmpBanques++;
        Scanner sc = new Scanner(System.in);
        System.out.println("Entrer le nom de l'agence");
        this.nomAgence = sc.nextLine();
        do {
            System.out.println("Entrer l'email de l'agence");
            this.email = sc.nextLine();
        } while (!this.email.matches("^[A-Za-z0-9+_.-]+@(.+)$"));
        do {
            System.out.println("Entrer le nombre max de comptes (>=10) :");
            this.maxComptes = sc.nextInt();
        } while (this.maxComptes < 10);
        do {
            System.out.println("Entrer le nombre max de clients (>=10) :");
            this.maxClients = sc.nextInt();
        } while (this.maxClients < 10);
        this.comptes = new ArrayList<CompteBancaire>(maxComptes);
        this.clients = new ArrayList<Client>(maxClients);
    }
    public Banque(String nomAgence, String email, int maxComptes, int maxClients) {
        idBanque = ++cmpBanques;
        this.nomAgence = nomAgence;
        this.email = email;
        this.maxComptes = maxComptes;
        this.maxClients = maxClients;
        this.comptes = new ArrayList<CompteBancaire>(maxComptes);
        this.clients = new ArrayList<Client>(maxClients);
    }

    public String toString() {
        return "Banque [idBanque=" + idBanque + ", nomAgence=" + nomAgence + ", email=" + email
                + ", maxComptes=" + maxComptes + ", maxClients=" + maxClients + ", comptes=" + comptes + ", clients="
                + clients + "]";
    }

    public boolean equals(Object autreBanque) {
        if (this == autreBanque)
            return true;
        if (autreBanque == null)
            return false;
        if (getClass() != autreBanque.getClass())
            return false;
        Banque other = (Banque) autreBanque;
        return idBanque == other.idBanque && maxClients == other.maxClients && maxComptes == other.maxComptes
                && Objects.equals(clients, other.clients) && Objects.equals(comptes, other.comptes)
                && Objects.equals(email, other.email) && Objects.equals(nomAgence, other.nomAgence);
    }
}