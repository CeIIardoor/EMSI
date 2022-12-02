package Service;

import Model.CD;
import Model.CollectionCD;

public class ServiceCRUD implements IServiceCRUD {
    private final CollectionCD collectionCD;

    public ServiceCRUD(CollectionCD _collectionCD) {
        this.collectionCD = _collectionCD;
    }

    @Override
    public void ajouterCD(CD cd) {
        collectionCD.getCds().add(cd);

    }

    @Override
    public void afficherCollection(CD cd) {
        System.out.println(collectionCD.getCds());
    }

    @Override
    public void modifierCD(CD cd) {
        for (int i = 0; i < collectionCD.getCds().size(); i++) {
            if (collectionCD.getCds().get(i).equals(cd)) {
                collectionCD.getCds().set(i, cd);
            }
        }
    }

    @Override
    public void supprimerCD(CD cd) {
        collectionCD.getCds().remove(cd);
    }

    @Override
    public void chercherParTitre(String titre) {
        for (int i = 0; i < collectionCD.getCds().size(); i++) {
            if (collectionCD.getCds().get(i).getTitre().equals(titre)) {
                System.out.println(collectionCD.getCds().get(i));
            }
        }
    }
}
