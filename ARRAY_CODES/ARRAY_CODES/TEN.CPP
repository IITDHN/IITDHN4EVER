#include<iostream.h>
#include<conio.h>
#define MAX 30
void get2From1(int all[],int n);
int main()
{
clrscr();
int all[MAX];
int n;
cout<<endl<<" ENTER THE NO OF ELEMENTS ";
cin>>n;
cout<<endl<<" START INSERTING ELEMENTS ";
for(int i=0;i<=n-1;i++)
{
cin>>all[i];
}
get2From1(all,n);
getch();
return 0;
}
void get2From1(int all[],int n)
{
int j=0,k=0;
int first_half=0;
int second_half=0;
if(n%2==0)
{
first_half=n/2;
second_half=n/2;
}
else
{
first_half=n/2;
second_half=(n/2)+1;
}

int *odd=new int[first_half]; // dynamic memory
int *even=new int[second_half];
//cout<<"\n the address of first element of array is "<<odd;


for(int i=0;i<n;i++)
{
if(i%2==0)
{
even[j++]=all[i];
}
else
{
odd[k++]=all[i];
}

}
cout<<endl<<" THE ELEMENTS IN THE EVEN ARRAY ARE ";
for(i=0;i<j;i++)
{
cout<<even[i]<<",";
}
cout<<endl<<" THE ELEMENTS IN THE ODD ARRAY ARE ";
for(i=0;i<k;i++)
{
cout<<odd[i]<<",";
}
}








