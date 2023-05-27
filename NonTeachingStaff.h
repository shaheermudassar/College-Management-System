//This is the header file for NonTeachingStaff class.
#ifndef NONTEACHINGSTAFF_H
#define NONTEACHINGSTAFF_H

#include "Staff.h"
using namespace std;
class NonTeachingStaff : public Staff
{
	//it is publically inherited from staff class.
	public:
		//These are the methods we will use
		void setStaffDetails();
		void getStaffDetails();
};

#endif
