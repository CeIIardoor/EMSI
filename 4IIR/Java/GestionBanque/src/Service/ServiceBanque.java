package Service;

import Model.Banque;

public class ServiceBanque{
    private static Banque banque;

    public ServiceBanque(Banque _banque){
        banque = _banque;
    }

    public static void afficherBanque(){
        System.out.println(banque);
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