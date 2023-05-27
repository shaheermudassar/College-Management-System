/* This is the header file for Hostel class
This is base class of Boysh\Hostel and GirlsHostel class.*/
#ifndef HOSTEL_H
#define HOSTEL_H
#include<string>
using namespace std;
class Hostel
{
	public:
	protected:
		//These are the attributes we will use.
		int StudentId;
		string StudentName;
		string BlockNumber;
		int RoomNumber;
		int TotalRooms;
		int TotalStudents;
		string time;
};

#endif
