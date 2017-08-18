
public class StaticExample {

	{// pre constructor call
		System.out.println(" pre constructor call1");
	}
	
		
		{// pre constructor call
			System.out.println(" pre constructor call2");
		}
			
		
	
	{// pre constructor call
		System.out.println(" pre constructor call3");
	}
	
	{// pre constructor call
		System.out.println(" pre constructor call4");
	}
	
	static 
	{
		
		System.out.println(" static block exection");
	}
	
	static 
	{
		
		System.out.println(" static block exection 1");
		
    }
	
	public static void main(String[] args) {
		StaticExample se=new StaticExample();
	System.out.println(se);
	
	
	}

	@Override
	public String toString() {
		return "StaticExample [getClass()=" + getClass() + ", hashCode()=" + hashCode() + ", toString()="
				+ super.toString() + "]";
	}

}
