import Model.Banque;
import Model.Client;
import Service.ServiceBanque;

public class Main {
    public static void main(String[] args) {
        /*
            * 1. Créer une banque
            * 2. Créer client1
            * 3. Créer client2
            * 4. Créer client3
            * 5. Créer compte11
            * 6. Créer compte12
            * 7. Créer compte2
            * 8. Créer compte3
            * 9. lier client11 à compte1
            * 10. lier client12 à compte1
            * 11. lier client2 à compte2
            * 12. lier client3 à compte3
            * 13. Afficher les comptes de client1
            * 14. Afficher les clients de compte1
        */
        Banque banque = new Banque("Banque de test", "banque@test.com", 100, 1000);
        Client client1 = new Client("Client1", "Test", "client1@test.com");
        Client client2 = new Client("Client2", "Test", "client2@test.com");
        Client client3 = new Client("Client3", "Test", "client3@test.com");
        ServiceBanque serviceBanque = new ServiceBanque(banque);
        banque.ajouterClient(client1);
        banque.ajouterClient(client2);
        banque.ajouterClient(client3);

        ServiceBanque.afficherClients();

    }
}