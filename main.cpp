/*This is a College Management System in which you can see and add data of College, Departments, Students(Morning and Evening),
Staff(Teaching and Non-Teaching), Class Rooms, College Canteen, Buses and Hostel(Boys Hostel and Girls Hostel)
Submitted by:
			bsf2100980 Shaheer Bin Mudassar
			bsf
			bsf
			bsf
			*/
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<fstream>
#include<stdlib.h>
#include <iomanip>
#include "College.h"
#include "Department.h"
#include "MorningStudent.h"
#include "EveningStudent.h"
#include "TeachingStaff.h"
#include "NonTeachingStaff.h"
#include "ClassRoom.h"
#include "Canteen.h"
#include "Bus.h"
#include "BoysHostel.h"
#include "GirlsHostel.h"
using namespace std;
int main(){
	//This is the main menu starting with declaring of Objects os all class.
	College C;
    Department D;
    MorningStudent M;
    EveningStudent E;
    TeachingStaff T;
	NonTeachingStaff N;
	ClassRoom C1;
	Canteen C2;
	Bus B;
    BoysHostel BH;
	GirlsHostel GH;
		system("color F0");//This is used to change background and text Color(from stdlib.h library)
    m1://label for the main menu of system used for goto statement.
    system("CLS");	
    cout<<"******************************************COllege Management System*******************************************"<<endl<<endl;
    cout<<"SELECT AN OPTION"<<endl<<endl;
    cout<<"\t1.COLLEGE                                           \t5.CLASS ROOM"<<endl<<endl;
    cout<<"\t2.DEPARTMENT                                        \t6.CANTEEN"<<endl<<endl;
    cout<<"\t3.STUDENT                                           \t7.BUS"<<endl<<endl;
    cout<<"\t4.STAFF                                             \t8.HOSTEL"<<endl<<endl;
    int x;
    cout<<"\nEnter the Number of the option to SELECT "<<endl;
    //press the number shown to enter the menu of that option.
    cin>>x;
    if(x==1)
    {
    	m2://label to go back to College Menu.
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
    		C.open();//This will show you College Timings.
    		int b;
    		cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>b;
    		if(b==1){
    			goto m2;//this will get you back to m2.
			}
			break;
			case 2:
			C.CollegeDetails();//This will show you College details.
			int c;
			cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>c;
    		if(c==1){
    			goto m2;		
			}
			break;	
			case 3:
    		goto m1;//This will get you back to the Main menu(m1).
		break;
	}
	
}
else if(x==2){
	//This is the menu for Department.
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
    		D.getDepartmentDetails();//This will show you Department Details.
    		int e;
    		cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>e;
    		if(e==1){
    			goto m3;
			}
			break;
			case 2:
			D.putDepartmentDetails();//this will give you option to add new Department details. 
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
else if(x==3){//This is The menu for Student Option.
	m4:
    	system("CLS");
    	cout<<"************************************************STUDENT****************************************************"<<endl<<endl;
    	int g;
    	//Since the Student class is subdivided into 2 other class, 2 additional options will be shown for each Morning and Evening Student
    	cout<<"SELECT AN OPTION"<<endl<<endl;
    	cout<<"\t1.Morning Students"<<endl;
    	cout<<"\t2.Evening Students"<<endl;
    	cout<<"\n\nPRESS 3 TO GO BACK"<<endl;
    	cin>>g;
    	if(g==1){
		//This is the menu for Morning Students.
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
    		M.getStudentDetails();//This will show you Morning Student Details.
    		int a2;
    		cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>a2;
    		if(a2==1){
    			goto m5;
			}
			break;
			case 2:
			M.setStudentDetails();//this will give you option to add new Morning Students details.
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
			//This is the menu for Morning Students.
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
    		E.getStudentDetails();//This will show you Morning Student Details.
    		int a21;
    		cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>a21;
    		if(a21==1){
    			goto m6;
			}
			break;
			case 2:
			E.setStudentDetails();//this will give you option to add new Morning Students details.
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
else if(x==4){//This is The menu for Staff option.
	m41:
    	system("CLS");
    	cout<<"************************************************STAFF****************************************************"<<endl<<endl;
    	int b11;
		//same as Student Class it is Also divided into 2 sub options.
    	cout<<"SELECT AN OPTION"<<endl<<endl;
    	cout<<"\t1.Teaching Staff"<<endl;
    	cout<<"\t2.Non Teaching Staff"<<endl;
    	cout<<"\n\nPRESS 3 TO GO BACK"<<endl;
    	cin>>b11;
    	if(b11==1){
		//This is the menu for Teaching Staff.
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
    		T.getStaffDetails();//This will show you Teaching Staff DEtails.
    		int a2a;
    		cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>a2a;
    		if(a2a==1){
    			goto m51;
			}
			break;
			case 2:
			T.setStaffDetails();//This will give you option to add new Teaching Staff Details.
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
			//This is the menu for Non Teaching Staff.
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
    		N.getStaffDetails();//This will show you Non Teaching Staff DEtails.
    		int a21a;
    		cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>a21a;
    		if(a21a==1){
    			goto m61;
			}
			break;
			case 2:
			N.setStaffDetails();//This will give you option to add new Non Teaching Staff Details.
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
    	//This is the menu for Class Rooms option.
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
    		C1.getClassRoomDetails();//This will show you All ClassRooms details
    		int ba;
    		cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>ba;
    		if(ba==1){
    			goto m2a;
			}
			break;
			case 2:
			C1.setClassRoomDetails();//This will give you option to add new class room details.
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
    	//This is the menu for Canteen option.
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
    		C2.getCanteenDetails();//This will show you list of items available in Canteen.
    		int bb;
    		cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>bb;
    		if(bb==1){
    			goto m2b;
			}
			break;
			case 2:
			C2.setCanteenDetails();//This will give you option to add items in canteen.
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
    	//This is the menu for Bus option.
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
    		B.getBusDetails();//This will show you all buses details.
    		int bc;
    		cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    		cin>>bc;
    		if(bc==1){
    			goto m2c;
			}
			break;
			case 2:
			B.setBusDetails();//This will give you option to add new Bus Details.
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
	//This is the menu for Hostel option.
	m111:
    			system("CLS");
    	cout<<"************************************************HOSTEL****************************************************"<<endl<<endl;
    	int var1;
    	//Since Hostel has two further options and same options will be availbe for both(Boys and Girls Hostel)
    	cout<<"SELECT AN OPTION"<<endl<<endl;
    	cout<<"\t1.Boys Hostel"<<endl;
    	cout<<"\t2.Girls Hostel"<<endl;
    	cout<<"\n\nPRESS 3 TO GO BACK"<<endl;
    	cin>>var1;
    	if(var1==1){
    		//This is the menu for Boys hostel.
    		m112:
    		system("CLS");
    		cout<<"*****************************************BOYS HOSTEL************************************************"<<endl<<endl;
    		int var2;
    		//it is further divided into 3 options.
    		cout<<"SELECT AN OPTION"<<endl<<endl;
    		cout<<"\t1.See Hostel Details"<<endl;
    		cout<<"\t2.See Check in Details"<<endl;
    		cout<<"\t3.See Check out Details"<<endl;
    		cout<<"\n\nPRESS 4 TO GO BACK"<<endl;
    		cin>>var2;
    		if(var2==1){
    			BH.HostelDetails();//This will show Boys Hostel details.
    			int var3;
    			cout<<"PRESS 1 TO GO BACK"<<endl;
    			cin>>var3;
    			if(var3==1){
    				goto m112;
				}
			}
			else if(var2==2){
				//This option is further divided into 2 options so new menu for this also.
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
    			BH.getCheckIn();//this will show who checked in today.
    			int var5;
    			cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    			cin>>var5;
    			if(var5==1){
    				goto m113;
				}
				break;
				case 2:
				BH.setCheckIn();//this will add who checked in today.
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
				//This option is further divided into 2 options so new menu.
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
    			BH.getCheckOut();//This will show who checked out today.
    			int var5a;
    			cout<<"\n\nPRESS 1 TO GO BACK"<<endl;
    			cin>>var5a;
    			if(var5a==1){
    				goto m113a;
				}
				break;
				case 2:
				BH.setCheckOut();//This will add who checked out today.
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
			//The same thing has been done in Girls Hostel menu as above in boys Hostel menu.
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
//You can see Each options 3rd option ends with label m1 so it can get back to the main menu.
    return 0;
}

