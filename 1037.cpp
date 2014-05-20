#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main()
{
	int nCase;
	cin>>nCase;
	int left,right;
	int i;
	double sum;
	for(i = 1; i <= nCase; i++)
	{
		cin >>left >> right;
		if((left & 1)&&(right & 1))
		{
			cout<<"Scenario #"<<i<<":"<<endl;
			printf("%.2lf\n",left * right + 0.41);
		}
		else
		{
			cout<<"Scenario #"<<i<<":"<<endl;
			sum = left * right;
		//cout<<setprecision(2)<<sum<<endl;	
			printf("%.2lf\n",sum);
		}
		printf("\n");
	}
	return 0;
}
