package Service;

import Model.Banque;

public class ServiceQOL implements IServiceQOL {

    private static Banque banque;

    public ServiceQOL(Banque _banque){
            banque = _banque;
    }
    @Override
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

    public void trierClientsParDate(String ordreDeTri) {
        ServiceUtilitaire serviceUtilitaire = new ServiceUtilitaire(ServiceQOL.banque);
        if (ordreDeTri.equals("asc")) {
            serviceUtilitaire.trierAsc("date");
        } else if (ordreDeTri.equals("desc")) {
            serviceUtilitaire.trierDesc("date");
        } else {
            System.out.println("Erreur : ordre de tri non reconnu");
        }
    }

    public void trierClientsParSolde(String ordreDeTri) {
        ServiceUtilitaire serviceUtilitaire = new ServiceUtilitaire(ServiceQOL.banque);
        if (ordreDeTri.equals("asc")) {
            serviceUtilitaire.trierAsc("solde");
        } else if (ordreDeTri.equals("desc")) {
            serviceUtilitaire.trierDesc("solde");
        } else {
            System.out.println("Erreur : ordre de tri non reconnu");
        }
    }

    public void trierClientsParNom(String ordreDeTri) {
        ServiceUtilitaire serviceUtilitaire = new ServiceUtilitaire(ServiceQOL.banque);
        if (ordreDeTri.equals("asc")) {
            serviceUtilitaire.trierAsc("nom");
        } else if (ordreDeTri.equals("desc")) {
            serviceUtilitaire.trierDesc("nom");
        } else {
            System.out.println("Erreur : ordre de tri non reconnu");
        }
    }
}
