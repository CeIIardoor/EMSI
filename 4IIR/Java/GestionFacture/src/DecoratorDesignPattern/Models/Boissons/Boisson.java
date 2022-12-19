package DecoratorDesignPattern.Models.Boissons;

public abstract class Boisson {

    public abstract double getCout();
    public abstract String getDescription();

    @Override
    public int hashCode() {
        return getDescription().hashCode();
    }

    @Override
    public boolean equals(Object obj) {
        if (obj instanceof Boisson b) {
            return this.getDescription().equals(b.getDescription());
        }
        return false;
    }

    public final String toString() {
        return '\t' + " => " + '\t' + " + Boisson " + getDescription() + " : " + getCout() + "MAD";
    }

}
