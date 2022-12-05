package Controller;

import Model.Admin;
import Model.Banque;
import Model.Client;
import Model.User;

public class AuthController implements IAuthController {
    private static Banque banque;

    public AuthController(Banque _banque){
        banque = _banque;
    }

    public User authenticate(String login, String password) {
        Admin admin = Admin.getInstance();
        if (admin.getLogin().equals(login) && admin.getPassword().equals(password)) {
            return admin;
        }
        for (Client client : banque.getClients()) {
            if (client.getEmail().equals(login) && client.getPassword().equals(password)) {
                return client;
            }
        }
        return null;
    }

}
