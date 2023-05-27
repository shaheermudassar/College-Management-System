//This file defines the methods of BoysHostel.h
#include "BoysHostel.h"
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<fstream>
#include <iomanip>
#include<stdlib.h>
using namespace std;
void BoysHostel::HostelDetails(){
	//This Method will show Boys Hostel Details.
	system("CLS");//used to get result in new screen.
	BlockNumber="49A-F,Muslim-Town,Lahore";
	TotalRooms=23;
	TotalStudents=112;
	cout<<"********************************************BOYS HOSTEL DETAILS****************************************"<<endl<<endl;
	cout<<"\tAddress: "<<BlockNumber<<endl;
	cout<<"\tTotal Rooms: "<<TotalRooms<<endl;
	cout<<"\tTotal Students: "<<TotalStudents<<endl;
	}
void BoysHostel::setCheckIn(){
	/*This method will input the details of attributes of Hostel class and data will be stored in file using
	file handling system. and will be used to store data who checked in today*/
	system("CLS");
	cout<<"**************************************HERE YOU INSERT WHO CHECKED IN************************************"<<endl<<endl;
	cout<<"\tEnter Student ID: "<<endl;
	cin>>StudentId;
	cout<<"\tEnter Student Name: "<<endl;
	cin>>StudentName;
	cout<<"\tEnter Room Number:"<<endl;
	cin>>RoomNumber;
	cout<<"\tEnter The Time Of Check in:"<<endl;
	cin>>time;	    	
	cout<<"\n\tCheckin Details Updated "<<endl;
	    	
	    ofstream file;
	    file.open("BoysCheckin.txt",ios::app);
	    		
	    file<<StudentId<<"  \t	  "<<StudentName<<"  \t  "<<RoomNumber<<" \t   "<<time<<endl;
	    file.close();
	}
void BoysHostel::getCheckIn(){
	//This method will get the data of who checked in from file.
	system("CLS");
	cout<<"************************************************CHECK IN DETAILS*******************************************"<<endl<<endl;
	char display[1000];
	ifstream output;
	output.open("BoysCheckin.txt");
		while(!output.eof()){
			output.getline(display,1000);	
			cout<<display<<endl;
		}
	}
void BoysHostel::setCheckOut(){
	/*This method will input the details of attributes of Hostel class and data will be stored in file using
	file handling system. and will be used to store data who checked out today*/
			system("CLS");
			cout<<"**************************************HERE YOU INSERT WHO CHECKED OUT************************************"<<endl<<endl;
	    	cout<<"\tEnter Student ID: "<<endl;
	        cin>>StudentId;
	    	cout<<"\tEnter Student Name: "<<endl;
	    	cin>>StudentName;
	    	cout<<"\tEnter Room Number:"<<endl;
	    	cin>>RoomNumber;
	    	cout<<"\tEnter The Time Of Check out:"<<endl;
	    	cin>>time;
	    	
	    	cout<<"\n\tCheck Out Details Updated "<<endl;
	    	
	    		ofstream file;
	    		file.open("BoysCheckout.txt",ios::app);
	    		
	    		file<<StudentId<<"  \t	  "<<StudentName<<"  \t  "<<RoomNumber<<" \t   "<<time<<endl;
	    		file.close();
		}
void BoysHostel::getCheckOut(){
	//This method will get the data of who checked out from file.
			system("CLS");
			cout<<"************************************************CHECK OUT DETAILS*******************************************"<<endl<<endl;
			char display[1000];
			ifstream output;
			output.open("BoysCheckout.txt");
			while(!output.eof()){
				output.getline(display,1000);
				
			
				cout<<display<<endl;
			}
		}
