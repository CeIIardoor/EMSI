package Controller;

import Model.User;

public interface IAuthController {
    User authenticateAdmin(String login, String password);
    User authenticateClient(String login, String password);
}
