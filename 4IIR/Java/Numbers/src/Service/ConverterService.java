package Service;

import Model.Complexe;
import Model.Decimal;
import Model.Entier;
import Model.Number;

public class ConverterService {
    public static Number toComplexe(Number n){
        switch (n.getType()) {
            case "Entier":
                return new Complexe(((Entier) n).getValue(), 0);
            case "Decimal":
                return new Complexe(((Decimal) n).getValue(), 0);
            case "Complexe":
                return n;
            default:
                return null;
        }
    }

    public static Number toDecimal(Number n){
        switch (n.getType()) {
            case "Integer":
                return new Decimal(((Entier) n).getValue());
            case "Decimal":
                return n;
            case "Complexe":
                return new Decimal(((Complexe) n).getReel());
            default:
                return null;
        }
    }

    public static Number toInteger(Number n){
        switch (n.getType()) {
            case "Integer":
                return n;
            case "Decimal":
                return new Entier((int) ((Decimal) n).getValue());
            case "Complexe":
                return new Entier((int) ((Complexe) n).getReel());
            default:
                return null;
        }
    }
}
