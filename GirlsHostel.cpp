//This file defines the methods of GirlsHostel.h
#include "GirlsHostel.h"
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<fstream>
#include <iomanip>
#include<stdlib.h>
using namespace std;
void GirlsHostel::HostelDetails(){
	//This Method will show Girls Hostel Details.
			system("CLS");
			BlockNumber="49B-F,Muslim-Town,Lahore";
			TotalRooms=19;
			TotalStudents=81;
			cout<<"********************************************GIRLS HOSTEL DETAILS****************************************"<<endl<<endl;
			cout<<"\tAddress: "<<BlockNumber<<endl;
			cout<<"\tTotal Rooms: "<<TotalRooms<<endl;
			cout<<"\tTotal Students: "<<TotalStudents<<endl;
		}
void GirlsHostel::setCheckIn(){
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
	    		file.open("GirlsCheckin.txt",ios::app);
	    		
	    		file<<StudentId<<"  \t	  "<<StudentName<<"  \t  "<<RoomNumber<<" \t   "<<time<<endl;
	    		file.close();
		}
void GirlsHostel::getCheckIn(){
	//This method will get the data of who checked in from file.
			system("CLS");
			cout<<"************************************************CHECK IN DETAILS*******************************************"<<endl<<endl;
			char display[1000];
			ifstream output;
			output.open("GirlsCheckin.txt");
			while(!output.eof()){
				output.getline(display,1000);
				
			
				cout<<display<<endl;
			}
		}
void GirlsHostel::setCheckOut(){
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
	    	
	    	cout<<"\n\tCheck out Details Updated "<<endl;
	    	
	    		ofstream file;
	    		file.open("GirlsCheckout.txt",ios::app);
	    		
	    		file<<StudentId<<"  \t	  "<<StudentName<<"  \t  "<<RoomNumber<<" \t   "<<time<<endl;
	    		file.close();
		}
void GirlsHostel::getCheckOut(){
	//This method will get the data of who checked out from file.
			system("CLS");
			cout<<"************************************************CHECK OUT DETAILS*******************************************"<<endl<<endl;
			char display[1000];
			ifstream output;
			output.open("GirlsCheckout.txt");
			while(!output.eof()){
				output.getline(display,1000);
				
			
				cout<<display<<endl;
			}
		}
