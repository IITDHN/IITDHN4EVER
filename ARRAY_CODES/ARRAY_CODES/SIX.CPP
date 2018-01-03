#include<iostream.h>
#include<conio.h>
#define MAX 30
void changeOver(int t[],int n);
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
changeOver(t,n);
getch();
return 0;
}
void changeOver(int t[],int n)
{
int temp;
for(int i=0;i<=n-2;i++)
{
temp=t[n-1];
t[n-1]=t[i];
t[i]=temp;
}
cout<<endl<<" ARRAY ELEMENTS AFTER SHIFTING ";
for(i=0;i<=n-1;i++)
{
cout<<t[i]<<",";
}
}
