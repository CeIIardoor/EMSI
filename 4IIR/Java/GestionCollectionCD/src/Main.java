import Model.CD;
import Model.CollectionCD;
import Service.ServiceCRUD;
import Service.ServiceTri;

public class Main {
    public static void main(String[] args) {
        CD cd1 = new CD("CD1", "Auteur1", 10.0);
        CD cd2 = new CD("CD2", "Auteur2", 20.0);
        CD cd3 = new CD("CD3", "Auteur3", 30.0);
        CD cd4 = new CD("CD4", "Auteur4", 40.0);
        CD cd5 = new CD("CD5", "Auteur5", 50.0);
        CD cd6 = new CD("CD6", "Auteur6", 60.0);

        CollectionCD collectionCD1 = new CollectionCD();
        CollectionCD collectionCD2 = new CollectionCD();

        ServiceCRUD serviceCRUD1 = new ServiceCRUD(collectionCD1);
        ServiceCRUD serviceCRUD2 = new ServiceCRUD(collectionCD2);

        ServiceTri serviceTri = new ServiceTri(collectionCD1);
        ServiceTri serviceTri2 = new ServiceTri(collectionCD2);

        serviceCRUD1.ajouterCD(cd1);
        serviceCRUD1.ajouterCD(cd2);
        serviceCRUD1.ajouterCD(cd3);

        serviceCRUD2.ajouterCD(cd4);
        serviceCRUD2.ajouterCD(cd5);
        serviceCRUD2.ajouterCD(cd6);




    }
}