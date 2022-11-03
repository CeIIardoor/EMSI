package Service;

import Model.Banque;

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
}
