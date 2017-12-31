#include<conio.h>
#include<string.h>
#include<fstream.h>
#include<process.h>
#include<stdio.h>
#include<stdlib.h>
void display_selected();
void create();
void display();
void roll_search();
void deleterecord();
void name_search();
struct Student
{
int rollno;
char name[20];
float marks;
};
void display_selected()
{
ifstream fin("studies.dat",ios::in|ios::binary);
Student s;
while(fin.read((char*)&s,sizeof(s)))
{
if((int)s.marks>50)
{
cout<<"\n THE NAME IS "<<s.name<<endl;
cout<<"\n THE ROLLNO IS "<<s.rollno<<endl;
cout<<"\n THE MARKS ARE "<<s.marks<<endl;
}
}
fin.close();
}
void name_search()
{
ifstream fin("studies.dat",ios::binary|ios::in);
Student s;
int counter=0;
char n[20];
cout<<"\n ENTER THE NAME TO BE SEARCHED "<<endl;
gets(n);
while(fin.read((char*)&s,sizeof(s)))
{
if(strcmp(s.name,n)==0)
{
cout<<" RECORD FOUND "<<endl;
cout<<"\n THE  NAME IS "<<s.name<<endl;
cout<<"\n THE ROLL NO IS "<<s.rollno<<endl;
cout<<"\n THE MARKS ARE "<<s.marks<<endl;
counter++;
}
}
if(counter==0)
cout<<" NO SUCH RECORD FOUND "<<endl;
else
cout<<"\n NUMBER OF RECORDS WITH THE SAME NAME ARE  "<<counter;
fin.close();
}
void deleterecord()
{
fstream fp,fs;
int rollno;
fs.open("studies.dat",ios::in|ios::binary);
fp.open("temp.dat",ios::out|ios::binary|ios::app);
Student s;
cout<<"\n ENTER THE ROLL NO WHOSE RECORD IS To BE DELETED "<<endl;
cin>>rollno;
while(fs.read((char*)&s,sizeof(s)))
{
if(s.rollno!=rollno)
{
fp.write((char*)&s,sizeof(s));
}
else
{
cout<<"THE RECORD WHICH HAS TO BE DELETED IS FOUND WHICH IS "<<s.rollno<<endl;
cout<<"\n THE ROLLNO IS "<<s.rollno;
cout<<"\n THE NAME IS "<<s.name;
cout<<"\n THE MARKS ARE "<<s.marks<<endl;
}
}
fs.close();
fp.close();
remove("studies.dat");
rename("temp.dat","studies.dat");
cout<<"\n RENAME DONE "<<endl;
cout<<"\n the contents of the file after deletion of record are ";
ifstream file;
file.open("studies.dat",ios::in|ios::binary);
file.read((char*)&s,sizeof(s));
while(!file.eof())
{
cout<<"\n the name is "<<s.name<<endl;
cout<<"\n the roll no is "<<s.rollno<<endl;
cout<<"\n the marks are "<<s.marks<<endl;
file.read((char*)&s,sizeof(s));
}
file.close();
}
void create()
{
ofstream fout;
fout.open("studies.dat",ios::binary|ios::out|ios::app);// opening the file using constructor function
Student s;
char rep='y';
while((rep== 'y')||(rep=='Y'))
{
cout<<"ENTER THE ROLL NO ";
cin>>s.rollno;
cout<<"\n ENTER THE MARKS ";
cin>>s.marks;
cout<<"\n ENTER THE NAME ";
gets(s.name);
fout.write((char*)&s,sizeof(s));
cout<<"\n DO U WANT TO WRITE MORE RECORDS IN TO THE FILE "<<endl;
cin>>rep;
}
fout.close();
}
void display()
{
ifstream fin("studies.dat",ios::binary|ios::in);
Student s;
while(fin.read((char*)&s,sizeof(s)))
{
cout<<"\n THE ROLL NO IS "<<s.rollno<<endl;
cout<<"\n THE NAME IS "<<s.name<<endl;
cout<<"\n THE MARKS ARE "<<s.marks<<"%"<<endl;
}
fin.close();
}
void roll_search()
{
ifstream fin("studies.dat",ios::binary|ios::in);
Student s;
int x;
char found='n';
cout<<"\n ENTER THE ROLL NO TO BE  SEARCHED ";
cin>>x;
while(fin.read((char*)&s,sizeof(s)))
{

if(s.rollno==x)
{
found='y';
cout<<"\n RECORD FOUND "<<endl;
cout<<"\n ROLL NO IS "<<s.rollno<<endl;
cout<<"\n NAME IS "<<s.name<<endl;
cout<<"\n MARKS ARE "<<s.marks <<"%"<<endl;

}
}
if(found=='n')
{
cout<<"\n the record not found "<<endl;
}
/*else
{
cout<<"\n RECORD FOUND";
cout<<"\n ROLL NO IS "<<s.rollno<<endl;
cout<<"\n NAME IS "<<s.name<<endl;
cout<<"\n MARKS ARE "<<s.marks <<"%"<<endl;
}*/
fin.close();
}
void main()
{

int x;
char ch='y';
//clrscr();
while((ch=='y')||(ch=='Y'))
{
clrscr();

cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tMENU"<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t1.CREATE "<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t2.DISPLAY"<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t3.SEARCH ON ROLL NO "<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t4.DELETE "<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t5.EXIT"<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t6.SEARCH ON NAME "<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t7.DISPLAY SELECTED RESULTS "<<endl;
cout<<"ENTER YOUR CHOICE "<<endl;
cin>>x;
switch(x)
{
case 1: create();
break;
case 2: display();
break;
case 3: roll_search();
break;
case 6: name_search();
break;
case 4: deleterecord();
break;
case 5: exit(0);
break;
case 7: display_selected();
break;
default: cout<<" WRONG INPUT "<<endl;
}
cout<<"\n DO U WANT TO  USE  THE MENU AGAIN"<<endl;
cin>>ch;
}
getch();
}
