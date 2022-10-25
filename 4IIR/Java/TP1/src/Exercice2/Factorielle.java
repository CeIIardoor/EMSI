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

    public static int factV2(int a) {
        BigInteger res = BigInteger.valueOf(1);
        for (int i = 1; i <= a; i++) {
            res = res.multiply(BigInteger.valueOf(i));
        }
        return res.intValue();
    }
    // TODO
    // public static int factV2_rec(BigInteger a) {
    //     if (a.equals(BigInteger.valueOf(0))) {
    //         return 1;
    //     } else {
    //         return a.multiply(
    //             BigInteger.valueOf(
    //                 factV2_rec(
    //                     a.subtract(
    //                         BigInteger.valueOf(1)
    //             ))))
    //         .intValue();
    //     }
    // }
}
