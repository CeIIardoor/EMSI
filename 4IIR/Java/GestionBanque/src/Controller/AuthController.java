package Controller;

import Model.Banque;
import Model.Client;
import Model.User;

public class AuthController implements IAuthController {
    private static Banque banque;

    public AuthController(Banque _banque){
        banque = _banque;
    }

    public User authenticateAdmin(String login, String password) {
        if (login.equals("admin@banque.com") && password.equals("admin")) {
            return new User(login, password, "admin");
        }
        return null;
    }

    public User authenticateClient(String login, String password) {
        for (Client client : banque.getClients()) {
            if (client.getEmail().equals(login) && client.getPassword().equals(password)) {
                return client;
            }
        }
        return null;
    }
}
