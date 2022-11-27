package Model;

public class User {
    private String login;
    private String password;
    private String role;

    public User() {
        this.setLogin("client0@email.com");
        this.setPassword("123456");
        this.setRole("client");
    }

    public User(String login, String password, String role) {
        this.setLogin(login);
        this.setPassword(password);
        this.setRole(role);
    }

    public String getLogin() {
        return login;
    }

    public void setLogin(String login) {
        this.login = login;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }

    public String getRole() {
        return role;
    }

    public void setRole(String role) {
        this.role = role;
    }
}
