package Exercice2;

import java.math.BigInteger;

public class Factorielle {
    public static int factV1(int a) {
        int res = 1;
        for (int i = 1; i <= a; i++) {
            res *= i;
        }
        return res;
    }

    public static int factV1_rec(int a) {
        if (a == 0) {
            return 1;
        } else {
            return a * factV1_rec(a - 1);
        }
    }

    public static BigInteger factV2(int a) {
        BigInteger res = BigInteger.ONE;
        for (int i = 1; i <= a; i++) {
            res = res.multiply(BigInteger.valueOf(i));
        }
        return res;
    }
}
