#include<iostream.h>
#include<conio.h>
#define MAX 30
void convert(int t[],int n);
int main()
{
clrscr();
int t[MAX];
int n;
cout<<endl<<" ENTER THE NO OF ELEMENTS ";
cin>>n;
cout<<endl<<"START INSERTING ELEMENTS "<<"\n";
for(int i=0;i<=n-1;i++)
{
cin>>t[i];
}
convert(t,n);
getch();
return 0;
}
void convert(int t[],int n)
{
int temp=t[0];
for(int i=0;i<=n-2;i++)
{
t[i]=t[i+1];
}
t[i]=temp;
cout<<endl<<" ARRAY ELEMENTS AFTER SHIFTING LEFT BY 1     ";
for(i=0;i<=n-1;i++)
{
cout<<t[i]<<",";
}
}
