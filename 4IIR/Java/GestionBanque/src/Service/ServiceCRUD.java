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
        System.out.println("Client " + client.getIdClient() + "créé et ajouté à" + banque.getNomAgence());
        return client;
    }

    public void lierCompteAuClient(int idClient, int idCompte){
        Client client = getClientById(idClient);
        Compte compte = getCompteById(idCompte);
        if (client != null && compte != null){
            if (client.getComptes().size() < client.getMaxComptes()){
                client.ajouterCompte(compte);
                System.out.println("Compte " + compte.getIdCompte() + " lié au client " + client.getIdClient());
            } else {
                System.out.println("Impossible de lier le compte " + compte.getIdCompte() + " au client " + client.getIdClient() + " : nombre max de comptes atteint");
            }
        } else {
            System.out.println("Compte ou client inexistant");
        }
    }

    private Compte getCompteById(int idCompte) {
        for (Compte compte : banque.getComptes()) {
            if (compte.getIdCompte() == idCompte) {
                return compte;
            }
        }
        return null;
    }

    public Compte chercherUnCompte(int idCompte){
        Compte compte = getCompteById(idCompte);
        if (compte != null){
            System.out.println("Compte " + compte.getIdCompte() + " trouvé");
            return compte;
        } else {
            System.out.println("Compte inexistant");
            return null;
        }
    }

    public Client chercherUnClient(int idClient){
        Client client = getClientById(idClient);
        if (client != null){
            System.out.println("Client " + client.getIdClient() + " trouvé");
            return client;
        } else {
            System.out.println("Client inexistant");
            return null;
        }
    }

    public void consulterDetailCompte(int idCompte){
        Compte compte = getCompteById(idCompte);
        if (compte != null){
            System.out.println("Détail du compte " + compte.getIdCompte() + " :");
            System.out.println(compte.toString());
        } else {
            System.out.println("Compte inexistant");
        }
    }

    public void consulterDetailClient(int idClient){
        Client client = getClientById(idClient);
        if (client != null){
            System.out.println("Détail du client " + client.toString());
        } else {
            System.out.println("Client inexistant");
        }
    }

    public boolean modifierCompte(int idCompte, Compte compte){
        Compte compteAModifier = getCompteById(idCompte);
        if (compteAModifier != null){
            compteAModifier.setSolde(compte.getSolde());
            System.out.println("Compte " + compteAModifier.getIdCompte() + " modifié");
            return true;
        } else {
            System.out.println("Compte inexistant");
            return false;
        }
    }

    public boolean modifierClient(int idClient, Client client){
        Client clientAModifier = getClientById(idClient);
        if (clientAModifier != null){
            clientAModifier.setNom(client.getNom());
            clientAModifier.setPrenom(client.getPrenom());
            clientAModifier.setEmail(client.getEmail());

            System.out.println("Client " + clientAModifier.getIdClient() + " modifié");
            return true;
        } else {
            System.out.println("Client inexistant");
            return false;
        }
    }

}