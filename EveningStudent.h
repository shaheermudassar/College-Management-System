//This is the header file for EveningStudent class
//It is inherited from Student class.
#ifndef EVENINGSTUDENT_H
#define EVENINGSTUDENT_H
#include<string>
#include "Student.h"
using namespace std;
class EveningStudent : public Student
//it is publically inherited.
{
	public:
		//these are the methods that we will use.
		void setStudentDetails();
		void getStudentDetails();
	protected:
};

#endif

