package Service;

public interface IServiceQOL {
    void consulterInformationsBanque();
    void listerClientsDeLaBanque();
    void trierClientsParDate(String ordreDeTri);
    void trierClientsParSolde(String ordreDeTri);
    void trierClientsParNom(String ordreDeTri);
}
