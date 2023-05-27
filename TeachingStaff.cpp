//This file defines the methods TeachingStaff.h
#include "TeachingStaff.h"
#include "Staff.h"
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include <iomanip>
#include<fstream>
#include<stdlib.h>
using namespace std;

void TeachingStaff::setStaffDetails(){
	/*This method will input the details of attributes of Staff class and data will be stored in file using
	file handling system. and will be used to store data of Teaching Staff*/
			system("CLS");
			cout<<"**************************************HERE YOU INSERT NEW STAFF DETAILS************************************"<<endl<<endl;
	    	cout<<"\tEnter Staff ID: "<<endl;
	        cin>>StaffId;
	    	cout<<"\tEnter Staff Name: "<<endl;
	    	cin>>StaffName;
	    	cout<<"\tEnter Department ID:"<<endl;
	    	cin>>DepartmentId;
	    	cout<<"\tEnter Salary:"<<endl;
	    	cin>>Salary;
	    	
	    	cout<<"\n\tNew Staff Details Inserted "<<endl;
	    	
	    		ofstream file;
	    		file.open("TeachingStaff.txt",ios::app);
	    		
	    		file<<StaffId<<"  \t	  "<<StaffName<<"  	\t  "<<DepartmentId<<" \t   "<<Salary<<endl;
	    		file.close();
		}
		void TeachingStaff::getStaffDetails(){
			
			system("CLS");
			cout<<"************************************************TEACHING STAFF Details*******************************************"<<endl<<endl;
			char display[1000];
			ifstream output;
			output.open("TeachingStaff.txt");
			while(!output.eof()){
				output.getline(display,1000);
				
			
				cout<<display<<endl;
			}
		}
