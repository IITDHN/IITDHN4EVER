#include<iostream.h>
#include<conio.h>
#define ROW 4
#define col 3
void swap_row_first_last(int array1[4][3],int row,int column);
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
swap_row_first_last(array,ROW,col);
getch();
return 0;
}
void swap_row_first_last(int array1[4][3],int row,int column)
{
int i,temp;
for(i=0;i<=column-1;i++)
{
temp=array1[0][i];
array1[0][i]=array1[row-1][i];
array1[row-1][i]=temp;
}
cout<<"\n THE ARRAY ELEMENTS AFTER SWAPPPING ARE ";
for(i=0;i<=row-1;i++)
{
cout<<endl;
for(int j=0;j<=column-1;j++)
{
cout<<array1[i][j]<<"\t";
}
}
}
