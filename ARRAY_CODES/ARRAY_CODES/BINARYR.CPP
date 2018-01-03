#include<iostream.h>
#include<conio.h>
int binaryRecur(int a[],int beg,int end,int element)
{
int mid;
if(beg>end)
return -1;
else
{
mid=(beg+end)/2;
if(a[mid]==element)
return mid;
else if(element<a[mid])
return binaryRecur(a,0,mid-1,element);
else
return binaryRecur(a,mid+1,end,element);
}
}
int main()
{
clrscr();
int array[10];
cout<<"\n ENTER THE 10  elements ";
for(int i=0;i<=9;i++)
{
cin>>array[i];
}
int beg=0;
int end=9;
int ele;
cout<<"\n ENTER THE ELEMENT to search ";
cin>>ele;
int index=binaryRecur(array,beg,end,ele);
if(index>-1)
{
cout<<endl<<" ELEMENT FOUND AT INDEX "<<index <<" and at position "<<index+1;
}
else
cout<<" NOT FOUND ";
getch();
return 0;
}


