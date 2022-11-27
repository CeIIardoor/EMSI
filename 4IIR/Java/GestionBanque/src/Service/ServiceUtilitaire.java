package Service;

import Model.Banque;
import Model.Client;

import java.util.ArrayList;

public class ServiceUtilitaire implements IServiceUtilitaire {
    private static Banque banque;

    public ServiceUtilitaire(Banque _banque){
        banque = _banque;
    }

    public ArrayList<Client> trierAsc(String trierPar) {
        for (int i = 0; i < ServiceUtilitaire.banque.getClients().size(); i++) {
            for (int j = 0; j < ServiceUtilitaire.banque.getClients().size(); j++) {
                switch (trierPar) {
                    case "date":
                        if (ServiceUtilitaire.banque.getClients().get(i).getDateAjout()
                                .compareTo(ServiceUtilitaire.banque.getClients().get(j).getDateAjout()) < 0) {
                            Client temp = ServiceUtilitaire.banque.getClients().get(i);
                            ServiceUtilitaire.banque.getClients().set(i, ServiceUtilitaire.banque.getClients().get(j));
                            ServiceUtilitaire.banque.getClients().set(j, temp);
                        }
                        break;
                    case "solde":
                        if (ServiceUtilitaire.banque.getClients().get(i).getSoldeTotal()
                                < ServiceUtilitaire.banque.getClients().get(j).getSoldeTotal()) {
                            Client temp = ServiceUtilitaire.banque.getClients().get(i);
                            ServiceUtilitaire.banque.getClients().set(i, ServiceUtilitaire.banque.getClients().get(j));
                            ServiceUtilitaire.banque.getClients().set(j, temp);
                        }

                        break;
                    case "nom":
                        if (ServiceUtilitaire.banque.getClients().get(i).getNom()
                                .compareTo(ServiceUtilitaire.banque.getClients().get(j).getNom()) < 0) {
                            Client temp = ServiceUtilitaire.banque.getClients().get(i);
                            ServiceUtilitaire.banque.getClients().set(i, ServiceUtilitaire.banque.getClients().get(j));
                            ServiceUtilitaire.banque.getClients().set(j, temp);
                        }
                        break;
                }
            }
        }
        return ServiceUtilitaire.banque.getClients();
    }

    public ArrayList<Client> trierDesc(String trierPar) {
        for (int i = 0; i < ServiceUtilitaire.banque.getClients().size(); i++) {
            for (int j = 0; j < ServiceUtilitaire.banque.getClients().size(); j++) {
                switch (trierPar) {
                    case "date":
                        if (ServiceUtilitaire.banque.getClients().get(i).getDateAjout()
                                .compareTo(ServiceUtilitaire.banque.getClients().get(j).getDateAjout()) > 0) {
                            Client temp = ServiceUtilitaire.banque.getClients().get(i);
                            ServiceUtilitaire.banque.getClients().set(i, ServiceUtilitaire.banque.getClients().get(j));
                            ServiceUtilitaire.banque.getClients().set(j, temp);
                        }
                        break;
                    case "solde":

                        if (ServiceUtilitaire.banque.getClients().get(i).getSoldeTotal() >
                                ServiceUtilitaire.banque.getClients().get(j).getSoldeTotal()) {
                            Client temp = ServiceUtilitaire.banque.getClients().get(i);
                            ServiceUtilitaire.banque.getClients().set(i, ServiceUtilitaire.banque.getClients().get(j));
                            ServiceUtilitaire.banque.getClients().set(j, temp);
                        }

                        break;
                    case "nom":

                        if (ServiceUtilitaire.banque.getClients().get(i).getNom()
                                .compareTo(ServiceUtilitaire.banque.getClients().get(j).getNom()) > 0) {
                            Client temp = ServiceUtilitaire.banque.getClients().get(i);
                            ServiceUtilitaire.banque.getClients().set(i, ServiceUtilitaire.banque.getClients().get(j));
                            ServiceUtilitaire.banque.getClients().set(j, temp);
                        }
                        break;
                }
            }
        }
        return ServiceUtilitaire.banque.getClients();
    }
}

