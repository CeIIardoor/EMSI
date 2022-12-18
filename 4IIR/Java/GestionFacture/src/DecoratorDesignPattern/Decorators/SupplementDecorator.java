package DecoratorDesignPattern.Decorators;

import DecoratorDesignPattern.Interfaces.ISupplement;
import DecoratorDesignPattern.Models.Supplement;

public abstract class SupplementDecorator implements ISupplement {
    private final Supplement supplement;

    public SupplementDecorator(Supplement _supplement) {
        this.supplement = _supplement;
    }

    @Override
    public String cout() {
        return supplement.cout();
    }

    public double getTotal() {
        return supplement.getTotal();
    }
}
