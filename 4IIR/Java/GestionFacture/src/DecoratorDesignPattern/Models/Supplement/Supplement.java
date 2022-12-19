package DecoratorDesignPattern.Models.Supplement;

import DecoratorDesignPattern.Models.Boissons.Boisson;

public class Supplement extends Boisson {
    protected Boisson boissonDeBase;

    public Supplement(Boisson boissonDeBase) {
        this.boissonDeBase = boissonDeBase;
    }

    public double getCout() {
        return boissonDeBase.getCout();
    }

    public String getDescription() {
        return boissonDeBase.getDescription();
    }
}
