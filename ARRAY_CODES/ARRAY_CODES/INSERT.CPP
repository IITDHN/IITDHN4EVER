#include<iostream.h>
#include<conio.h>
void insertAtGivenPosition(int a[],int n,int item ,int k);
int main()
{
clrscr();
int array[100];
int n;
cout<<"\n ENTER THE NO OF ELEMENTS ";
cin>>n;
cout<<"\n START INSERTING ELEMENTS ";
int item;

for(int i=0;i<=n-2;i++)
{
cin>>array[i];
}
int k;
cout<<"\n ENTER THE ELEMENT TO BE INSERTED ";
cin>>item;
cout<<"\n ENTER THE INDEX OF INSERTION ";
cin>>k;
insertAtGivenPosition(array,n,item,k);
getch();
return 0;
}
void insertAtGivenPosition(int a[],int n,int item,int k)
{
int j;
j=n-2;
while(j >=k)
{
a[j+1]=a[j];
j--;
}
a[k]=item;
cout<<"\n THE ELEMENTS AFTER INSERTION IS ";
for(int i=0;i<=n-1;i++)
{
cout<<a[i]<<",";
}
}




