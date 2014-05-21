#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int num,total;
	int a[101];
	int id = 0;
	while(cin >> num && num != 0)
	{
		int n = 0;
		total = 0;
		memset(a,0,sizeof(a));
		int i;
		for(i = 0; i < num; i++)
		{
			cin >> a[i];
			total += a[i];
		}

		int k = total / num;
		for(i = 0; i < num; i++)
		{
			if(a[i] > k)
			{
				n += (a[i] - k);
			}

		}
		id++;
		cout<<"Set #"<<id<<endl;
		cout<<"The minimum number of moves is "<<n<<"."<<endl;
		cout<<endl;
	}
	return 0;
}

