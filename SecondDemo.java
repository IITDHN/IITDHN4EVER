class FirstDemo1
{

public static void main(int ...arr)// varity args or variable length arguments
{
System.out.println(" hello java");
int  a=arr[0];
int b=arr[1];
int c =arr[2];

int d=a+b+c;
System.out.println("the sum is "  +d);
String str1="chi rag";
String str2="pahuja";
String str3=str1+str2;
System.out.println(str3);
System.out.println(str3.charAt(6));
System.out.println(str3.substring(5));
}
}
// + operator in java is overloaded
// and it acts as concatenation operator
//
 public class SecondDemo
{

	public static void main(String  a[])
	{
		System.out.println(" hello java 1");
	  FirstDemo1.main(10,20,30);

	}
}