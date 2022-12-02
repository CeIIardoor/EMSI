package Service;

import Model.CD;

public interface IServiceCRUD {
    public void ajouterCD(CD cd);
    public void afficherCollection(CD cd);
    public void modifierCD(CD cd);
    public void supprimerCD(CD cd);

    public void chercherParTitre(String titre);
}
