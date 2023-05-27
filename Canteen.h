//This is header file for Canteen class
#ifndef CANTEEN_H
#define CANTEEN_H
#include<string>
using namespace std;

class Canteen
{
	private:
		//These are attributes for Canteen class
		string InchargeName;
		string ItemName;
		string Availability;
		float Price;
	public:
		//These are the methods we will use.
		void setCanteenDetails();
		void getCanteenDetails();
	protected:
};

#endif
