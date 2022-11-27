package Service;

import Model.Compte;

public interface IServiceTransactionnel {
    void verser(double montant, Compte c);
    void retirer(double montant, Compte c);
    void effectuerUnVirement(double montant, Compte src, Compte des);
}
