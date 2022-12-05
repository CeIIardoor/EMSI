package Model;

//singleton
public class Admin extends User{
    private static Admin admin;
    private String login;
    private String password;
    private String role;

    private Admin(String login, String password, String role) {
        this.login = login;
        this.password = password;
        this.role = role;
    }

    public static Admin getInstance() {
        if (admin == null) {
            admin = new Admin("admin@admin.com", "admin", "admin");
        }
        return admin;
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
