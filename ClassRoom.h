//This is the header file for ClassRoom class
#ifndef CLASSROOM_H
#define CLASSROOM_H
#include<string>
using namespace std;
class ClassRoom
{
	private:
		//These are the attributes we wil use in ClassRoom class
		int ClassId;
		string Section;
		int DepartmentId;
	public:
		//These are the methods we will use.
		void setClassRoomDetails();
		void getClassRoomDetails();
	protected:
};

#endif
