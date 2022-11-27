package Service;

import Model.Client;

import java.util.ArrayList;

public interface IServiceUtilitaire {
    public ArrayList<Client> trierAsc(String trierPar);

    public ArrayList<Client> trierDesc(String trierPar);
}
