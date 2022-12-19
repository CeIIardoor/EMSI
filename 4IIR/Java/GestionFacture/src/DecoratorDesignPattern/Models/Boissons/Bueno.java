package DecoratorDesignPattern.Models.Boissons;

public class Bueno extends Boisson implements IPromotionnable {
    private double pourcentagePromo = 0;

    public double getCout() {
        return 25 * (1 - pourcentagePromo);
    }

    public String getDescription() {
        return "Café Bueno   ";
    }

    public void activerPromo(double pourcentage) {
        pourcentagePromo = pourcentage;
    }

    public void desactiverPromo() {
        pourcentagePromo = 0;
    }
}
