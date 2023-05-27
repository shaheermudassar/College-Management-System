//This file defines the methods of canteen.h
#include "Canteen.h"
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<fstream>
#include <iomanip>
#include<stdlib.h>
using namespace std;
void Canteen::setCanteenDetails(){
	/* This method will take input for the attributes and store them in file using file handling system*/
			system("CLS");
			cout<<"**************************************HERE YOU INSERT NEW ITEM DETAILS************************************"<<endl<<endl;
	    	cout<<"\tEnter Item Name: "<<endl;
	        cin>>ItemName;
	    	cout<<"\tEnter Price: "<<endl;
	    	cin>>Price;
	    	cout<<"\tIs it Available:"<<endl;
	    	cin>>Availability;
	    	
	    	cout<<"\n\tNew Item Details Inserted "<<endl;
	    	
	    		ofstream file;
	    		file.open("Canteen.txt",ios::app);
	    		
	    		file<<ItemName<<"  \t\t"<<Price<<"  \t\t"<<Availability<<endl;
	    		file.close();
		}
void Canteen::getCanteenDetails(){
	//This method will display data from file.
			system("CLS");
			cout<<"************************************************ITEM LIST*******************************************"<<endl<<endl;
			char display[1000];
			ifstream output;
			output.open("Canteen.txt");
			while(!output.eof()){
				output.getline(display,1000);
				
			
				cout<<display<<endl;
			}
		}
