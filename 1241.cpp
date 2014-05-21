#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
	double a,b,c,temp;
	int id = 0;
	while(cin >> a>> b >>c)
	{
		if(a == 0 && b == 0 && c == 0)
		{
			break;
		}

		if(a == -1)
		{
			id++;
			cout<<"Triangle #"<<id<<endl;
			temp = c*c - b*b;
			if(temp > 0)
			{
				a = sqrt(temp);
				if(a+b > c)
				{
					printf("a = %.3lf\n",a);	
				}
				else
				{
					cout<<"Impossible."<<endl;
				}
			}
			else
			{
				cout<<"Impossible."<<endl;
			}
		}

		if(b == -1)
		{
			id++;
			cout<<"Triangle #"<<id<<endl;
			temp = c*c - a*a;
			if(temp > 0)
			{
				b = sqrt(temp);
				if(a+b > c)
				{
					printf("b = %.3lf\n",b);	
				}
				else
				{
					cout<<"Impossible."<<endl;
				}
			}
			else
			{
				cout<<"Impossible."<<endl;
			}
		}

		if(c == -1)
		{
			id++;
			cout<<"Triangle #"<<id<<endl;
			temp = a*a + b*b;
			if(temp > 0)
			{
				c = sqrt(temp);
				if(a+b > c)
				{
					printf("c = %.3lf\n",c);	
				}
				else
				{
					cout<<"Impossible."<<endl;
				}
			}
			else
			{
				cout<<"Impossible."<<endl;
			}
		}
		cout<<endl;
	}	

}
