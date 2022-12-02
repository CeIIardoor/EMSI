package Model;

import java.util.Objects;

public class CD implements Comparable<CD> {
    String titre;
    String auteur;
    Double prix;

    @Override
    public String toString() {
        return "CD{" +
                "titre='" + titre + '\n' +
                ", auteur='" + auteur + '\n' +
                ", prix=" + prix + '\n' +
                '}';
    }

    @Override
    public int compareTo(CD o) {
        if (this.titre.equals(o.titre)) {
            return this.prix.compareTo(o.prix);
        }
        return this.titre.compareTo(o.titre);

    }

    public CD(String titre, String auteur, Double prix) {
        this.titre = titre;
        this.auteur = auteur;
        this.prix = prix;
    }

    @Override
    public boolean equals(Object obj) {
        if (obj == null) {
            return false;
        }
        if (getClass() != obj.getClass()) {
            return false;
        }
        final CD other = (CD) obj;
        if (!Objects.equals(this.titre, other.titre)) {
            return false;
        }
        if (!Objects.equals(this.auteur, other.auteur)) {
            return false;
        }
        return Objects.equals(this.prix, other.prix);
    }

    public String getTitre() {
        return titre;
    }

    public String getAuteur() {
        return auteur;
    }

    public double getPrix() {
        return prix;
    }
}
