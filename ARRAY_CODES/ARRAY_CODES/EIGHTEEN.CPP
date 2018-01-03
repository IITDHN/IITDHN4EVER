#include<iostream.h>
#include<conio.h>
#define ROWS 10
#define cols 10
void OTHERDIAG(int p[][10],int row,int col);
int main()
{
clrscr();
int p[ROWS][cols];
int row;
cout<<endl<<" ENTER THE NO OF ROWS ";
cin>>row;
int col;
cout<<endl<<" ENTER THE NO OF COLUMNS ";
cin>>col;
cout<<endl<<" START INSERTING ELEMENTS ";
for(int i=0;i<=row-1;i++)
{
cout<<endl;
for(int j=0;j<=col-1;j++)
{
cin>>p[i][j];
}
}
OTHERDIAG(p,row,col);
getch();
return 0;
}
void OTHERDIAG(int p[][10],int row,int col)
{
for(int i=0;i<=row-1;i++)
{
cout<<endl;
for(int j=0;j<=col-1;j++)
{
if(j==col-(i+1))
{
cout<<p[i][j]<<"\t";
}
}
}}


