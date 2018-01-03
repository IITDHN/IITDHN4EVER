#include<iostream.h>
#include<conio.h>
#define rows 10
#define cols 10
void DISPMIDROWCOL(int matrix[][10],int row,int col);
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
DISPMIDROWCOL(matrix,nr,mc);
getch();
return 0;
}
void DISPMIDROWCOL(int matrix[][10],int row,int col)
{
int i=row/2; // code to dislpay middle row of 2-d array
cout<<endl<<" MIDDLE ROW IS ";
cout<<endl;
for(int j=0;j<=col-1;j++)
{
cout<<matrix[i][j]<<"\t";
}
j=col/2;     // code to display middile column   of 2-d array
cout<<endl<<" MIDDLE COLUMN IS ";
cout<<endl;
for(i=0;i<=row-1;i++)
{
cout<<matrix[i][j]<<"\t";
}
}

