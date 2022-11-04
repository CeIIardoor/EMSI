import Model.Banque;
import Model.Client;
import Model.Compte;
import Service.ServiceBanque;

public class Main {
    public static void main(String[] args) {

        Banque banque = new Banque("Banque de test", "banque@test.com", 100, 1000);
        Client client1 = new Client("Client1", "Test", "client1@test.com");
        Client client2 = new Client("Client2", "Test", "client2@test.com");
        Client client3 = new Client("Client3", "Test", "client3@test.com");
        Compte compte1 = new Compte(client1);
        Compte compte2 = new Compte(client2);
        Compte compte3 = new Compte(client3);

        ServiceBanque serviceBanque = new ServiceBanque(banque);
        banque.ajouterClient(client1);
        banque.ajouterClient(client2);
        banque.ajouterClient(client3);

        banque.ajouterCompte(compte1);
        banque.ajouterCompte(compte2);
        banque.ajouterCompte(compte3);



        ServiceBanque.afficherBanque();
        ServiceBanque.afficherComptes();
        ServiceBanque.afficherClients();

    }
}