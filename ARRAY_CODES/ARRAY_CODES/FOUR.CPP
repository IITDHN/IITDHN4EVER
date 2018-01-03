#include<iostream.h>
#include<conio.h>
#define MAX 30
#define MAX1 30
void TWOINONE(int x[],int y[],int xn,int yn);
int main()
{
clrscr();
int x[MAX];
int y[MAX1];
int xn;
cout<<endl<<" ENTER THE NO OF ELEMENTS IN ARRAY X ";
cin>>xn;
cout<<endl<<" START INSERTING ELEMENTS ";
for(int i=0;i<=xn-1;i++)
{
cin>>x[i];
}
int yn;
cout<<endl<<" ENTER THE NO OF ELEMENTS IN ARRAY Y ";
cin>>yn;
cout<<endl<<" START INSERRTING ELEMENTS ";
for(i=0;i<=yn-1;i++)
{
cin>>y[i];
}
TWOINONE(x,y,xn,yn);
getch();
return 0;
}
void TWOINONE(int *x,int *y,int xn,int yn)
{
int z[MAX+MAX1];

int j=0,k=0;
for(int i=0;i<=(xn+yn)-1;i++)
{
if(i%2==0)
{
z[i]=x[j];
j++;
}
else
{
z[i]=y[k];
k++;
}
}
cout<<endl<<" Z ARRAY AFTER MERGING x and y is ";
for(i=0;i<=(xn+yn)-1;i++)
{
cout<<z[i]<<"\t";
}
}



