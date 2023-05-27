//This is the header file for MorningStudent class
//It is inherited from Student class.
#ifndef MORNINGSTUDENT_H
#define MORNINGSTUDENT_H
#include<string>
#include "Student.h"
using namespace std;
class MorningStudent : public Student
{
	public:
		//These are the methods we will use.
		void setStudentDetails();
		void getStudentDetails();
	protected:
};

#endif
