package DecoratorDesignPattern.Models.Supplement;

import DecoratorDesignPattern.Models.Boissons.Boisson;

public class Chocolat extends Supplement{
    public Chocolat(Boisson boissonDeBase) {
        super(boissonDeBase);
    }

    public double getCout() {
        return boissonDeBase.getCout() + 6;
    }

    public String getDescription() {
        return boissonDeBase.getDescription() + " \n + Suppl. Chocolat";
    }
}
