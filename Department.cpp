//This file defines the methods of Department.h
#include "Department.h"
#include<iostream>
#include<conio.h>
#include<string.h>
#include <iomanip>
#include<stdio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;

void Department::putDepartmentDetails()
/* This method will take input for the attributes and store them in file using file handling system*/
{
	system("CLS");
			cout<<"**************************************HERE YOU INSERT NEW DEPARTMENT DETAILS************************************"<<endl<<endl;
	    	cout<<"\tEnter Department ID: "<<endl;
	        cin>>DepartmentID;
	    	cout<<"\tEnter Department Name: "<<endl;
	    	cin>>DepartmentName;
	    	cout<<"\tEnter HOD Name:"<<endl;
	    	cin>>HODname;
	    	cout<<"\tEnter number of total Staff in Department:"<<endl;
	    	cin>>totalStaff;
	    	cout<<"\tEnter number of total Students in Department:"<<endl;
	    	cin>>totalStudents;
	    	
	    	cout<<"\n\tNew Department Details Inserted "<<endl;
	    	
	    		ofstream file;
	    		file.open("DepartmentData.txt",ios::app);
	    		file << setw(10) << left << DepartmentID << "  \t" 
		 << setw(20) << left << DepartmentName << "  \t" 
		 << setw(15) << left << HODname << " \t" 
		 << setw(5) << left << totalStaff << " \t" 
		 << setw(20) << left << totalStudents << endl;
	    		file.close();
}
void Department::getDepartmentDetails()
//This method will display data from file.
{
	system("CLS");
			cout<<"************************************************Departments Details*******************************************"<<endl<<endl;
			char display[1000];
			ifstream output;
			output.open("DepartmentData.txt");
			while(!output.eof()){
				output.getline(display,1000);
				
			
				cout<<display<<endl;
			}
}
