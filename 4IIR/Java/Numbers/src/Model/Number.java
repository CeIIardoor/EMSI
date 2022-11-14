package Model;

public abstract class Number {
    protected String type;

    abstract public String toString();

    public String getType(){
        return type;
    }

    public void setType(String type) {
        this.type = type;
    }
}
