package Service;

import Model.Banque;
import Model.Client;

import java.util.ArrayList;

public class ServiceTri implements IServiceTri {
    private static Banque banque;

    public ServiceTri(Banque _banque){
        banque = _banque;
    }

    public ArrayList<Client> trierAsc(String trierPar) {
        ArrayList<Client> tableauATrier = new ArrayList<>(banque.getClients());
        for (int i = 0; i < tableauATrier.size(); i++) {
            for (int j = 0; j < tableauATrier.size(); j++) {
                switch (trierPar) {
                    case "date":
                        if (tableauATrier.get(i).getDateAjout().compareTo(tableauATrier.get(j).getDateAjout()) < 0) {
                            Client temp = tableauATrier.get(i);
                            tableauATrier.set(i, tableauATrier.get(j));
                            tableauATrier.set(j, temp);
                        }
                        break;
                    case "solde":
                        if (tableauATrier.get(i).getSoldeTotal() < tableauATrier.get(j).getSoldeTotal()) {
                            Client temp = tableauATrier.get(i);
                            tableauATrier.set(i, tableauATrier.get(j));
                            tableauATrier.set(j, temp);
                        }
                        break;
                    case "nom":
                        if(tableauATrier.get(i).getNom().compareTo(tableauATrier.get(j).getNom()) < 0){
                            Client temp = tableauATrier.get(i);
                            tableauATrier.set(i, tableauATrier.get(j));
                            tableauATrier.set(j, temp);
                        }
                        break;
                }
            }
        }
        tableauATrier.forEach(System.out::println);
        return tableauATrier;
    }

    public ArrayList<Client> trierDesc(String trierPar) {
        ArrayList<Client> tableauATrier = new ArrayList<>(banque.getClients());
        for (int i = 0; i < tableauATrier.size(); i++) {
            for (int j = 0; j < tableauATrier.size(); j++) {
                switch (trierPar) {
                    case "date":
                        if (tableauATrier.get(i).getDateAjout().compareTo(tableauATrier.get(j).getDateAjout()) > 0) {
                            Client temp = tableauATrier.get(i);
                            tableauATrier.set(i, tableauATrier.get(j));
                            tableauATrier.set(j, temp);
                        }
                        break;
                    case "solde":
                        if (tableauATrier.get(i).getSoldeTotal() > tableauATrier.get(j).getSoldeTotal()) {
                            Client temp = tableauATrier.get(i);
                            tableauATrier.set(i, tableauATrier.get(j));
                            tableauATrier.set(j, temp);
                        }
                        break;
                    case "nom":
                        if (tableauATrier.get(i).getNom().compareTo(tableauATrier.get(j).getNom()) > 0) {
                            Client temp = tableauATrier.get(i);
                            tableauATrier.set(i, tableauATrier.get(j));
                            tableauATrier.set(j, temp);
                        }
                        break;
                }
            }
        }
        tableauATrier.forEach(System.out::println);
        return tableauATrier;
    }
}

