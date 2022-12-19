package DecoratorDesignPattern.Models.Boissons;

public class Espresso extends Boisson {
    public double getCout() {
        return 13;
    }

    public String getDescription() {
        return "Café Espresso";
    }
}
