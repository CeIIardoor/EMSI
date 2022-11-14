package Model;

public class Entier extends Number{
    private final int value;

    public Entier(int value) {
        this.value = value;
        super.setType("Entier");
    }
    public int getValue() {
        return value;
    }

    @Override
    public String toString() {
        return "Entier{" + value + '}';
    }
}
