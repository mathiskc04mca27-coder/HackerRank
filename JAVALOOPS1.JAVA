import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        
        if (in.hasNextInt()) {
            int N = in.nextInt();
            
            
            for (int i = 1; i <= 10; i++) {
                
                int result = N * i;
                
                
                System.out.println(N + " x " + i + " = " + result);
            }
        }
        in.close();
    }
}
