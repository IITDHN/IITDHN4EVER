#include<iostream.h>
#include<conio.h>
#define ROW 3
#define col 3
void diagonalsum(int array1[][3],int row);
int main()
{
clrscr();
int array[ROW][col];
clrscr();
cout<<" ENTER THE ELEMENTS "<<"\n";
cout<<" START INSERTING IN MATRIX FORM "<<"\n";
for(int i=0;i<=ROW-1;i++)
{
for(int j=0;j<=col-1;j++)
{
cin>>array[i][j];
}
}
diagonalsum(array,ROW);
getch();
return 0;
}
void diagonalsum(int array1[][3],int row)
{
int i,sum=0;
cout<<"\n SUM OF MAJOR DIAGONAL is "<<endl;
for(i=0;i<=row-1;i++)
{
sum+=array1[i][i];
}
cout<<sum<<endl;
cout<<"\n SUM OF MINOR DIAGONAL IS "<<endl;
sum=0;
for(i=0;i<=row-1;i++)
{
sum+=array1[i][row-(i+1)];
}
cout<<sum<<endl;
}


// n*n matrix