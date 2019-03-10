import java.io.IOException;
import java.lang.*;
import java.util.Scanner;
import java.math.BigInteger;
class Main{
    public static void main(String args[])throws IOException{
        Scanner scan=new Scanner(System.in);
        BigInteger b;
        long i,n;
        while(scan.hasNext()){
            b=BigInteger.ONE;
            n=scan.nextLong();
            for(i=1;i<=n;i++){
                b=b.multiply(BigInteger.valueOf(i));
            }
            System.out.println(n+"!\n"+b);
        }
    }
}