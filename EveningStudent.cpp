//This file defines the methods of EveningStudent.h
#include "EveningStudent.h"
#include "Student.h"
#include<iostream>
#include<conio.h>
#include <iomanip>
#include<string.h>
#include<stdio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
void EveningStudent::setStudentDetails()
/*This method will input the details of attributes of Student class and data will be stored in file using
	file handling system. and will be used to store data of Evening students*/
{
	system("CLS");
			cout<<"**************************************HERE YOU INSERT NEW STUDENT RECORDS************************************"<<endl<<endl;
	    	cout<<"\tEnter Student ID: "<<endl;
	        cin>>StudentID;
	    	cout<<"\tEnter Student Name: "<<endl;
	    	cin>>StudentName;
	    	cout<<"\tEnter Gender:"<<endl;
	    	cin>>Gender;
	    	cout<<"\tEnter Year(1st year or 2nd year):"<<endl;
	    	cin>>Year;
	    	cout<<"\tEnter Class ID:"<<endl;
	    	cin>>ClassId;
	    	cout<<"\tEnter Fee status:"<<endl;
	    	cin>>fee;
	    	cout<<"\tEnter Attendance Percentage:"<<endl;
	    	cin>>AttendencePer;
	    	
	    	cout<<"\n\tNew Student Details Inserted "<<endl;
	    	
	    		ofstream file;
	    		file.open("EveningStudentData.txt",ios::app);
	    		
	    		file << setw(5) << left << StudentID << "  \t" 
		 << setw(20) << left << StudentName << "  \t" 
		 << setw(8) << left << Gender << " \t" 
		 << setw(10) << left << Year << " \t" 
		 << setw(15) << left << ClassId << " \t"
		 << setw(12) << left << fee << " \t"
		 << setw(5) << left << AttendencePer << endl;
	    		file.close();
}
void EveningStudent::getStudentDetails()

{
	system("CLS");
			cout<<"************************************************EVENING Student Details*******************************************"<<endl<<endl;
			char display[1000];
			ifstream output;
			output.open("EveningStudentData.txt");
			while(!output.eof()){
				output.getline(display,1000);
				
			
				cout<<display<<endl;
			}
}

