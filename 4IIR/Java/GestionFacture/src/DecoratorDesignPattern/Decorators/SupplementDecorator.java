package DecoratorDesignPattern.Decorators;

import DecoratorDesignPattern.Interfaces.ISupplement;

public abstract class SupplementDecorator implements ISupplement {
    private final ISupplement supplement;

    public SupplementDecorator(ISupplement _supplement) {
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
