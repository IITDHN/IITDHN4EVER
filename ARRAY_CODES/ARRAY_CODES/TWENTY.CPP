#include<iostream.h>
#include<conio.h>
#define ROWS 10
#define COLS 10
void skipeach(int p[][10],int row,int column);
int main()
{
clrscr();
int p[ROWS][COLS];
int row,col;
cout<<endl<<" ENTER THE NUMBER OF ROWS ";
cin>>row;
cout<<endl<<" ENTER THE NUMBER OF COLS ";
cin>>col;
cout<<endl<<"START INSEERTING ELEMENTS ";

for(int i=0;i<row;i++)
{
cout<<endl;
for(int j=0;j<col;j++)
{
cin>>p[i][j];
}
}
skipeach(p,row,col);
getch();
return 0;
}
void skipeach(int p[][10],int row,int col)
{
int j;
cout<<"AFTER SKIPPING THE ARRAY IS ";
for(int i=0;i<=row-1;i++) // runs for less number of iterations
{
if(i%2==0)
{
j=0;
}
else
{
j=1;
}
while(j<=col-1)
{
//cout<<p[i][j]<<" ";
sum+=p[i][j]
j=j+2;
}
}
}








