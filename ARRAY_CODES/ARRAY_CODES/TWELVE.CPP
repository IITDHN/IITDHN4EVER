#include<iostream.h>
#include<conio.h>
#define rows 10
#define cols 10
void SUMMIDCOL(int matrix[][10],int row,int col);
int main()
{
clrscr();
int matrix[rows][cols];
int nr;
int mc;
cout<<endl<<" ENTER THE NO OF ROWS ";
cin>>nr;
cout<<endl<<" ENTER THE NO OF COLS ";
cin>>mc;
cout<<endl<<" START INSERTING ELEMENTS ";
for(int i=0;i<=nr-1;i++)
{
cout<<endl;
for(int j=0;j<=mc-1;j++)
{
cin>>matrix[i][j];
}
}
SUMMIDCOL(matrix,nr,mc);
getch();
return 0;
}
void SUMMIDCOL(int matrix[][10],int row,int col)
{
int j=col/2;
int sum=0;
for(int i=0;i<=row-1;i++)
{
sum+=matrix[i][j];
}
cout<<endl<<" THE SUM OF THE MIDDLE COLUMN IS " <<sum;
}




