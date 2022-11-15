package Service;

import Model.Complexe;
import Model.Decimal;
import Model.Entier;
import Model.Number;

public class ServiceLecture {
    public static Number read(String s) {
        if (s.contains("i")) {
            if (s.contains("+")) {
                return new Complexe(Double.parseDouble(s.substring(0, s.indexOf("+"))), // 5.2+4i
                        Double.parseDouble(s.substring(s.indexOf("+") + 1, s.indexOf("i"))));
            } else if (s.contains("-")) {
                return new Complexe(Double.parseDouble(s.substring(0, s.indexOf("-"))),
                        Double.parseDouble(s.substring(s.indexOf("-") + 1, s.indexOf("i"))));
            }
        }
        if (s.contains(".")) {
            return new Decimal(Double.parseDouble(s));
        } else {
            return new Entier(Integer.parseInt(s));
        }
    }
}
