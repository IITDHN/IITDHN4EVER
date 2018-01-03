#include<iostream.h>
#include<conio.h>
#define ROW 4
#define col 5
void alternate_sum(int array1[][5],int row,int column);
int main()
{
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
alternate_sum(array,ROW,col);
getch();
return 0;
}
void alternate_sum(int array1[][5],int row,int column)
{
int sum=0;
int c=1;
for(int i=0;i<=row-1;i++)
{
for(int j=0;j<=column-1;j++)
{
if(c%2!=0)
{
sum+=array1[i][j];
}
c++;
}
}
cout<<"\n the sum is "<<sum;
}


