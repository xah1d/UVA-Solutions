import java.util.Scanner;
import java.math.BigInteger;


public class Main {

	public static void main(String[] args) 
	{
		Scanner scan=new Scanner(System.in);
		int counter=0;
		while(true)
		{
			//System.out.println("enter some number: ");
			int n= scan.nextInt();
			int f=scan.nextInt();
			if(n==0 && f==0)
				break;
			counter++;
			BigInteger sum=BigInteger.ZERO;
			for(int i=1;i<=n;i++)
			{
				BigInteger v= scan.nextBigInteger();
				sum=sum.add(v);
			}
			System.out.println("Bill #"+ counter+" costs "+sum+": each friend should pay "+sum.divide(BigInteger.valueOf(f)));
			System.out.println();
		}
		
	}

}
