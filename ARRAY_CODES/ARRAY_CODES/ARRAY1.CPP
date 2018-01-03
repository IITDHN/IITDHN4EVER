#include<iostream.h>
#include<conio.h>
int fun(int a)
{
return a*a*a;
}
void main()
{
clrscr();
//int array[5]={1,2,3,4,5}; // declaration and initialization of array elements
//int array[5]={1,2,3};
//int array[5]={1,2,3,'A','a'};
//int array[]={1,2,3,4,5,6,7,8,9,10};
//int x=3,y=4;
//int array[5]={0,1,x,y,5};
//int array[5]={1,2*3,5*6,5+7};
//int array[5]={1,2,65,'$','_'};
int array[5]={1,3};
cout<<array[3];
cout<<endl;
cout<<array[4]; // typecasting
cout<<endl;
cout<<(char)array[2];
cout<<endl;
cout<<array[67]<<endl;
cout<<++array[67];
getch();
}
