#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int num;
	int a[52];
	char c;
	int i,j;
	while(cin >> num && num)
	{
		cin >> c;
		if(c == 'P')
		{
			for(i = 1; i <= num; i++)
			{
				cin >> a[i];
			}
			
			for(i = 1; i <= num; i++)
			{
				int count = 0;
				for(j = 1; j <= num; j++)
				{
					if(a[j] > i)
					{
						count++;
					}
					if(a[j] == i)
					{
						if(i != 1)
						{
							cout << " ";
						}
						cout << count;
						break;
					}
				}
			
			}
			cout<<endl;
		}

		else if(c == 'I')
		{
			memset(a,0,sizeof(a));
			int n;
			for(i = 1; i <= num; i++)
			{
				cin >> n;
				for(j = 0; j <= n; j++)
				{
					if(a[j] != 0)
					{
						n++;
					}
				}
				a[n] = i;
			}

			for(i = 0 ; i < num; i++)
			{
				if(i != 0)
				{
					cout << " ";
				}
				cout<<a[i];
			}
			cout<<endl;
		
		}

	}
	return 0;
}
