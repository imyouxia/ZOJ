#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n;
	double s;
	int i;
	cout<<"# Cards  Overhang\n";
	while(cin >> n)
	{
		s = 0;
		for(i = 1; i <= n; i++)
		{
			s+=1.0/(2*i);
		}
		printf("%5d%10.3lf\n",n,s);
	}
	return 0;
}
