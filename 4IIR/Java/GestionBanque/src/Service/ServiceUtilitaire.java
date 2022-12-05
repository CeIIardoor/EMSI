package Service;

import Model.Banque;

public class ServiceUtilitaire implements IServiceUtilitaire {

    private static Banque banque;

    public ServiceUtilitaire(Banque _banque){
            banque = _banque;
    }
    @Override
    public void consulterInformationsBanque() {
        System.out.println("Informations de la banque :");
        System.out.println("Nom : " + ServiceUtilitaire.banque.getNomAgence());
        System.out.println("Email : " + ServiceUtilitaire.banque.getEmailAgence());
        System.out.println("Nombre de clients : " + ServiceUtilitaire.banque.getClients().size());
        System.out.println("Nombre de comptes : " + ServiceUtilitaire.banque.getComptes().size());
    }

    public void listerClientsDeLaBanque() {
        System.out.println("Liste des clients de la banque :");
        for (int i = 0; i < ServiceUtilitaire.banque.getClients().size(); i++) {
            System.out.println(ServiceUtilitaire.banque.getClients().get(i).getNom() +
                    " " + ServiceUtilitaire.banque.getClients().get(i).getPrenom());
        }
    }

    public void listerComptesDeLaBanque() {
        System.out.println("Liste des comptes de la banque :");
        banque.getComptes().forEach(System.out::println);
    }
}
