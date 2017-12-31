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
ifstream ifile;
ifile.open("BOOKS1.dat",ios::in|ios::binary);
ifile.seekg(0,ios::end);   // go to end of the file

cout<<"\n THE END POSITION IS "<<ifile.tellg()<<endl;
int n=ifile.tellg()/sizeof(book);
cout<<"\n the n is "<<n<<endl;
cout<<"\n THERE ARE "<<n<<" BOOKS IN THE FILE "<<endl;
cout<<"\n ENTER THE BOOK NUMBER YOU wANT TO dISplaY ";
cin>>n;
int position=(n-1)*sizeof(book); // from this line of code we jump that much no of bytes
cout<<"\n THE POSITION NOW IS "<<position<<endl;
ifile.seekg(position,ios::beg);
ifile.read((char*)&book,sizeof(book));
book.readout();
getch();
}
