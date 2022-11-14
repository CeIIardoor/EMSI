package Service;

import Model.Complexe;
import Model.Decimal;
import Model.Number;

public class ServiceNombres {

    public static Number add(Number n1, Number n2){
        n1 = ServiceConvertissage.toComplexe(n1);
        n2 = ServiceConvertissage.toComplexe(n2);
        assert n1 != null;
        assert n2 != null;

        Complexe n = new Complexe(((Complexe) n1).getReel() + ((Complexe) n2).getReel(),
                ((Complexe) n1).getImaginaire() + ((Complexe) n2).getImaginaire());
        if (n.getImaginaire() == 0 && n.getReel() % 1 == 0){
            return ServiceConvertissage.toInteger(n);
        }
        else if (n.getImaginaire() == 0){
            return ServiceConvertissage.toDecimal(n);
        }
        else {
            return n;
        }
    }

    public static Number minus(Number n1, Number n2){
        n1 = ServiceConvertissage.toComplexe(n1);
        n2 = ServiceConvertissage.toComplexe(n2);
        assert n1 != null;
        assert n2 != null;

        Complexe n = new Complexe(((Complexe) n1).getReel() - ((Complexe) n2).getReel(),
                ((Complexe) n1).getImaginaire() - ((Complexe) n2).getImaginaire());
        if (n.getImaginaire() == 0 && n.getReel() % 1 == 0){
            return ServiceConvertissage.toInteger(n);
        }
        else if (n.getImaginaire() == 0){
            return ServiceConvertissage.toDecimal(n);
        }
        else {
            return n;
        }
    }

    public static Number times(Number n1, Number n2){
        n1 = ServiceConvertissage.toComplexe(n1);
        n2 = ServiceConvertissage.toComplexe(n2);
        assert n1 != null;
        assert n2 != null;

        Complexe n = new Complexe(((Complexe) n1).getReel() * ((Complexe) n2).getReel() - ((Complexe) n1).getImaginaire() * ((Complexe) n2).getImaginaire(),
                ((Complexe) n1).getReel() * ((Complexe) n2).getImaginaire() + ((Complexe) n1).getImaginaire() * ((Complexe) n2).getReel());
        if (n.getImaginaire() == 0 && n.getReel() % 1 == 0){
            return ServiceConvertissage.toInteger(n);
        }
        else if (n.getImaginaire() == 0){
            return ServiceConvertissage.toDecimal(n);
        }
        else {
            return n;
        }
    }

    public static Number divide(Number n1, Number n2){
        n1 = ServiceConvertissage.toComplexe(n1);
        n2 = ServiceConvertissage.toComplexe(n2);
        assert n1 != null;
        assert n2 != null;

        Complexe n = new Complexe(((Complexe) n1).getReel() * ((Complexe) n2).getReel() +
                ((Complexe) n1).getImaginaire() * ((Complexe) n2).getImaginaire(),
                ((Complexe) n1).getImaginaire() * ((Complexe) n2).getReel() -
                        ((Complexe) n1).getReel() * ((Complexe) n2).getImaginaire());
        double denominator = ((Complexe) n2).getReel() * ((Complexe) n2).getReel() +
                ((Complexe) n2).getImaginaire() * ((Complexe) n2).getImaginaire();
        n.setReel(n.getReel() / denominator);
        n.setImaginaire(n.getImaginaire() / denominator);
        if (n.getImaginaire() == 0 && n.getReel() % 1 == 0){
            return ServiceConvertissage.toInteger(n);
        }
        else if (n.getImaginaire() == 0){
            return ServiceConvertissage.toDecimal(n);
        }
        else {
            return n;
        }
    }

    public static Number inverse(Number n1){
        n1 = ServiceConvertissage.toComplexe(n1);
        assert n1 != null;

        Complexe n = new Complexe(((Complexe) n1).getReel(), -((Complexe) n1).getImaginaire());
        if (n.getImaginaire() == 0 && n.getReel() % 1 == 0){
            return ServiceConvertissage.toInteger(n);
        }
        else if (n.getImaginaire() == 0){
            return ServiceConvertissage.toDecimal(n);
        }
        else {
            return n;
        }
    }

    public static Number conjugate(Number n1){
        n1 = ServiceConvertissage.toComplexe(n1);
        assert n1 != null;

        Complexe n = new Complexe(((Complexe) n1).getReel(), -((Complexe) n1).getImaginaire());
        if (n.getImaginaire() == 0 && n.getReel() % 1 == 0){
            return ServiceConvertissage.toInteger(n);
        }
        else if (n.getImaginaire() == 0){
            return ServiceConvertissage.toDecimal(n);
        }
        else {
            return n;
        }
    }

    public static Number module(Number n1){
        n1 = ServiceConvertissage.toComplexe(n1);
        assert n1 != null;

        return new Decimal(Math.sqrt(((Complexe) n1).getReel() * ((Complexe) n1).getReel() +
                ((Complexe) n1).getImaginaire() * ((Complexe) n1).getImaginaire()));
    }

}
