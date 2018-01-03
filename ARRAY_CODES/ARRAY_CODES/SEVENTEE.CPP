#include<iostream.h>
#include<conio.h>
#define ROWS 10
#define COLS 10
void ADDDIAG(int p[][10],int row,int col);
int main()
{
clrscr();
int p[ROWS][COLS];
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
ADDDIAG(p,row,col);
getch();
return 0;
}
void ADDDIAG(int p[][10],int row,int col)
{
int sum=0;
for(int i=0;i<=row-1;i++)
{
for(int j=0;j<=col-1;j++)
{
if(i==j)
{
sum+=p[i][j];
}
else if(j==col-(i+1))  // condition for minor column
{
sum+=p[i][j];
}
}
}
cout<<endl<<" the sum of both diagonal is "<<sum;
}





