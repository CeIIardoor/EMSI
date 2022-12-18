package Service.Interfaces;

import Model.Client;

import java.util.ArrayList;

public interface IServiceTri {
    public ArrayList<Client> trierAsc(String trierPar);

    public ArrayList<Client> trierDesc(String trierPar);
}
