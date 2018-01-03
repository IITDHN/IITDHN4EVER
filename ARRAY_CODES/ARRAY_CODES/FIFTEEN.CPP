#include<iostream.h>
#include<conio.h>
#define rows 5
#define cols 6
void REVROW(int matrix[][6],int row,int col);
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
REVROW(matrix,nr,mc);
getch();
return 0;
}
void REVROW(int matrix[][6],int row,int col)
{
for(int i=0;i<=row-1;i++)
{
int x=col-1;
for(int j=0;j<=x;j++) // stop till x and that will reduce extra iterations of j loop
{
if(j<x)   // to stop till last index of column
{
int temp=matrix[i][j];
matrix[i][j]=matrix[i][x];
matrix[i][x]=temp;
x--;
}
}
}
cout<<endl<<" THE ARRAY AFTER ROW REVERAL IS ";
for(i=0;i<=row-1;i++)
{
cout<<endl;
for(int j=0;j<=col-1;j++)
{
cout<<matrix[i][j]<<"\t";
}
}
}


