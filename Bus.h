//This is header gile for bus class
#ifndef BUS_H
#define BUS_H
#include<string>
using namespace std;
class Bus
{
	private:
		//These are attributes we will use.
		int BusId;
	 	string BusNumber;
	 	string DriverName;
	 	int TotalSeats;
	 	string route;
	public:
		//These are the methods we will use.
		void setBusDetails();
		void getBusDetails();
	protected:
};

#endif
