//This is the Header file for Boys Hostel
//It is inherited from Hostel class
#ifndef BOYSHOSTEL_H
#define BOYSHOSTEL_H

#include "Hostel.h"
using namespace std;

class BoysHostel : public Hostel
//it is publically inherited.
{
	//These are the methods we will use in this class.
	public:
		void HostelDetails();
		void setCheckIn();
		void getCheckIn();
		void setCheckOut();
		void getCheckOut();
	protected:
};

#endif
