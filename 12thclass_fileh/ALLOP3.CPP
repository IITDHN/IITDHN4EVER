#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<process.h>
class Book
{
float price;
char bname[20];
public:
void readin()
{
cout<<"\n ENTER THE NAME OF THE BOOK ";
gets(bname);
cout<<"\n ENTER THE PRICE OF THE BOOK ";
cin>>price;
}
void readout()
{
cout<<"\n THE BOOK NAME IS "<<bname<<endl;
cout<<"\n THE PRICE IS "<<price<<endl;
}
};
void main()
{
clrscr();
Book book;
ofstream ofile;
char ch='y';
ofile.open("BOOKS1.dat",ios::out|ios::binary);
while((ch=='y')||(ch=='Y'))
{
book.readin();
ofile.write((char*)&book,sizeof(book));
cout<<"\n DO U WANT TO ADD MORE RECORDS(Y/N)  ";
cin>>ch;
}
ofile.close();

clrscr();
ifstream ifile;
ifile.open("BOOKS1.dat",ios::in|ios::binary);
while(ifile.read((char*)&book,sizeof(book)))
{
book.readout();
}
ifile.close();
getch();
}





