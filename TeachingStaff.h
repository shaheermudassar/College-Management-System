//This is the header file for TeachingStaff class.
#ifndef TEACHINGSTAFF_H
#define TEACHINGSTAFF_H

#include "Staff.h"
using namespace std;
class TeachingStaff : public Staff
//it is publically inherited.
{
	public:
		//These are the method we will use.
		void setStaffDetails();
		void getStaffDetails();
};

#endif
