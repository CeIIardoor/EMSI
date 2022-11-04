package Service;

import Model.Banque;

public class ServiceBanque{
    private static Banque banque;

    public ServiceBanque(Banque _banque){
        banque = _banque;
    }

    public static void afficherBanque(){
        System.out.println("Banque : " + banque.getNomAgence());
        System.out.println("Email : " + banque.getEmailAgence());
        System.out.println("Nombre de clients : " + banque.getClients().size());
        System.out.println("Nombre de comptes : " + banque.getComptes().size());
    }

    public static void afficherComptes(){
        for (int i = 0; i < banque.getComptes().size(); i++) {
            System.out.println(banque.getComptes().get(i));
        }
    }

    public static void afficherClients(){
        for (int i = 0; i < banque.getClients().size(); i++) {
            System.out.println(banque.getClients().get(i));
        }
    }
}