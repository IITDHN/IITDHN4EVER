
public class SumUsingLoop {

	public static void main(String[] args) {
		int sum=0;
		for(String arr:args)
		{
			sum+=Integer.parseInt(arr);
		}
		
	System.out.println(" the sum is "+sum);
	
	}

}
