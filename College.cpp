//This file defines the functions of College.h
#include "College.h"
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<fstream>
#include <iomanip>
#include<stdlib.h>
using namespace std;

void College::open()
{
	//This method will show the timings of the college.
	system("CLS");
			cout<<"\t\t***************************College Timings***************************"<<endl;
			cout<<"\n";
			cout<<"\tDays:                  Morning               Evening"<<endl;
			cout<<"\tMonday to thursday     8 AM to 1 PM          2 PM to 7 PM"<<endl;
			cout<<"\tFriday                 8 AM to 12 PM         3 PM to 7 PM"<<endl;
			cout<<"\tSaturday/Sunday        OFF                   OFF"<<endl;
}
void College::CollegeDetails()
{
	//This method will show all details of college.
	system("CLS");
			string CollegeName="Punjab Group of Colleges";
			string City= "Lahore";
			string ContactNumber="(042)35312345";
			cout<<"\t\t***************************College Details***************************"<<endl<<endl;
			cout<<"\tCollege Name : "<<CollegeName<<endl;
			cout<<"\tCollege Location : "<<City<<endl;
			cout<<"\tContact Number : "<<ContactNumber<<endl;
}
