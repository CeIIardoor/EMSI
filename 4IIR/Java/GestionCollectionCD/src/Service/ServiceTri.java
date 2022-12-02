package Service;

import Model.CD;
import Model.CollectionCD;
import Model.OrdreTri;

import java.util.Comparator;

public class ServiceTri implements IServiceTri {

    private final CollectionCD collectionCD;

    public ServiceTri(CollectionCD _collectionCD) {
        this.collectionCD = _collectionCD;
    }

    Comparator<CD> comparerParTitre = new Comparator<CD>() {
        @Override
        public int compare(CD o1, CD o2) {
            return o1.getTitre().compareTo(o2.getTitre());
        }
    };

    Comparator<CD> comparerParAuteur = new Comparator<CD>() {
        @Override
        public int compare(CD o1, CD o2) {
            return o1.getAuteur().compareTo(o2.getAuteur());
        }
    };

    Comparator<CD> comparerParPrix = new Comparator<CD>() {
        @Override
        public int compare(CD o1, CD o2) {
            if (o1.getPrix() - o2.getPrix() == 0) return 0;
            return o1.getPrix() - o2.getPrix() > 0 ? 1 : -1;
        }
    };



    @Override
    public void trierParTitre(OrdreTri ordreTri) {
        if (ordreTri == OrdreTri.ASC) {
            collectionCD.getCds().sort(comparerParTitre);
        } else {
            collectionCD.getCds().sort(comparerParTitre.reversed());
        }
    }

    @Override
    public void trierParAuteur(OrdreTri ordreTri) {
        if (ordreTri == OrdreTri.ASC) {
            collectionCD.getCds().sort(comparerParAuteur);
        } else {
            collectionCD.getCds().sort(comparerParAuteur.reversed());
        }
    }

    @Override
    public void trierParPrix(OrdreTri ordreTri) {
        if (ordreTri == OrdreTri.ASC) {
            collectionCD.getCds().sort(comparerParPrix);
        } else {
            collectionCD.getCds().sort(comparerParPrix.reversed());
        }
    }


}
