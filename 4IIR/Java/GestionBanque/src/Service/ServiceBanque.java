package Service;

import Model.Banque;
import Service.Interfaces.IServiceBanque;

public class ServiceBanque implements IServiceBanque {
    private static Banque banque;

    public ServiceBanque(Banque _banque){
        banque = _banque;
    }

    public void afficherBanque(){
        System.out.println("Banque : " + banque.getNomAgence());
        System.out.println("Email : " + banque.getEmailAgence());
        System.out.println("Nombre de clients : " + banque.getClients().size());
        System.out.println("Nombre de comptes : " + banque.getComptes().size());
    }

    public void afficherComptes(){
        System.out.println(banque.getComptes());
    }

    public void afficherClients(){
        for (int i = 0; i < banque.getClients().size(); i++) {
            System.out.println(banque.getClients().get(i));
        }
    }
}