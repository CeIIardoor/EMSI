package Exercice3;
import java.util.Date;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

public class Ex3 {
    public static void millis() {
        long time = System.currentTimeMillis();
        System.out.println(time);
    }
    public static void date() {
        Date d = new Date();
        System.out.println(d);
    }
    public static void cal() {
        String[] mois = {"Janvier", "Février", "Mars", "Avril", "Mai", "Juin", "Juillet", "Août", "Septembre", "Octobre", "Novembre", "Décembre"};
        String[] jours = {"Dimanche", "Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi"};
        Calendar c = Calendar.getInstance();
        // System.out.println(c);
        System.out.print(c.get(Calendar.YEAR) + "-");
        System.out.print(mois[c.get(Calendar.MONTH)-1] + " ");
        System.out.print(c.get(Calendar.MONTH) + "-");
        System.out.print(jours[c.get(Calendar.DAY_OF_WEEK) - 1] + " ");
        System.out.print(c.get(Calendar.DAY_OF_MONTH) + " <> ");
        System.out.print(c.get(Calendar.HOUR_OF_DAY) + ":");
        System.out.print(c.get(Calendar.MINUTE) + ":");
        System.out.print(c.get(Calendar.SECOND) + ":");
        System.out.println(c.get(Calendar.MILLISECOND));

    }

    public static void simple() {
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy HH:mm:ss");
        Date d = new Date();
        System.out.println("Maintenant :"+ sdf.format(d));
    }

    public static void localdate(){
        LocalDate localdate = LocalDate.now();
        System.out.println("Now : "+ localdate);
        LocalDate localdate1 = LocalDate.of(2019, 12, 31);
        System.out.println("localtimeof : "+ localdate1);
        LocalDate parseddate = LocalDate.parse("2019-12-31");
        System.out.println("parseddate : "+ parseddate);
        DateTimeFormatter fmt2 = DateTimeFormatter.ofPattern("dd/MM/yyyy");
        String date2 = localdate.format(fmt2);
        System.out.println("date2 : "+ date2);
        
    }

    public static void main(String[] args) {
        // millis();
        // date();
        // cal();
        simple();
        localdate();
    }
}

