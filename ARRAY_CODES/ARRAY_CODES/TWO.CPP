#include<iostream.h>
#include<conio.h>
#define MAX 100
void fixPay(float pay[],int n);// function declaration
int main()
{
clrscr();
float pay[MAX];
int n;
cout<<endl<<" ENTER THE NO OF ELEMENTS ";
cin>>n;
cout<<endl<<" START INSERTING ELEMENTS ";
for(int i=0;i<=n-1;i++)
{
cin>>pay[i];
}
fixPay(pay,n);
getch();
return 0;
}
void fixPay(float *pay,int n)
{
for(int i=0;i<=n-1;i++)
{
if(pay[i]<100000)
{
pay[i]=pay[i]+(pay[i]*35)/100;
}
else if((pay[i]>=100000)&& (pay[i]<200000))
{
pay[i]=pay[i]+(pay[i]*30)/100;
}
else
{
pay[i]=pay[i]+(pay[i]*20)/100;
}
}
cout<<endl<<" THE ELEMENTS OF ARRAY ARE ";
for(i=0;i<=n-1;i++)
{
cout<<pay[i]<<endl;
}
}

