package Service;

import Model.Banque;
import Model.Client;

import java.util.ArrayList;

public class ServiceUtilitaire {
    /* Fonctions du Service :
    public void afficherMenuServiceBanque()
    public Object[] trierAsc(Object orderByElement)
    public Object[] trierDec(Object orderByElement)

     */
    private static Banque banque;

    public ServiceUtilitaire(Banque _banque){
        banque = _banque;
    }

    public void afficherMenuServiceBanque() {
        System.out.println("1. Créer un compte");
        System.out.println("2. Créer un client");
        System.out.println("3. Créer un compte pour un client");
        System.out.println("4. Afficher les comptes");
        System.out.println("5. Afficher les clients");
        System.out.println("6. Afficher les comptes d'un client");
        System.out.println("7. Afficher les clients d'un compte");
        System.out.println("8. Afficher les comptes d'un client par ordre décroissant");
        System.out.println("9. Afficher les clients d'un compte par ordre décroissant");
    }

    public ArrayList<Client> trierAsc(String trierPar) {
        for (int i = 0; i < ServiceUtilitaire.banque.getClients().size(); i++) {
            for (int j = 0; j < ServiceUtilitaire.banque.getClients().size(); j++) {
                if (trierPar.equals("date")) {
                    if (ServiceUtilitaire.banque.getClients().get(i).getDateAjout()
                            .compareTo(ServiceUtilitaire.banque.getClients().get(j).getDateAjout()) < 0) {
                        Client temp = ServiceUtilitaire.banque.getClients().get(i);
                        ServiceUtilitaire.banque.getClients().set(i, ServiceUtilitaire.banque.getClients().get(j));
                        ServiceUtilitaire.banque.getClients().set(j, temp);
                    }
                } else if (trierPar.equals("solde")) {
                    if (ServiceUtilitaire.banque.getClients().get(i).getSoldeTotal()
                            < ServiceUtilitaire.banque.getClients().get(j).getSoldeTotal()) {
                        Client temp = ServiceUtilitaire.banque.getClients().get(i);
                        ServiceUtilitaire.banque.getClients().set(i, ServiceUtilitaire.banque.getClients().get(j));
                        ServiceUtilitaire.banque.getClients().set(j, temp);
                    }

                } else if (trierPar.equals("nom")) {
                    if (ServiceUtilitaire.banque.getClients().get(i).getNom()
                            .compareTo(ServiceUtilitaire.banque.getClients().get(j).getNom()) < 0) {
                        Client temp = ServiceUtilitaire.banque.getClients().get(i);
                        ServiceUtilitaire.banque.getClients().set(i, ServiceUtilitaire.banque.getClients().get(j));
                        ServiceUtilitaire.banque.getClients().set(j, temp);
                    }
                }
            }
        }
        return ServiceUtilitaire.banque.getClients();
    }

    public ArrayList<Client> trierDesc(String trierPar) {
        for (int i = 0; i < ServiceUtilitaire.banque.getClients().size(); i++) {
            for (int j = 0; j < ServiceUtilitaire.banque.getClients().size(); j++) {
                if (trierPar.equals("date")) {

                    if (ServiceUtilitaire.banque.getClients().get(i).getDateAjout()
                            .compareTo(ServiceUtilitaire.banque.getClients().get(j).getDateAjout()) > 0) {
                        Client temp = ServiceUtilitaire.banque.getClients().get(i);
                        ServiceUtilitaire.banque.getClients().set(i, ServiceUtilitaire.banque.getClients().get(j));
                        ServiceUtilitaire.banque.getClients().set(j, temp);
                    }
                } else if (trierPar.equals("solde")) {

                    if (ServiceUtilitaire.banque.getClients().get(i).getSoldeTotal() >
                            ServiceUtilitaire.banque.getClients().get(j).getSoldeTotal()) {
                        Client temp = ServiceUtilitaire.banque.getClients().get(i);
                        ServiceUtilitaire.banque.getClients().set(i, ServiceUtilitaire.banque.getClients().get(j));
                        ServiceUtilitaire.banque.getClients().set(j, temp);
                    }

                } else if (trierPar.equals("nom")) {

                    if (ServiceUtilitaire.banque.getClients().get(i).getNom()
                            .compareTo(ServiceUtilitaire.banque.getClients().get(j).getNom()) > 0) {
                        Client temp = ServiceUtilitaire.banque.getClients().get(i);
                        ServiceUtilitaire.banque.getClients().set(i, ServiceUtilitaire.banque.getClients().get(j));
                        ServiceUtilitaire.banque.getClients().set(j, temp);
                    }
                }
            }
        }
        return ServiceUtilitaire.banque.getClients();
    }
}

