//This is the header file for Student class.
//it is the base class of MorningStudents and EveningStudents class.
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;
class Student
{
	public:
	protected:
		//These are the attributes we will use.
		int StudentID;
	string StudentName;
	string Gender;
	string Year;
	int ClassId;
	string fee;
	float AttendencePer;
};

#endif
