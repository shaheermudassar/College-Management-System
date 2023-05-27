//This file defines the methods of ClassRoom.h
#include "ClassRoom.h"
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<fstream>
#include<stdlib.h>
#include <iomanip>
using namespace std;
void ClassRoom::setClassRoomDetails(){
	/* This method will take input for the attributes and store them in file using file handling system*/
			system("CLS");
			cout<<"**************************************HERE YOU INSERT NEW CLASSROOM DETAILS************************************"<<endl<<endl;
	    	cout<<"\tEnter Class ID: "<<endl;
	        cin>>ClassId;
	    	cout<<"\tEnter Section Name: "<<endl;
	    	cin>>Section;
	    	cout<<"\tEnter Department ID:"<<endl;
	    	cin>>DepartmentId;
	    	
	    	cout<<"\n\tNew Class Details Inserted "<<endl;
	    	
	    		ofstream file;
	    		file.open("Classroom.txt",ios::app);
	    		
	    		file<<ClassId<<"  \t	  "<<Section<<"  	\t  "<<DepartmentId<<endl;
	    		file.close();
		}
void ClassRoom::getClassRoomDetails(){
	//This method will display data from file.
			system("CLS");
			cout<<"************************************************CLASSROOMS Details*******************************************"<<endl<<endl;
			char display[1000];
			ifstream output;
			output.open("Classroom.txt");
			while(!output.eof()){
				output.getline(display,1000);
				
			
				cout<<display<<endl;
			}
		}
