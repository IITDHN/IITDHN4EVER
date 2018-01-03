#include<iostream.h>
#include<conio.h>
#define MAX 100
int binary(int a[],int n,int ele);
int main()
{
clrscr();
int array[MAX];
int n;
cout<<endl<< " ENTER THE NO OF ELEMENTS ";
cin>>n;
cout<<endl<<" START INSERTING THE ELEMENTS ";
for(int i=0;i<=n-1;i++)
{
cin>>array[i];
}
int ele;
cout<<endl<<" ENTER THE ITEM TO SEARCH ";
cin>>ele;
int index=binary(array,n,ele);
if(index>-1)
{
cout<<endl<<"element found at index"<<index<<" and at position "<<index+1;
}
else
cout<<endl<<" UNSUCCESSFUL SEARCH ";
getch();
return 0;
}
int binary(int *a,int n,int ele)
{
int beg=0;
int end=n-1;
int mid=(beg+end)/2;
while((beg<=end)&&(a[mid]!=ele))
{
if(ele>a[mid])
{
beg=mid+1;
}
else
{
end=mid-1;
}
mid=(beg+end)/2;
}
if(beg>end)
{
return -1;
}
else
{
return mid;
}
}
