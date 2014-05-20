#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.14159

int main()
{
	int n;
	cin >> n;
	double x,y;
	int i;
	int r,d;
	for(i = 0; i < n; i++)
	{
		int j = 1;
		cin >> x>>y;
		while(1)
		{
			r = (j * 100) / PI;
			d = pow(x,2) + pow(y,2);
			if(d < r)
				break;
			else
				j++;		
		}
		cout<<"Property "<<i+1<<": This property will begin eroding in year "<<j<<"."<<endl;
	}

	cout<<"END OF OUTPUT."<<endl;
	return 0;
}

