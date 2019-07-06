import java.math.BigInteger; 
import java.util.Scanner; 
  
public class Main 
{ 
    
    static BigInteger factorial(int N) 
    { 
        
        BigInteger f = new BigInteger("1"); // Or BigInteger.ONE 
  
        
        for (int i = 2; i <= N; i++) 
            f = f.multiply(BigInteger.valueOf(i)); 
  
        return f; 
    } 
  
     
    public static void main(String args[]) throws Exception 
    { 
        Scanner sc = new Scanner(System.in);
        while(true)
        {
            int n = sc.nextInt();
            int m = sc.nextInt();
            if(n==0 && m==0)
            break;
            
            
            System.out.print(n);
            System.out.print(" things taken ");
            
            System.out.print(m);
            System.out.print(" at a time is ");
            
            System.out.print(factorial(n).divide((factorial(n-m)).multiply(factorial(m)))); 
        
            System.out.println(" exactly.");
        }
    }
    
}