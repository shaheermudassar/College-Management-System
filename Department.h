//This is the header file for Department class.
#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include<string>
using namespace std;
class Department
{
	private:
		//These are the attributes we will use in DEpartment class
		string DepartmentID;
		string DepartmentName;
		string HODname;
		string totalStaff;
    	string totalStudents;
	public:
		//these are the methods we will use.
		void putDepartmentDetails();
		void getDepartmentDetails();
	protected:
};

#endif
