void REVCOL(int p[][10],int row,int col)
{
for(int i=0;i<=col-1;i++)
{
int x=row-1;
for(int j=0;j<=x;j++)
{
if(j<x)
{
int temp=p[j][i];
p[j][i]=p[x][i];
p[x][i]=temp;
x--;
}
}
}
cout<<endl<<" ARRAY AFTER REVERSAL IS ";
for(i=0;i<=row-1;i++)
{
for(int j=0;j<=col-1;j++)
{
cout<<p[i][j]<<"\t";
}
cout<<endl;
}
}










