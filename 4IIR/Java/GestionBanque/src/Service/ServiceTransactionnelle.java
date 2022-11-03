package Service;

import Model.Banque;
import Model.Compte;

public class ServiceTransactionnelle {
    /* Fonctions du Service :
    - Service transactionnelle :: (chaque service finit par une journalisation)
    public boolean verser(double montant, Compte c)
    public boolean retirer(double montant, Compte c)
    public boolean virement(double montant, Compte src, Compte des)
    public boolean creerCompte(Compte c)
     */
    private Banque banque;

    public ServiceTransactionnelle(Banque _banque){
        banque = _banque;
    }

    public void verser(double montant, Compte c){
        do {
            if (montant > 0) {
                c.setSolde(c.getSolde() + montant);
                System.out.println("Le montant de " + montant + " a été versé sur le compte " + c.getIdCompte());
            } else {
                System.out.println("Le montant doit être supérieur à 0");
            }
        } while (montant <= 0);
    }

    public void retirer(double montant, Compte c){
        do {
            if (montant > 0) {
                if (c.getSolde() >= montant) {
                    c.setSolde(c.getSolde() - montant);
                    System.out.println("Le montant de " + montant + " a été retiré du compte " + c.getIdCompte());
                } else {
                    System.out.println("Le montant à retirer est supérieur au solde du compte");
                }
            } else {
                System.out.println("Le montant doit être supérieur à 0");
            }
        } while (montant <= 0);
    }
}
