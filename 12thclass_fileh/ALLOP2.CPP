#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
class Student
{
int rollno;
char name[20];
float total;
public:

void getData()
{
cout<<"\n ENTER THE ROLL NO ";
cin>>rollno;
cout<<"\n ENTER THE NAME ";
gets(name);
cout<<"\n ENTER THE TOTAL ";
cin>>total;
}
void displayData()
{
cout<<"\n THE ROLL NO IS "<<rollno<<endl;
cout<<"\n THE NAME IS "<<name<<endl;
cout<<"\n THE TOTAL IS "<<total<<endl;
}
void updateData()
{
cout<<"\n ENTER THE UPDATED TOTAL OF THE STUDENT ";
cin>>total;
}

char* retname()
{
return name;
}
int retrollno()
{
return rollno;
}
float rettotal()
{
return total;
}
};
char rep;
Student s;
fstream fs,temp;
void countRecords()
{
fs.open("studentdata.dat",ios::in|ios::out|ios::binary);
int num=0;
while(fs.read((char*)&s,sizeof(s)))
{
num++;
}
cout<<"\n RECORDS IN THE FILE ARE ----"<<num<<endl;
fs.close();
}
void deleterecord()
{
fstream fp,fs;
int rollno;
fs.open("studentdata.dat",ios::in|ios::binary);
fp.open("temp.dat",ios::out|ios::binary|ios::app);
Student s;
cout<<"\n ENTER THE ROLL NO WHOSE RECORD IS To BE DELETED "<<endl;
cin>>rollno;
while(fs.read((char*)&s,sizeof(s)))
{
if(s.retrollno()!=rollno)
{
fp.write((char*)&s,sizeof(s));
}
else
{
s.displayData();
}
}

fs.close();
fp.close();
remove("studentdata.dat");
rename("temp.dat","studentdata.dat");
cout<<"RENAME DONE "<<endl;
cout<<"\n the contents of the file after deletion of record are  ";
ifstream file;
file.open("studentdata.dat",ios::in|ios::binary);
file.read((char*)&s,sizeof(s));
while(!file.eof())
{
s.displayData();
file.read((char*)&s,sizeof(s));
}
file.close();
}
void create()
{
fs.open("studentdata.dat",ios::in|ios::out|ios::binary|ios::app);
do
{
s.getData();
fs.write((char*)&s,sizeof(s));
cout<<"\n DO U WANT TO WRITe MORE RECORDS TO THE FILE(Y/N) "<<endl;
cin>>rep;
}while((rep=='y')||(rep=='Y'));
fs.close();
}
void display()
{
fs.open("studentdata.dat",ios::in|ios::out|ios::binary);
fs.read((char*)&s,sizeof(s));
while(!fs.eof())
{
s.displayData();
fs.read((char*)&s,sizeof(s));
}
fs.close();
}
void search()
{
int choice;
char found='n';
fs.open("studentdata.dat",ios::in|ios::out|ios::binary);
cout<<" SEARCH ON THE BASIS OF : \n 1. ROLL NUMBER. \n 2. NAME \n"<<endl;
cout<<"ENTER THE CHOICE"<<endl;
cin>>choice;
if(choice==1)
{
int rollno;
cout<<"\n ENTER THe ROLL NO TO BE SEARCHED ";
cin>>rollno;
while(fs.read((char*)&s,sizeof(s)))
{
if(s.retrollno()==rollno)
{
s.displayData();
found='y';
break;
}
}
}
if(choice == 2)
{
char nameToSearch[20],copied[20];
cout<<"\n ENTER THE NAME TO SEARCH "<<endl;
gets(nameToSearch);
while(fs.read((char*)&s,sizeof(s)))
{
strcpy(copied,s.retname());
if(strcmp(nameToSearch,copied)==0)
{
s.displayData();
found='y';
break;
}
}
}
if(found=='n')
{
cout<<"\n RECORD NOT FOUND ";
}
fs.close();
}

void modify()
{
int rollno_find;
Student s;
cout<<"\n ENTER THE ROLL NO. TO BE MODIFIED ";
cin>>rollno_find;
fs.open("studentdata.dat",ios::in|ios::out|ios::binary);
while(fs.read((char*)&s,sizeof(s)))
{
if(s.retrollno()==rollno_find)
{
s.updateData();
int position=fs.tellg()-sizeof(s);     // most important
fs.seekp(position,ios::beg);
fs.write((char*)&s,sizeof(s));
cout<<"\n DATA MODIFIED ";
}
}
fs.close();
ifstream oofile;
oofile.open("studentdata.dat",ios::in|ios::binary);
cout<<"\n THE CONTENTS OF THE FILE AFTER MODIFICATION IS "<<endl;
oofile.read((char*)&s,sizeof(s));
while(!oofile.eof())
{
s.displayData();
oofile.read((char*)&s,sizeof(s));
}
oofile.close();
}

void main()
{
int ch;
clrscr();
char ch1;
do
{
clrscr();
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t FILE HANDLING FUNCTIONS MENU "<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t1. CREATE A FILE "<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t2. READ ALL  THE RECORDS FROM FILE "<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t3. SEARCH AND DISPLAY RECORD "<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t4. COUNT TOTAL NUMBER OF RECORDS IN THE FILE "<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t5. EXIT"<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t6. MODIFY"<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t7. DELETE RECORD "<<endl;
cout<<"\n ENTER YOUR CHOICE "<<endl;
cin>>ch;
switch(ch)
{
case 1: create();
break;
case 2: display();
break;
case 3: search();
break;
case 4: countRecords();
break;
case 5:exit(0);
break;
case 6:modify();
break;
case 7: deleterecord();
break;
}
cout<<" DO U WANTS TO CONTINUE (Y/N)---"<<endl;
cin>>ch1;
}while((ch1=='y')||(ch1=='Y'));
getch();
}

