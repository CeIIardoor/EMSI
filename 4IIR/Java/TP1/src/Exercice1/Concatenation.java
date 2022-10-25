package Exercice1;

public class Concatenation {
    public static int[] concat(int[] a, int[] b)
        {
            int[] c = new int[a.length + b.length];
            for (int i = 0; i < a.length; i++)
                c[i] = a[i];
            for (int i = 0; i < b.length; i++)
                c[a.length + i] = b[i];
            return c;
        }
        public static void afficher(int[] T, String NomTab)
        {
            System.out.print(NomTab + " = [");
            for (int i = 0; i < T.length; i++)
                System.out.print(T[i] + " ");
            System.out.println("]");
        }
    }
