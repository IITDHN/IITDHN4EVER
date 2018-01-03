#include<iostream.h>
#include<conio.h>
#define MAX 100
void add(int a[],int n);
int main()
{
clrscr();
int array[MAX];
int n;
cout<<endl<<"ENTER THE NO OF ELEMENTS ";
cin>>n;
cout<<endl<<"START INSERTING ELEMENTS ";
for(int i=0;i<=n-1;i++)
{
cin>>array[i];
}
add(array,n);
getch();
return 0;
}
void add(int a[],int n)
{
for(int i=0;i<=n;i++)
{
if((i%2)==0)
{
a[i]+=a[i+1];
}
else
{
a[i]+=10;
}
}
cout<<endl<<"ARRAY AFTER ADDITION OF ELEMENTS IS ";
for(i=0;i<=n-1;i++)
{
cout<<a[i]<<",";
}
}
