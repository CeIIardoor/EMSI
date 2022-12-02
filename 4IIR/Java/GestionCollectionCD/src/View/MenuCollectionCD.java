package View;

import Model.CollectionCD;

public class MenuCollectionCD {
    private final CollectionCD collectionCD;

    public MenuCollectionCD(CollectionCD _collectionCD) {
        this.collectionCD = _collectionCD;
    }

    public void afficherMenuCollection() {
        System.out.println("1. Ajouter un CD");
        System.out.println("2. Afficher la collection");
        System.out.println("3. Modifier un CD");
        System.out.println("4. Supprimer un CD");
        System.out.println("5. Chercher un CD par titre");
        System.out.println("6. Quitter");
    }
}
