// n number of digits sum

public class Fourth
{
public static void main(String arr[])
{
int sum=0;
for(String w:arr)// enhanced for loop
{
sum+=Integer.parseInt(w);
}
System.out.println("the sum is "+sum);
}
}