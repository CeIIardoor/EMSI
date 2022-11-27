import Controller.MenuBanque;
import Model.Banque;
import Model.Client;
import Model.Compte;

public class Main {
    public static void main(String[] args) {
        System.out.println("____________SETUP____________");
        Banque banque = new Banque("Banque de Test", "banque@test.com", 1000);
        Client client1 = new Client("Client1", "Test", "client1@test.com");
        Client client2 = new Client("Client2", "Test", "client2@test.com");
        Client client3 = new Client("Client3", "Test", "client3@test.com");

        Compte compte1 = new Compte(client1, 1000);
        Compte compte2 = new Compte(client2, 2000);
        Compte compte3 = new Compte(client3, 3000);

        banque.ajouterClient(client1);
        banque.ajouterClient(client2);
        banque.ajouterClient(client3);

        client1.ajouterCompte(compte1);
        client2.ajouterCompte(compte2);
        client3.ajouterCompte(compte3);
        System.out.println("____________SETUP DONE____________");

        MenuBanque menuBanque = new MenuBanque(banque);
        menuBanque.afficherMenuPrincipale();
    }
}