import Model.Banque;
import Model.Client;
import Model.Compte;
import Service.ServiceCRUD;

public class Main {
    public static void main(String[] args) {
        /*
        System.out.println("Création client 1");
        Client client1 = new Client();
        System.out.println("Creation compte bancaire 1");
        Compte compte1 = new Compte(1000, client1);
         */
        System.out.println("Creation banque 1");
        Banque banque1 = new Banque("Banque 1", "banque1@gmail.com", 10,100);
        Banque banque2 = new Banque("Banque 2", "banque2@gmail.com", 10,100);
        System.out.println(banque1.toString());
        System.out.println(banque2.toString());

        ServiceCRUD serviceCRUD = new ServiceCRUD(banque1);
        serviceCRUD.creerEtAjouterCompte();

    }
}