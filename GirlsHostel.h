//This is the Header file for Girls Hostel
//It is inherited from Hostel class.
#ifndef GIRLSHOSTEL_H
#define GIRLSHOSTEL_H

#include "Hostel.h"
using namespace std;
class GirlsHostel : public Hostel
//it is publically inherited.
{
	public:
		//These are the methods we will use in this class.
		void HostelDetails();
		void setCheckIn();
		void getCheckIn();
		void setCheckOut();
		void getCheckOut();
	protected:
};

#endif
