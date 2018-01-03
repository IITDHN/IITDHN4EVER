#include<iostream.h>
#include<conio.h>
#define MAX 100
int search(int a[],int n,int ele);
int main()
{
clrscr();
int array[MAX];
int n;
cout<<"\n ENTER THE NO OF ELEMENTS ";
cin>>n;
cout<<endl<<"START INSERTING ELEMENTS ";
for(int i=0;i<=n-1;i++)
{
cin>>array[i];
}
int ele;
cout<<endl<<"\n ENTER THE ELEMENT TO SEARCH ";
cin>>ele;
int index=search(array,n,ele);
if(index==-1)
{
cout<<endl<<"UNSUCCESSFUL SEARCH ";
}
else
{
cout<<"\n THE ELEMENT FOUND AT index "<<index <<" and at position "<<(index+1);
}
getch();
return 0;
}
int search(int *a,int n,int ele)
{
for(int k=0;k<=n-1;k++)
{
if(a[k]==ele)
{
return k;
}
}
return -1;
}

