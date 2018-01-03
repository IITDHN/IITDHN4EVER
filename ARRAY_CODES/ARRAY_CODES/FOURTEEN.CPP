#include<iostream.h>
#include<conio.h>
#define rows 5
#define cols 5
void SHOWMID(int matrix[][5],int row,int col);
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
SHOWMID(matrix,nr,mc);
getch();
return 0;
}

void SHOWMID(int matrix[][5],int row,int col)
{
cout<<endl<<"ARRAY IS ";
for(int j=0;j<=col-1;j+=2)
{
cout<<endl;
for(int i=0;i<=row-1;i++)
{
cout<<matrix[i][j]<<"\t";
}
}
}






