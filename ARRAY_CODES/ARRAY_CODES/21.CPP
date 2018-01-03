#include<iostream.h>
#include<conio.h>
#define ROW 4
#define col 3
void colsum(int array1[4][3],int row,int column);
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
colsum(array,ROW,col);
getch();
return 0;
}
void colsum(int array1[4][3],int row,int column)
{
int sum[3];
for(int j=0;j<=column-1;j++)
{
sum[j]=0;
for(int i=0;i<=row-1;i++)
{
sum[j]=sum[j]+array1[i][j];
}
}
cout<<"\n the individual columns sum is "<<endl;
for(int i=0;i<=2;i++)
{
cout<<" column "<<i+1<<" sum is : "<<sum[i]<<endl;
}
}

