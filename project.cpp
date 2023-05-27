#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
class College{
	string CollegeName;
	string City;
	string ContactNumber;
	public:
		void open(){
			system("CLS");
			cout<<"\t\t***************************College Timings***************************"<<endl;
			cout<<"\n";
			cout<<"\tDays:                  Morning               Evening"<<endl;
			cout<<"\tMonday to thursday     8 AM to 1 PM          2 PM to 7 PM"<<endl;
			cout<<"\tFriday                 8 AM to 12 PM         3 PM to 7 PM"<<endl;
			cout<<"\tSaturday/Sunday        OFF                   OFF"<<endl;
		}
		void CollegeDetails(){
			system("CLS");
			CollegeName="Punjab Group of Colleges";
			City= "Lahore";
			ContactNumber="(042)35312345";
			cout<<"\t\t***************************College Details***************************"<<endl<<endl;
			cout<<"\tCollege Name : "<<CollegeName<<endl;
			cout<<"\tCollege Location : "<<City<<endl;
			cout<<"\tContact Number : "<<ContactNumber<<endl;
		}
	
};
class Department{
	string DepartmentID;
	string DepartmentName;
	string HODname;
	string totalStaff;
    string totalStudents;
	public:
		void putDepartmentDetails(){
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
	    		
	    		file<<DepartmentID<<"  \t	  "<<DepartmentName<<"  \t  "<<HODname<<" \t   "<<totalStaff<<" \t   "<<totalStudents<<endl;
	    		file.close();
		}
		void getDepartmentDetails(){
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
    
};
class Student{
	protected:
	int StudentID;
	string StudentName;
	string Gender;
	string Year;
	int ClassId;
	string fee;
	float AttendencePer;
};
class MorningStudents: public Student{
    public:
    	void setStudentDetails(){
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
	    		file.open("MorningStudentData.txt",ios::app);
	    		
	    		file<<StudentID<<" \t"<<StudentName<<" \t  "<<Gender<<" \t "<<Year<<" \t "<<ClassId<<" \t "<<fee<<" \t "<<AttendencePer<<endl;
	    		file.close();
		}
		void getStudentDetails(){
			system("CLS");
			cout<<"************************************************Morning Student Details*******************************************"<<endl<<endl;
			char display[1000];
			ifstream output;
			output.open("MorningStudentData.txt");
			while(!output.eof()){
				output.getline(display,1000);
				
			
				cout<<display<<endl;
			}
		}
    
};
class EveningStudents: public Student{
    public:
    	void setStudentDetails(){
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
	    		
	    		file<<StudentID<<" \t"<<StudentName<<" \t  "<<Gender<<" \t "<<Year<<" \t "<<ClassId<<" \t "<<fee<<" \t "<<AttendencePer<<endl;
	    		file.close();
		}
		void getStudentDetails(){
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
};
class Staff{
	protected:
	int StaffId;
	string StaffName;
	int DepartmentId;
	long int Salary;
    
};
class TeachingStaff: public Staff{
	public:
		void setStaffDetails(){
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
		void getStaffDetails(){
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
};
class NonTeachingStaff: public Staff{
    public:
		void setStaffDetails(){
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
	    		file.open("NonTeachingStaff.txt",ios::app);
	    		
	    		file<<StaffId<<"  \t	  "<<StaffName<<"  	\t  "<<DepartmentId<<" \t   "<<Salary<<endl;
	    		file.close();
		}
		void getStaffDetails(){
			system("CLS");
			cout<<"************************************************NON TEACHING STAFF DETAILS*******************************************"<<endl<<endl;
			char display[1000];
			ifstream output;
			output.open("NonTeachingStaff.txt");
			while(!output.eof()){
				output.getline(display,1000);
				
			
				cout<<display<<endl;
			}
		}
};
class ClassRoom{
	int ClassId;
	string Section;
	int DepartmentId;
    public:
    	void setClassRoomDetails(){
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
		void getClassRoomDetails(){
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
};
class Canteen{
    string InchargeName;
	string ItemName;
	string Availability;
	float Price;
	public:
		void setCanteenDetails(){
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
	    		
	    		file<<ItemName<<"  \t	  "<<Price<<"  	\t  "<<Availability<<endl;
	    		file.close();
		}
		void getCanteenDetails(){
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
};
class Bus{
     int BusId;
	 string BusNumber;
	 string DriverName;
	 int TotalSeats;
	 string route;
	 public:
	 	void setBusDetails(){
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
		void getBusDetails(){
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
	 	
};
class Hostel{
	protected:
	int StudentId;
	string StudentName;
	string BlockNumber;
	int RoomNumber;
	int TotalRooms;
	int TotalStudents;
	string time;
};
class BoysHostel: public Hostel{
	public:
		void HostelDetails(){
			system("CLS");
			BlockNumber="49A-F,Muslim-Town,Lahore";
			TotalRooms=23;
			TotalStudents=112;
			cout<<"********************************************BOYS HOSTEL DETAILS****************************************"<<endl<<endl;
			cout<<"\tAddress: "<<BlockNumber<<endl;
			cout<<"\tTotal Rooms: "<<TotalRooms<<endl;
			cout<<"\tTotal Students: "<<TotalStudents<<endl;
		}
		void setCheckIn(){
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
		void getCheckIn(){
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
		void setCheckOut(){
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
		void getCheckOut(){
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
};
class GirlsHostel: public Hostel{
	public:
		void HostelDetails(){
			system("CLS");
			BlockNumber="49B-F,Muslim-Town,Lahore";
			TotalRooms=19;
			TotalStudents=81;
			cout<<"********************************************GIRLS HOSTEL DETAILS****************************************"<<endl<<endl;
			cout<<"\tAddress: "<<BlockNumber<<endl;
			cout<<"\tTotal Rooms: "<<TotalRooms<<endl;
			cout<<"\tTotal Students: "<<TotalStudents<<endl;
		}
		void setCheckIn(){
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
		void getCheckIn(){
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
		void setCheckOut(){
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
		void getCheckOut(){
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
};
int main()
{

    College C;
    Department D;
    MorningStudents M;
    EveningStudents E;
    TeachingStaff T;
	NonTeachingStaff N;
	ClassRoom C1;
	Canteen C2;
	Bus B;
    BoysHostel BH;
	GirlsHostel GH;
		system("color F0");
    m1:
    system("CLS");	
    cout<<"******************************************COllege Management System*******************************************"<<endl<<endl;
    cout<<"SELECT AN OPTION"<<endl<<endl;
    cout<<"\t1.COLLEGE"<<endl;
    cout<<"\t2.DEPARTMENT"<<endl;
    cout<<"\t3.STUDENT"<<endl;
    cout<<"\t4.STAFF"<<endl;
    cout<<"\t5.CLASS ROOMS"<<endl;
    cout<<"\t6.CANTEEN"<<endl;
    cout<<"\t7.BUS"<<endl;
    cout<<"\t8.HOSTEL"<<endl;
    int x;
    cout<<"\nEnter the Number of the option to SELECT "<<endl;
    cin>>x;
    if(x==1)
    {
    	m2:
    	system("CLS");
    	cout<<"************************************************COLLEGE****************************************************"<<endl<<endl;
    	int a;
    	cout<<"SELECT AN OPTION"<<endl<<endl;
    	cout<<"\t1.College timings"<<endl;
    	cout<<"\t2.College details"<<endl;
    	cout<<"\n\nPRESS 3 TO GO BACK"<<endl;
    	cin>>a;
    	switch(a){	
    		case 1:
    		C.open();
    		int b;
    		cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>b;
    		if(b==1){
    			goto m2;
			}
			break;
			case 2:
			C.CollegeDetails();
			int c;
			cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>c;
    		if(c==1){
    			goto m2;		
			}
			break;	
			case 3:
    		goto m1;
		break;
	}
	
}
else if(x==2){
	m3:
    	system("CLS");
    	cout<<"************************************************DEPARTMENT****************************************************"<<endl<<endl;
    	int d;
    	cout<<"SELECT AN OPTION"<<endl<<endl;
    	cout<<"\t1.See Departments Details"<<endl;
    	cout<<"\t2.Add a Department Details"<<endl;
    	cout<<"\n\nPRESS 3 TO GO BACK"<<endl;
    	cin>>d;
    	switch(d){	
    		case 1:
    		D.getDepartmentDetails();
    		int e;
    		cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>e;
    		if(e==1){
    			goto m3;
			}
			break;
			case 2:
			D.putDepartmentDetails();
			int f;
			cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>f;
    		if(f==1){
    			goto m3;		
			}
			break;	
			case 3:
    		goto m1;
		break;
	}
}
else if(x==3){
	m4:
    	system("CLS");
    	cout<<"************************************************STUDENT****************************************************"<<endl<<endl;
    	int g;
    	cout<<"SELECT AN OPTION"<<endl<<endl;
    	cout<<"\t1.Morning Students"<<endl;
    	cout<<"\t2.Evening Students"<<endl;
    	cout<<"\n\nPRESS 3 TO GO BACK"<<endl;
    	cin>>g;
    	if(g==1){
		
    			m5:
    			system("CLS");
    	cout<<"************************************************MORNING STUDENTS****************************************************"<<endl<<endl;
    	int a1;
    	cout<<"SELECT AN OPTION"<<endl<<endl;
    	cout<<"\t1.See Students Records"<<endl;
    	cout<<"\t2.Add a Student Records"<<endl;
    	cout<<"\n\nPRESS 3 TO GO BACK"<<endl;
    	cin>>a1;
    	switch(a1){	
    		case 1:
    		M.getStudentDetails();
    		int a2;
    		cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>a2;
    		if(a2==1){
    			goto m5;
			}
			break;
			case 2:
			M.setStudentDetails();
			int a3;
			cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>a3;
    		if(a3==1){
    			goto m5;		
			}
			break;	
			case 3:
    		goto m4;
			break;
		}
	}
	else if(g==2){
		m6:
    			system("CLS");
    	cout<<"************************************************EVENING STUDENTS****************************************************"<<endl<<endl;
    	int a11;
    	cout<<"SELECT AN OPTION"<<endl<<endl;
    	cout<<"\t1.See Students Records"<<endl;
    	cout<<"\t2.Add a Student Records"<<endl;
    	cout<<"\n\nPRESS 3 TO GO BACK"<<endl;
    	cin>>a11;
    	switch(a11){	
    		case 1:
    		E.getStudentDetails();
    		int a21;
    		cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>a21;
    		if(a21==1){
    			goto m6;
			}
			break;
			case 2:
			E.setStudentDetails();
			int a31;
			cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>a31;
    		if(a31==1){
    			goto m6;		
			}
			break;	
			case 3:
    		goto m4;
			break;
		}
	}
    else if(g==3){
    	goto m1;
	}			
    		
	}
else if(x==4){
	m41:
    	system("CLS");
    	cout<<"************************************************STAFF****************************************************"<<endl<<endl;
    	int b11;
    	cout<<"SELECT AN OPTION"<<endl<<endl;
    	cout<<"\t1.Teaching Staff"<<endl;
    	cout<<"\t2.Non Teaching Staff"<<endl;
    	cout<<"\n\nPRESS 3 TO GO BACK"<<endl;
    	cin>>b11;
    	if(b11==1){
		
    			m51:
    			system("CLS");
    	cout<<"************************************************TEACHING STAFF****************************************************"<<endl<<endl;
    	int b12;
    	cout<<"SELECT AN OPTION"<<endl<<endl;
    	cout<<"\t1.See Staff Records"<<endl;
    	cout<<"\t2.Add a Staff Records"<<endl;
    	cout<<"\n\nPRESS 3 TO GO BACK"<<endl;
    	cin>>b12;
    	switch(b12){	
    		case 1:
    		T.getStaffDetails();
    		int a2a;
    		cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>a2a;
    		if(a2a==1){
    			goto m51;
			}
			break;
			case 2:
			T.setStaffDetails();
			int a3a;
			cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>a3a;
    		if(a3a==1){
    			goto m51;		
			}
			break;	
			case 3:
    		goto m41;
			break;
		}
	}
	else if(b11==2){
		m61:
    			system("CLS");
    	cout<<"************************************************NON TEACHING STAFF****************************************************"<<endl<<endl;
    	int a11a;
    	cout<<"SELECT AN OPTION"<<endl<<endl;
    	cout<<"\t1.See Staff Records"<<endl;
    	cout<<"\t2.Add a Staff Records"<<endl;
    	cout<<"\n\nPRESS 3 TO GO BACK"<<endl;
    	cin>>a11a;
    	switch(a11a){	
    		case 1:
    		N.getStaffDetails();
    		int a21a;
    		cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>a21a;
    		if(a21a==1){
    			goto m61;
			}
			break;
			case 2:
			N.setStaffDetails();
			int a31a;
			cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>a31a;
    		if(a31a==1){
    			goto m61;		
			}
			break;	
			case 3:
    		goto m41;
			break;
		}
	}
    else if(b11==3){
    	goto m1;
	}			
    		
	}
else if(x==5)
    {
    	m2a:
    	system("CLS");
    	cout<<"************************************************CLASS ROOMS****************************************************"<<endl<<endl;
    	int aa;
    	cout<<"SELECT AN OPTION"<<endl<<endl;
    	cout<<"\t1.See Class Rooms Details"<<endl;
    	cout<<"\t2.Add Class Room details"<<endl;
    	cout<<"\n\nPRESS 3 TO GO BACK"<<endl;
    	cin>>aa;
    	switch(aa){	
    		case 1:
    		C1.getClassRoomDetails();
    		int ba;
    		cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>ba;
    		if(ba==1){
    			goto m2a;
			}
			break;
			case 2:
			C1.setClassRoomDetails();
			int ca;
			cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>ca;
    		if(ca==1){
    			goto m2a;		
			}
			break;	
			case 3:
    		goto m1;
		break;
	}
	
}
else if(x==6)
    {
    	m2b:
    	system("CLS");
    	cout<<"************************************************CANTEEN****************************************************"<<endl<<endl;
    	int ab;
    	cout<<"Incharge Name :  Ibtesam Qureshi"<<endl<<endl;
    	cout<<"SELECT AN OPTION"<<endl<<endl;
    	cout<<"\t1.See Items List"<<endl;
    	cout<<"\t2.Add New Item details"<<endl;
    	cout<<"\n\nPRESS 3 TO GO BACK"<<endl;
    	cin>>ab;
    	switch(ab){	
    		case 1:
    		C2.getCanteenDetails();
    		int bb;
    		cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>bb;
    		if(bb==1){
    			goto m2b;
			}
			break;
			case 2:
			C2.setCanteenDetails();
			int cb;
			cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>cb;
    		if(cb==1){
    			goto m2b;		
			}
			break;	
			case 3:
    		goto m1;
		break;
	}
	
}
else if(x==7)
    {
    	m2c:
    	system("CLS");
    	cout<<"************************************************BUS****************************************************"<<endl<<endl;
    	int ac;
    	cout<<"SELECT AN OPTION"<<endl<<endl;
    	cout<<"\t1.See BUS Details"<<endl;
    	cout<<"\t2.Add New BUS details"<<endl;
    	cout<<"\n\nPRESS 3 TO GO BACK"<<endl;
    	cin>>ac;
    	switch(ac){	
    		case 1:
    		B.getBusDetails();
    		int bc;
    		cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>bc;
    		if(bc==1){
    			goto m2c;
			}
			break;
			case 2:
			B.setBusDetails();
			int cc;
			cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>cc;
    		if(cc==1){
    			goto m2c;		
			}
			break;	
			case 3:
    		goto m1;
		break;
	}
	
}
else if(x==8){
	m111:
    			system("CLS");
    	cout<<"************************************************HOSTEL****************************************************"<<endl<<endl;
    	int var1;
    	cout<<"SELECT AN OPTION"<<endl<<endl;
    	cout<<"\t1.Boys Hostel"<<endl;
    	cout<<"\t2.Girls Hostel"<<endl;
    	cout<<"\n\nPRESS 3 TO GO BACK"<<endl;
    	cin>>var1;
    	if(var1==1){
    		m112:
    		system("CLS");
    		cout<<"*****************************************BOYS HOSTEL************************************************"<<endl<<endl;
    		int var2;
    		cout<<"SELECT AN OPTION"<<endl<<endl;
    		cout<<"\t1.See Hostel Details"<<endl;
    		cout<<"\t2.See Check in Details"<<endl;
    		cout<<"\t3.See Check out Details"<<endl;
    		cout<<"\n\nPRESS 4 TO GO BACK"<<endl;
    		cin>>var2;
    		if(var2==1){
    			BH.HostelDetails();
    			int var3;
    			cout<<"PRESS 1 TO GO BACK"<<endl;
    			cin>>var3;
    			if(var3==1){
    				goto m112;
				}
			}
			else if(var2==2){
				m113:
				system("CLS");
				cout<<"****************************************CHECK IN DETAILS**********************************************"<<endl<<endl;
				int var4;
    			cout<<"SELECT AN OPTION"<<endl<<endl;
    			cout<<"\t1.See Who Checked in Today"<<endl;
    			cout<<"\t2.Add Check in Details"<<endl;
    			cout<<"\n\nPRESS 3 TO GO BACK"<<endl;
    			cin>>var4;	
    			switch(var4){	
    			case 1:
    			BH.getCheckIn();
    			int var5;
    			cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    			cin>>var5;
    			if(var5==1){
    				goto m113;
				}
				break;
				case 2:
				BH.setCheckIn();
				int var6;
				cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    			cin>>var6;
    			if(var6==1){
    				goto m113;		
				}
				break;	
				case 3:
    			goto m112;
				break;
			}
			}
			else if(var2==3){
				m113a:
				system("CLS");
				cout<<"****************************************CHECK OUT DETAILS**********************************************"<<endl<<endl;
				int var4a;
    			cout<<"SELECT AN OPTION"<<endl<<endl;
    			cout<<"\t1.See Who Checked out Today"<<endl;
    			cout<<"\t2.Add Check out Details"<<endl;
    			cout<<"\n\nPRESS 3 TO GO BACK"<<endl;
    			cin>>var4a;	
    			switch(var4a){	
    			case 1:
    			BH.getCheckOut();
    			int var5a;
    			cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    			cin>>var5a;
    			if(var5a==1){
    				goto m113a;
				}
				break;
				case 2:
				BH.setCheckOut();
				int var6a;
				cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    			cin>>var6a;
    			if(var6a==1){
    				goto m113a;		
				}
				break;	
				case 3:
    			goto m112;
				break;
			}
			}
			else if(var2==4){
				goto m111;
			}	
			
		}
		else if(var1==2){
			m112b:
    		system("CLS");
    		cout<<"*****************************************GIRLS HOSTEL************************************************"<<endl<<endl;
    		int var2b;
    		cout<<"SELECT AN OPTION"<<endl<<endl;
    		cout<<"\t1.See Hostel Details"<<endl;
    		cout<<"\t2.See Check in Details"<<endl;
    		cout<<"\t3.See Check out Details"<<endl;
    		cout<<"\n\nPRESS 4 TO GO BACK"<<endl;
    		cin>>var2b;
    		if(var2b==1){
    			GH.HostelDetails();
    			int var3b;
    			cout<<"PRESS 1 TO GO BACK"<<endl;
    			cin>>var3b;
    			if(var3b==1){
    				goto m112b;
				}
			}
			else if(var2b==2){
				m113b:
				system("CLS");
				cout<<"****************************************CHECK IN DETAILS**********************************************"<<endl<<endl;
				int var4b;
    			cout<<"SELECT AN OPTION"<<endl<<endl;
    			cout<<"\t1.See Who Checked in Today"<<endl;
    			cout<<"\t2.Add Check in Details"<<endl;
    			cout<<"\n\nPRESS 3 TO GO BACK"<<endl;
    			cin>>var4b;	
    			switch(var4b){	
    			case 1:
    			GH.getCheckIn();
    			int var5b;
    			cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    			cin>>var5b;
    			if(var5b==1){
    				goto m113b;
				}
				break;
				case 2:
				GH.setCheckIn();
				int var6b;
				cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    			cin>>var6b;
    			if(var6b==1){
    				goto m113b;		
				}
				break;	
				case 3:
    			goto m112b;
				break;
			}
			}
			else if(var2b==3){
				m113ab:
				system("CLS");
				cout<<"****************************************CHECK OUT DETAILS**********************************************"<<endl<<endl;
				int var4ab;
    			cout<<"SELECT AN OPTION"<<endl<<endl;
    			cout<<"\t1.See Who Checked out Today"<<endl;
    			cout<<"\t2.Add Check out Details"<<endl;
    			cout<<"\n\nPRESS 3 TO GO BACK"<<endl;
    			cin>>var4ab;	
    			switch(var4ab){	
    			case 1:
    			GH.getCheckOut();
    			int var5ab;
    			cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    			cin>>var5ab;
    			if(var5ab==1){
    				goto m113ab;
				}
				break;
				case 2:
				GH.setCheckOut();
				int var6ab;
				cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    			cin>>var6ab;
    			if(var6ab==1){
    				goto m113ab;		
				}
				break;	
				case 3:
    			goto m112b;
				break;
			}
			}
			else if(var2b==4){
				goto m111;
			}	
			
		}
		else if(var1==3){
			goto m1;
		}
}
    return 0;
}

