package Swing;

import Model.Client;

import java.util.ArrayList;

public class ClientsData {
    ArrayList<Client> clients;

    public ClientsData() {
        this.clients = new ArrayList();
        this.clients.add(new Client("John", "Doe", "john@doe.com", "123456789"));
        this.clients.add(new Client("Jane", "Doe", "jane@doe.com", "987654321"));
    }

    public ArrayList getClients() {
        return clients;
    }
}
