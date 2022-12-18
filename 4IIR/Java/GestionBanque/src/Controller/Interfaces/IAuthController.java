package Controller.Interfaces;

import Model.User;

public interface IAuthController {
    User authenticate(String login, String password);
}
