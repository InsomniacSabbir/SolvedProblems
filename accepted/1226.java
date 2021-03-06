import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {

    public static void main(String[] args) throws IOException {

        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        StringBuffer sb = new StringBuffer("");
        int cases=Integer.parseInt(br.readLine());
        for(int i=0;i<cases;i++){
            BigInteger p=new BigInteger(br.readLine());
            BigInteger q=new BigInteger(br.readLine());
            sb.append(q.mod(p)).append("\n");
        }
        System.out.print(sb);
    }
}
