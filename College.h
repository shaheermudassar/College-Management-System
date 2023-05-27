//This is the header file for college class
#ifndef COLLEGE_H
#define COLLEGE_H
#include <string>
class College
{
	private:
		//these are the attributes we wll use in college class
	std::string CollegeName[50];
	std::string City[50];
	std::string ContactNumber[60];
	public:
		//These are the methods we will use.
		void CollegeDetails();
		void open();
	protected:
};

#endif
