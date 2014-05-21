#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double w,d;
	int id = 0;
	while(cin >>w >>d)
	{
		id++;
		if(w == 0 && d == 0)
		{
			break;
		}
		cout<<"Sample #"<<id<<endl;
		int year = 5730 * log(810 * w/d + 0.0)/log(2.0);
		if(year < 10000)
		{
			year += 50;
			year /= 100;
		   	year *= 100;	
		}
		else
		{
			year += 500;
			year /= 1000;
			year *= 1000;
		}

		cout<<"The approximate age is "<<year<<" years."<<endl;
		cout<<endl;
	}
	return 0;
}
