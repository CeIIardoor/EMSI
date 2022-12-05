import Controller.AuthController;
import Model.Banque;
import Model.Client;
import Model.Compte;
import Model.User;
import View.MenuAdmin;
import View.MenuAuth;
import View.MenuClient;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.println("____________SETUP____________");
        Banque banque = new Banque("Banque de Test", "banque@test.com", 100);
        Client client1 = new Client("Client1", "Test", "client1@test.com", "123456");
        Client client2 = new Client("Client2", "Test", "client2@test.com", "123456");
        Client client3 = new Client("Client3", "Test", "client3@test.com", "123456");

        Compte compte1 = new Compte(client1, 1000);
        Compte compte2 = new Compte(client2, 2000);
        Compte compte3 = new Compte(client3, 3000);

        banque.ajouterClient(client1);
        banque.ajouterClient(client2);
        banque.ajouterClient(client3);

        client1.ajouterCompte(compte1);
        client2.ajouterCompte(compte2);
        client3.ajouterCompte(compte3);

        System.out.println("_____________________________________");

        AuthController authController = new AuthController(banque);
        int choix;
        do {
            MenuAuth.afficherMenuAuth();
            choix = new Scanner(System.in).nextInt();
            if (choix == 1) {
                System.out.println("Entrer votre login");
                String login = new Scanner(System.in).nextLine();
                System.out.println("Entrer votre mot de passe");
                String password = new Scanner(System.in).nextLine();
                User currentUser = authController.authenticate(login, password);
                if (currentUser != null && currentUser.getRole().equals("admin")) {
                    MenuAdmin menuAdmin = new MenuAdmin(banque);
                    menuAdmin.afficherMenuPrincipale();
                } else if (currentUser != null && currentUser.getRole().equals("client")) {
                    MenuClient menuClient = new MenuClient(banque, (Client) currentUser);
                    menuClient.afficherMenuPrincipale();
                } else {
                System.out.println("Login ou mot de passe incorrect");
                }
            } else if (choix == 9) {
                System.out.println("Au revoir");
            } else {
                System.out.println("Choix invalide");
            }
        } while (choix != 9);




    }
}