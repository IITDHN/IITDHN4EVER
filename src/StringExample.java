
public class StringExample {

	public static void main(String[] args) {

String[] fruits={" guava"," watermelon","orange"};

for(int i=0;i<fruits.length;i++)
{
	System.out.println(" the array contains "+fruits[i]);
}
	
	for(String arr:fruits)// enhanced for loop
	{
		
		System.out.println(" the array via enhanced for loop is "+arr);
		
	}
	
	
	}

}
