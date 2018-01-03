#include<iostream.h>
#include<conio.h>
void transfer(int A[6],int B[6]);
int main()
{
clrscr();
int A[6];
int B[6];
cout<<endl<<"ENTER THE ELEMENTS IN ARRAY A";
for(int i=0;i<=5;i++)
{
cin>>A[i];
}
cout<<endl<<" ENTER THE ELEMENTS IN ARRAY B ";
for(i=0;i<=5;i++)
{
cin>>B[i];
}
transfer(A,B);
getch();
return 0;
}
void transfer(int A[6],int B[6])
{
for(int i=1;i<=5;i=i+2)
{
int temp=A[i];
A[i]=B[i];
B[i]=temp;
}
cout<<endl <<" the contents in array A are ";
for(i=0;i<=5;i++)
{
cout<<A[i]<<",";
}
cout<<endl<<" the contents in array B are ";
for(i=0;i<=5;i++)
{
cout<<B[i]<<",";
}
}

