package Service;


import Model.Banque;
import Model.Client;
import Model.Compte;

import java.util.Scanner;

public class ServiceCRUD {
    /* - Service CRUD :: (création, consultation, modification et suppression)
    public Compte créerEtAjouterCompte(Scanner clavier)
    public Client créerEtAjouterNouveauClient(Scanner clavier)
    public void lierCompteAuClient (int idClient, int idCompte)
    public Compte chercherUnCompte(Scanner clavier)
    public Compte chercherUnClient(Scanner clavier)
    public void consulterDétailCompte(Scanner clavier)
    public void consulterDétailClient(Scanner clavier)
    public Compte modifierCompte(Scanner clavier)
    public Client modifierClient(Scanner clavier)
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
        System.out.println("Client existant ? (o/n)");
        Scanner clavier = new Scanner(System.in);
        String reponse = clavier.nextLine();
        if (reponse.equals("o")){
            System.out.println("Entrer l'id du Client : ");
            int idCompte = clavier.nextInt();
            Client client = getClientById(idCompte);
            if (client != null){
                Compte compte = new Compte(client);
                banque.getComptes().add(compte);
                return compte;
            }
            else {
                System.out.println("Client inexistant");
                return null;
            }
        }
        else if (reponse.equals("n")){
            Compte compte = new Compte();
            banque.ajouterCompte(compte);
            return compte;
        }
        else {
            System.out.println("Réponse invalide");
            return null;
        }
    }

    public Client creerEtAjouterClient(){
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

    public static Compte getCompteById(int idCompte) {
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
        Compte compte = chercherUnCompte(idCompte);
        if (compte != null){
            System.out.println("Détail du compte " + compte.getIdCompte() + " :");
            System.out.println(compte);
        } else {
            System.out.println("Compte inexistant");
        }
    }

    public void consulterDetailClient(int idClient){
        Client client = chercherUnClient(idClient);
        if (client != null){
            System.out.println("Détail du client " + client.getIdClient() + " :");
            System.out.println(client);
        } else {
            System.out.println("Client inexistant");
        }
    }

    public Compte modifierCompte(int idCompte){
        Compte compteAModifier = getCompteById(idCompte);
        if (compteAModifier != null){
            do {
                System.out.println("Saisir le nouveau solde du compte " + compteAModifier.getIdCompte() + " :");
                double s = new Scanner(System.in).nextDouble();
                compteAModifier.setSolde(s);
            } while (compteAModifier.getSolde() < 0);
            System.out.println("Compte " + compteAModifier.getIdCompte() + " modifié");
            return compteAModifier;
        } else {
            System.out.println("Compte inexistant");
            return null;
        }
    }

    public Client modifierClient(int idClient){
        Client clientAModifier = getClientById(idClient);
        if (clientAModifier != null){
            Scanner sc = new Scanner(System.in);
            System.out.println("Saisir le nouveau nom du client " + clientAModifier.getIdClient() + " :");
            clientAModifier.setNom(sc.nextLine());
            System.out.println("Saisir le nouveau prénom du client " + clientAModifier.getIdClient() + " :");
            clientAModifier.setPrenom(sc.nextLine());
            do {
                System.out.println("Saisir le nouveau mail du client " + clientAModifier.getIdClient() + " :");
                clientAModifier.setEmail(sc.nextLine());
            } while (!clientAModifier.getEmail().matches("^[a-zA-Z0-9._-]+@[a-z0-9._-]{2,}\\.[a-z]{2,4}$"));
            System.out.println("Client " + clientAModifier.getIdClient() + " modifié");
            return clientAModifier;
        } else {
            System.out.println("Client inexistant");
            return null;
        }
    }

    public boolean supprimerCompte(int idCompte){
        Compte compte = getCompteById(idCompte);
        if (compte != null){
            banque.supprimerCompte(compte);
            System.out.println("Compte " + compte.getIdCompte() + " supprimé");
            return true;
        } else {
            System.out.println("Compte inexistant");
            return false;
        }
    }

    public boolean supprimerClient(int idClient){
        Client client = getClientById(idClient);
        if (client != null){
            client.getComptes().clear();
            banque.supprimerClient(client);
            System.out.println("Client " + client.getIdClient() + " supprimé");
            return true;
        } else {
            System.out.println("Client inexistant");
            return false;
        }
    }

}