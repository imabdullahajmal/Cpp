
//Name : Abdullah Ajmal
//Date Created : 1 January 2023
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
struct student{
	char sname[20];
	string smail;
	char faddress[60];
	int sphone;
};
void addcoursef();
void renamef();
void deletef();
void addstudentf(student stns);
void findstudentf();
void removestudentf();
int main(){
	int slxt;
	student stns;
	while(1){
		cout<<"--------------Menu--------------\n"<<
	"1\tCreate a Course\n"<<
	"2\tDelete a course\n"<<
	"3\tRename a Course\n"<<
	"4\tAdd Student to Course\n"<<
	"5\tFind Student by name\n"<<
	"6\tDelete Student\n"<<
	"7\tExit\n"<<
	"--------------------------------";
	
	cout<<endl<<"Enter Option :\n>>";
	cin>>slxt;
	switch (slxt){
		case 1:{
			addcoursef();
			break;
		}
		
		case 2:{
			deletef();
			break;
		}
		
		case 3:{
			renamef();
			break;
		}
		
		case 4:{
			addstudentf(stns);
			break;
		}
		
		case 5:{
			findstudentf();
			break;
		}
		
		case 6:{
			removestudentf();
			break;
		}
		
		case 7:{
			return 0;
			break;
		}
		default:{
			cout<<"\nInvalid Option";
			break;
		}
		
	}
	system("cls");
	}
	
}
void addcoursef(){
	char crs[15];
	cin.clear();cin.sync();
	cout<<endl<<"What should be the name of new of new course (Dont forget to put file extension '.txt' ) :\n>>";
	cin.getline(crs,15);
	ofstream ncourse(crs);
	cout<<endl<<"Course Created";
	ncourse.close();
}

void renamef(){
	char crs[15],ncrs[15];
	cin.clear();cin.sync();
	cout<<endl<<"Enter name of the course you want to rename (Dont forget to put file extension '.txt' ) :\n>>";cin.getline(crs,15);
	cin.clear();cin.sync();
	cout<<"\nWhat should be the NEW name of the course :\n>>";
	cin.getline(ncrs,15);
	rename(crs,ncrs);
	cout<<endl<<"Course Renamed";
}

void deletef(){
	char crs[15];
	cin.clear();cin.sync();
	cout<<endl<<"Enter name of the course you want to delete (Dont forget to put file extension '.txt' ) :\n>>";
	cin.getline(crs,15);
	remove(crs);
	cout<<endl<<"Course Deleted";
}
void addstudentf(student stns){
	char crs[15];
	cout<<endl<<"In which course you want to add the student (Dont forget to put file extension '.txt' ) ?\n>>";
	cin.clear();cin.sync();
	cin.getline(crs,15);
	ofstream opennadd;
	opennadd.open(crs,ios :: app);
	cout<<"\n:: User Data ::";
		cin.clear();cin.sync();
		cout<<"\n>Enter Students Name>";
		cin.getline(stns.sname,20);
		opennadd<<stns.sname<<endl;
		cin.clear();cin.sync();
		cout<<"\n>Enter Address>";
		cin.getline(stns.faddress,60);
		opennadd<<stns.faddress<<endl;
		cout<<"\n>Enter Phone>";
		cin>>stns.sphone;
		opennadd<<stns.sphone<<endl;
		cout<<"\n>Enter Students Gmail>";
		cin>>stns.smail;
		opennadd<<stns.smail<<endl;
		opennadd<<endl<<endl;
		cout<<"\nStudent Added Successfully";
		opennadd.close();
}
void findstudentf(){
	ifstream read;
	char fname[15];
	cout<<"Enter name of Course in which you want to find (Dont forget to put file extension '.txt' )\n>>";
	cin.clear();
	cin.sync();
	cin.getline(fname,15);
	read.open(fname);
	if(read.is_open()){
		cout<<"\nFound Course";
		char linez[1000];
	string x;
	string find;
	cout<<"\nEnter name of student you want to find:\n>>";
	cin>>find;
	int i=0;
	bool found=false;
	while(!read.eof()){
		read.getline(linez,1000);
		x=linez;
		if(x==find){
			found=true;
			cout<<"\nName:"<<linez<<endl;
			int count=4;
			while(!read.eof()){
				read.getline(linez,1000);
				if(count==4)
				    cout<<"\nAddress: ";
				else if(count==3)
					cout<<"\nPhone: ";
				else if(count==2)
					cout<<"\nGmail: ";
				cout<<linez<<endl;
			    count-=1;
			    if(count==1){
			    	break;
				}
			}
		}
		else{
			found=false;
		}
	}
	if(found==false){
		cout<<"\nCouldnt find Student";
	}
	read.close();
	}
	else{
		cout<<"\nCouldnt find Course Named "<<fname;
	}
	system("pause");
}
void removestudentf(){
	ifstream reader;
	char file1[15];
	cin.clear();cin.sync();
	cin.getline(file1,15);
	reader.open(file1);
	if(reader.is_open()){
		string hml;
	char stringer[1000];
	int i=0;
	string del;
	cout<<"\n>>";cin>>del;
	ofstream rf("temperXtt.txt");
	bool startdel=false;
	int delcounter=6;
	while(!reader.eof()){
		reader.getline(stringer,1000);
		if(stringer==del){
			startdel=true;
		}
		if(startdel==true && delcounter>=1){
			delcounter--;
			continue;
		}
		hml=stringer;
		rf<<hml<<endl;
		i+=1;
		if(startdel==true){
			cout<<"\nRemoved Successfully";
		}
	}
	reader.close();
	remove(file1);
	rf.close();
	rename("temperXtt.txt",file1);
	}
	else{
		"\nCourse Doesn't Exist";
	}
}
