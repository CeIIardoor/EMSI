package Service;

import Model.Banque;
import Model.Client;

import java.util.ArrayList;

public class ServiceQOL {
    /* public void consulterInformationsBanque(Scanner clavier)
    public void listerClientsDeLaBanque(Scanner clavier)
    è Ordonné par leur date d’ajout
    è Ordonné par leurs soldes de comptes (ordre croissant ||
    décroissant)
    è Ordonné alphabétiquement (selon leur nom et prénom)
    public Client[] trierClientsParDate (Scanner clavier)
    public Client[] trierClientsParSolde (Scanner clavier)
    public Client[] trierClientsParNom (Scanner clavier)
     */

    private static Banque banque;

    public ServiceQOL(Banque _banque){
            banque = _banque;
    }

    public void consulterInformationsBanque() {
        System.out.println("Informations de la banque :");
        System.out.println("Nom : " + ServiceQOL.banque.getNomAgence());
        System.out.println("Email : " + ServiceQOL.banque.getEmailAgence());
        System.out.println("Nombre de clients : " + ServiceQOL.banque.getClients().size());
        System.out.println("Nombre de comptes : " + ServiceQOL.banque.getComptes().size());
    }

    public void listerClientsDeLaBanque() {
        System.out.println("Liste des clients de la banque :");
        for (int i = 0; i < ServiceQOL.banque.getClients().size(); i++) {
            System.out.println(ServiceQOL.banque.getClients().get(i).getNom() +
                    " " + ServiceQOL.banque.getClients().get(i).getPrenom());
        }
    }

    public ArrayList<Client> trierClientsParDate(String ordreDeTri) {
        ServiceUtilitaire serviceUtilitaire = new ServiceUtilitaire(ServiceQOL.banque);
        if (ordreDeTri.equals("asc")) {
            return serviceUtilitaire.trierAsc("date");
        } else if (ordreDeTri.equals("desc")) {
            return serviceUtilitaire.trierDesc("date");
        } else {
            System.out.println("Erreur : ordre de tri non reconnu");
            return null;
        }
    }

    public ArrayList<Client> trierClientsParSolde(String ordreDeTri) {
        ServiceUtilitaire serviceUtilitaire = new ServiceUtilitaire(ServiceQOL.banque);
        if (ordreDeTri.equals("asc")) {
            return serviceUtilitaire.trierAsc("solde");
        } else if (ordreDeTri.equals("desc")) {
            return serviceUtilitaire.trierDesc("solde");
        } else {
            System.out.println("Erreur : ordre de tri non reconnu");
            return null;
        }
    }

    public ArrayList<Client> trierClientsParNom(String ordreDeTri) {
        ServiceUtilitaire serviceUtilitaire = new ServiceUtilitaire(ServiceQOL.banque);
        if (ordreDeTri.equals("asc")) {
            return serviceUtilitaire.trierAsc("nom");
        } else if (ordreDeTri.equals("desc")) {
            return serviceUtilitaire.trierDesc("nom");
        } else {
            System.out.println("Erreur : ordre de tri non reconnu");
            return null;
        }
    }
}
