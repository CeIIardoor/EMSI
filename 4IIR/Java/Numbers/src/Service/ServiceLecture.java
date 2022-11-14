package Service;

import Model.Complexe;
import Model.Decimal;
import Model.Entier;
import Model.Number;

public class ServiceLecture {
    public static Number read(String s){
        if (s.contains("+") && s.contains("i")){
            return new Complexe(Double.parseDouble(s.substring(0, s.indexOf("+"))), Double.parseDouble(s.substring(s.indexOf("+")+1, s.indexOf("i"))));
        } else if (s.contains(".") && !s.contains("i") && !s.contains("+")) {
            return new Decimal(Double.parseDouble(s));
        }
        return new Entier(Integer.parseInt(s));
    }
}
