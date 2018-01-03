#include<iostream.h>
#include<conio.h>
#define ROW 4
#define col 3
void swapcolfirst_last(int array1[4][3],int row,int column);
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
swapcolfirst_last(array,ROW,col);
getch();
return 0;
}
void swapcolfirst_last(int array1[4][3],int row,int column)
{
int i,temp;
for(i=0;i<=row-1;i++)
{
temp=array1[i][0];
array1[i][0]=array1[i][column-1];
array1[i][column-1]=temp;
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
