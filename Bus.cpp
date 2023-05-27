//this file defines the methods of Bus.h
#include "Bus.h"
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<fstream>
#include<stdlib.h>
#include <iomanip>
using namespace std;
void Bus::setBusDetails()
/* This method will take input for the attributes and store them in file using file handling system*/
{
			system("CLS");
			cout<<"**************************************HERE YOU INSERT NEW BUS DETAILS************************************"<<endl<<endl;
	    	cout<<"\tEnter Bus ID: "<<endl;
	        cin>>BusId;
	    	cout<<"\tEnter Bus Number: "<<endl;
	    	cin>>BusNumber;
	    	cout<<"\tEnter Driver Name:"<<endl;
	    	cin>>DriverName;
	    	cout<<"\tEnter number of total Seats in Bus:"<<endl;
	    	cin>>TotalSeats;
	    	cout<<"\tEnter route of the Bus:"<<endl;
	    	cin>>route;
	    	
	    	cout<<"\n\tNew Bus Details Inserted "<<endl;
	    	
	    		ofstream file;
	    		file.open("Bus.txt",ios::app);
	    		
	    		file<<BusId<<"  \t	  "<<BusNumber<<"  \t  "<<DriverName<<" \t   "<<TotalSeats<<" \t   "<<route<<endl;
	    		file.close();
		}
void Bus::getBusDetails()
//This method will display data from file.
{
			system("CLS");
			cout<<"************************************************BUS Details*******************************************"<<endl<<endl;
			char display[1000];
			ifstream output;
			output.open("Bus.txt");
			while(!output.eof()){
				output.getline(display,1000);
				
			
				cout<<display<<endl;
			}
		}
