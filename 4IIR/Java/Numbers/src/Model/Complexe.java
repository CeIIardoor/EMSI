package Model;

public class Complexe extends Number{
    private double reel;
    private double imaginaire;

    public Complexe(double reel, double imaginaire) {
        this.reel = reel;
        this.imaginaire = imaginaire;
        super.setType("Complexe");
    }

    public double getReel() {
        return reel;
    }

    public void setReel(double reel) {
        this.reel = reel;
    }

    public double getImaginaire() {
        return imaginaire;
    }

    public void setImaginaire(double imaginaire) {
        this.imaginaire = imaginaire;
    }

    @Override
    public String toString() {
        if(imaginaire < 0){
            return "Complexe{" + reel + " - " + Math.abs(imaginaire) + "i}";
        }
        else if (imaginaire == 0){
            return "Complexe{" + reel + "}";
        }
        else {
            return "Complexe{" + reel + " + " + imaginaire + "i}";
        }
    }

}