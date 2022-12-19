package DecoratorDesignPattern.Models.Supplement;

import DecoratorDesignPattern.Models.Boissons.Boisson;

public class Caramel extends Supplement{
    public Caramel(Boisson boissonDeBase) {
        super(boissonDeBase);
    }

    public double getCout() {
        return boissonDeBase.getCout() + 3;
    }

    public String getDescription() {
        return boissonDeBase.getDescription() + " \n + Suppl. Caramel";
    }
}
