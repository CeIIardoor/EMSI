package Model;

public class Decimal extends Number{
    private final double value;

    public Decimal(double value) {
        this.value = value;
        super.setType("Decimal");
    }

    public double getValue() {
        return value;
    }

    @Override
    public String toString() {
        return "Decimal{" + value + '}';
    }
}
