#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define MAX 100
struct game
{
long rollno;
char name[20];
float score;
}t[10];
void sortpoints(struct game t[],int n);
int main()
{
clrscr();
int n;
cout<<endl<<" ENTER THE NUMBER OF PLAYERS  ";
cin>>n;
cout<<" START INSERTING PLAYERS RECORDS  ";
for(int i=0;i<=n-1;i++)
{
cout<<endl<<" ENTER THE roll no of player  "<<(i+1)<<" ";
cin>>t[i].rollno;
cout<<endl<<" ENTER THE NAME OF THE player  "<<(i+1)<<" ";
gets(t[i].name);
cout<<endl<<" ENTER THE SCORE OF PLAYER  "<<(i+1)<<" ";
cin>>t[i].score;
}
sortpoints(t,n);
getch();

return 0;
}
void sortpoints(struct game t[],int n)
{
struct game g;  // temprary variable
for(int i=1;i<=n-1;i++)     // for passes
{
for(int j=0;j<=(n-(i+1));j++)     // to stop going j out of bound
{
if(t[j+1].score>t[j].score)
{
g=t[j];
t[j]=t[j+1];
t[j+1]=g;
}
}
}
cout<<endl<<" THE ARRAY OF OBJECTS AFTER SORTING IS ";
cout<<endl<<"THE record of players is "<<endl;
for(i=0;i<=n-1;i++)
{
cout<<"\t\t"<<t[i].rollno<<"\t\t"<<t[i].name<<"\t\t"<<t[i].score<<endl;
}
}




