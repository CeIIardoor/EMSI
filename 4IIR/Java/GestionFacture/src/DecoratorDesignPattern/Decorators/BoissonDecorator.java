package DecoratorDesignPattern.Decorators;

import DecoratorDesignPattern.Interfaces.ISupplement;
import DecoratorDesignPattern.Models.Boisson;
import DecoratorDesignPattern.Interfaces.IBoisson;

public abstract class BoissonDecorator implements IBoisson {
    private final IBoisson boisson;

    public BoissonDecorator(Boisson _boisson) {
        this.boisson = _boisson;
    }

    @Override
    public String cout() {
        return boisson.cout();
    }

    public double getTotal() {
        return boisson.getTotal();
    }
}
