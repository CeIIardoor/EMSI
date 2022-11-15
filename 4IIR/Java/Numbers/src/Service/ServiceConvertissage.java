package Service;

import Model.Complexe;
import Model.Decimal;
import Model.Entier;
import Model.Number;

public class ServiceConvertissage {
    public static Number toComplexe(Number n){
        switch (n.getType()) {
            case "Entier":
                return new Complexe(((Entier) n).getValue(), 0);
            case "Decimal":
                return new Complexe(((Decimal) n).getValue(), 0);
            default:
                return n;
        }
    }

    public static Number toDecimal(Number n){
        switch (n.getType()) {
            case "Integer":
                return new Decimal(((Entier) n).getValue());
            case "Complexe":
                return new Decimal(((Complexe) n).getReel());
            default:
                return n;
        }
    }

    public static Number toInteger(Number n){
        switch (n.getType()) {
            case "Decimal":
                return new Entier((int) ((Decimal) n).getValue());
            case "Complexe":
                return new Entier((int) ((Complexe) n).getReel());
            default:
                return n;
        }
    }
    public static Number fromComplexe(Complexe n){
        if (n.getImaginaire() == 0 && n.getReel() % 1 == 0){
            return toInteger(n);
        }
        else if (n.getImaginaire() == 0){
            return toDecimal(n);
        }
        else {
            return n;
        }
    }
}
