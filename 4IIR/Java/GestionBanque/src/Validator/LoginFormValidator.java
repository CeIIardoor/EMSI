package Validator;

import Model.Banque;

import java.util.Map;

public class LoginFormValidator {
    private Map<String,String> errors;

    private String connectionStatus;

    private Banque banque;

    private static final String FIELD_LOGIN = "login";
    private static final String FIELD_PASSWORD = "password";

    public void verifyLogin(String login) throws FormException {
        if(!login.matches("[a-zA-Z0-9]{3,}@[a-zA-Z0-9]{3,}\\.[a-zA-Z]{2,}")){
            throw new FormException("LoginForm",
                    FIELD_LOGIN, "Le login doit être une adresse mail valide");
        }
    }
    public void verfiyPassword(String password) throws FormException {
         if(!password.matches("[a-zA-Z0-9]{8,}")) {
             throw new FormException("LoginForm",
                     FIELD_PASSWORD, "Le mot de passe doit contenir au moins 8 caractères alphanumériques");
         }
    }

    public boolean validateLogin(String login){
        try {
            verifyLogin(login);
            return true;
        } catch (FormException e) {
            errors.put(FIELD_LOGIN, e.getMessage());
            return false;
        }
    }

    public boolean validatePassword(String password){
        try {
            verfiyPassword(password);
            return true;
        } catch (FormException e) {
            errors.put(FIELD_PASSWORD, e.getMessage());
            return false;
        }
    }

    public LoginFormValidator(Banque banque) {
        this.banque = banque;
    }

    public Map<String, String> getErrors() {
        return errors;
    }

    public String getConnectionStatus() {
        return connectionStatus;
    }

    public void setError(String key, String value) {
        this.errors.put(key, value);
    }
}

