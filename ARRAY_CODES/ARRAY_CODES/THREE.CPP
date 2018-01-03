#include<iostream.h>
#include<conio.h>
#define MAX 100
void modify(int a[],int n);
int main()
{
clrscr();
int m[MAX];
int n;
cout<<endl<<" ENTER THE NO. OF ELEMENTS ";
cin>>n;
for(int i=0;i<=n-1;i++)
{
cin>>m[i];
}
modify(m,n);
getch();
return 0;
}
void modify(int a[],int n)
{
for(int i=0;i<=n-1;i=i+1)
{
int temp=a[i];
a[i]=a[i+2];
a[i+2]=temp;
if(i%4>=1)
i=i+2;
}
cout<<endl<<"THE CONTENT OF ARRAY AFTER MODIFICATION IS ";
for(i=0;i<=n-1;i++)
{
cout<<a[i]<<",";
}
}






