#include<iostream.h>
#include<conio.h>
#define MAX 100
void insertInSortedArray(int a[],int n,int item);
int main()
{
clrscr();
int array[MAX];
int n;
cout<<"\n ENTER THE NUMBER OF ELEMENTS ";
cin>>n;
cout<<"\n START INSERTING ELEMENTS";
for(int i=0;i<=n-2;i++)
{
cin>>array[i];
}
int ele;
cout<<"\n ENTER THE ELEMENT TO BE INSERTED ";
cin>>ele;
insertInSortedArray(array,n,ele);
getch();
return 0;
}
void insertInSortedArray(int a[],int n,int item)
{
int k=n-2;
while((item<a[k])&&(k>=0))
{
a[k+1]=a[k];
k--;
}
a[k+1]=item;

cout<<"\n ARRAY AFTER INSERTION IS ";
for(int i=0;i<=n-1;i++)
{
cout<<a[i]<< ",";
}
}


