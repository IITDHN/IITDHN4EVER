#include<conio.h>
#include<iostream.h>
#define MAX 30
void swap2change(int p[],int n);
int main()
{
clrscr();
int p[MAX];
int n;
cout<<endl<<" ENTER THE NO OF ELEMENTS ";
cin>>n;
cout<<endl<<" START INSERTING ELEMENTS ";
for(int i=0;i<=n-1;i++)
{
cin>>p[i];
}
swap2change(p,n);
getch();
return 0;
}
void swap2change(int p[],int n)
{
for(int i=0;i<=n-1;i++)
{
if((p[i]%10)==0)
{
int temp=p[i];
p[i]=p[i+1];
p[i+1]=temp;
i++;
}
}
cout<<endl<<" THE CONTENTS AFTER MODIFICATION IS ";
for(i=0;i<=n-1;i++)
{
cout<<p[i]<<",";
}
}


