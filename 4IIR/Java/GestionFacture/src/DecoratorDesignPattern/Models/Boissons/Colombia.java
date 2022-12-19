package DecoratorDesignPattern.Models.Boissons;

public class Colombia extends Boisson implements IPromotionnable {

        double pourcentagePromo = 0.0;

        public double getCout() {
            return 15 * (1 - pourcentagePromo);
        }

        public String getDescription() {
            return "Café Colombia";
        }

    @Override
    public void activerPromo(double pourcentage) {
        pourcentagePromo = pourcentage;
    }

    @Override
    public void desactiverPromo() {
        pourcentagePromo = 0.0;
    }

}
