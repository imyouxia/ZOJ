#include <iostream>

using namespace std;

int main()
{
	int nCase;
	cin >> nCase;
	int i;
	string str;

	for(i = 1;i <= nCase; i++)
	{
		cin >> str;
		int n = str.size();
		int j;
		for(j = 0; j < n; j++)
		{
			if(str[j] != 'Z')
				str[j] = str[j] + 1;
			else
				str[j] = 'A';
		}
		cout<<"String #"<<i<<endl;
		cout<<str<<endl;
		cout<<endl;
	}	
	return 0;
}
