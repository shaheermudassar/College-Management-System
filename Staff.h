//This is the header file for Staff class
//it is the base class of TeachingStaff class and NonteachingStaff class.
#ifndef STAFF_H
#define STAFF_H
#include<string>
using namespace std;
class Staff
{
	public:
	protected:
		//These are the attributes we will use.
		int StaffId;
	string StaffName;
	int DepartmentId;
	long int Salary;
};

#endif
