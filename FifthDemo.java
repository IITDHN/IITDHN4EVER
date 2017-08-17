public class FifthDemo extends Object
{
	int a;// class level variables
	// instance variables
	//
	long l;
	float f;
	double d;
	String str;
	boolean b;
	char ch;



	// this gives an error	System.out.println(a+" "+ f);


public String alpha()
{
	return " CHANDAN IS SUPERMAN ";


}
	public static void main(String args[])
{
FifthDemo fd=new FifthDemo();
// fd is a reference variable
// contains refid
// gen by new keyword
System.out.println(fd.toString());
System.out.println(fd.alpha());
System.out.print(fd.a);
System.out.print(fd.l);
System.out.println(fd.f);
System.out.println(fd.d);
System.out.println(fd.str);
System.out.println(fd.b);
System.out.println(fd.ch);
System.out.println(fd.a);
System.out.print(1+" "+2+" "+3+4+5);



}
}
