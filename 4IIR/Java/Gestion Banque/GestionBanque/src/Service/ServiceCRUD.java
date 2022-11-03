package Service;


import Model.Banque;
import Model.Client;
import Model.Compte;

public class ServiceCRUD {
    /* - Service CRUD :: (création, consultation, modification et suppression)
    public Compte créerEtAjouterCompte(Scanner clavier)
    public Client créerEtAjouterNouveauClient(Scanner clavier)
    public void lierCompteAuClient (int idClient, int idCompte)
    public Compte chercherUnCompte(Scanner clavier)
    public Compte chercherUnClient(Scanner clavier)
    public void consulterDétailCompte(Scanner clavier)
    public void consulterDétailClient(Scanner clavier)
    public boolean modifierCompte(Scanner clavier)
    public boolean modifierClient(Scanner clavier)
    public boolean supprimerCompte(Scanner clavier)
    public boolean supprimerClient(Scanner clavier)
     */
    private static Banque banque;

    public ServiceCRUD(Banque _banque){
        banque = _banque;
    }

    public static Client getClientById(int id){
        for (Client client : banque.getClients()) {
            if (client.getIdClient() == id) {
                return client;
            }
        }
        return null;
    }

    public Compte creerEtAjouterCompte(){
        Compte compte = new Compte();
        banque.ajouterCompte(compte);
        System.out.println("Compte " + compte.getIdCompte() + "créé et ajouté à" + banque.getNomAgence());
        return compte;
    }

    public Client creerEtAjouterNouveauClient(){
        Client client = new Client();
        banque.ajouterClient(client);
        return client;
    }
}