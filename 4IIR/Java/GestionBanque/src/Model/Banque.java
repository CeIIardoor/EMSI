package Model;

import java.util.ArrayList;
import java.util.Objects;
import java.util.Scanner;
public class Banque{
    /*
    Écrire une classe Banque liée par relation d’agrégation au deux classes Compte et Client :
    Attributs : idBanque, nomAgence, email, maxComptes,
    maxClients et un tableau de comptes, tableau de Clients.
    Accès : getters, setters
    (nombre max de Clients et Comptes doit être fixé dès la
    création de l’agence bancaire)
    (id de la banque doit être autogénéré)
    Méthodes : public String toString(),
    public boolean equals(Object autreBanque)
     */
    private static int cmpBanques = 0;
    private int idBanque;
    private String nomAgence;
    private String email;
    private int maxComptes;
    private int maxClients;
    private ArrayList<Compte> comptes;
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

    public ArrayList<Compte> getComptes() {
        return comptes;
    }

    public ArrayList<Client> getClients() {
        return clients;
    }

    public Banque(){
        this.idBanque = cmpBanques++;
        Scanner sc = new Scanner(System.in);
        System.out.println("Entrer le nom de l'agence");
        this.nomAgence = sc.nextLine();
        do {
            System.out.println("Entrer l'email de l'agence");
            this.email = sc.nextLine();
        } while (!this.email.matches("^[a-z0-9._%+-]+@[a-z0-9.-]+\\.[a-z]{2,6}$"));
        do {
            System.out.println("Entrer le nombre max de comptes (>=10) :");
            this.maxComptes = sc.nextInt();
        } while (this.maxComptes < 10);
        do {
            System.out.println("Entrer le nombre max de clients (>=10) :");
            this.maxClients = sc.nextInt();
        } while (this.maxClients < 10);
        this.comptes = new ArrayList<Compte>(maxComptes);
        this.clients = new ArrayList<Client>(maxClients);
    }
    public Banque(String nomAgence, String email, int maxComptes, int maxClients) {
        idBanque = ++cmpBanques;
        this.nomAgence = nomAgence;
        this.email = email;
        this.maxComptes = maxComptes;
        this.maxClients = maxClients;
        this.comptes = new ArrayList<Compte>(maxComptes);
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
    public void ajouterCompte(Compte compte){
        if (this.comptes.size() < this.maxComptes){
            this.comptes.add(compte);
            System.out.println("Compte" + compte.getIdCompte() + " ajouté avec succès");
        } else {
            System.out.println("Impossible d'ajouter le compte " + compte.getIdCompte() + " : nombre max de comptes atteint");
        }
    }

    public void ajouterClient(Client client){
        if (this.clients.size() < this.maxClients){
            this.clients.add(client);
            System.out.println("Client" + client.getIdClient() + " ajouté avec succès");
        } else {
            System.out.println("Impossible d'ajouter le client " + client.getIdClient() + " : nombre max de clients atteint");
        }
    }

    public Compte getCompteById(int idCompte){
        for (Compte compte : this.comptes){
            if (compte.getIdCompte() == idCompte){
                System.out.println(compte);
            }
        }
        return null;
    }
}