#include<iostream>
using namespace std;

int main()
{
	int days,n,i,j,k[22][22]; //days是天数,n是测试的组数，i,j是数组的参数，k是题目中的k
	int d[16];
	cin>>n;
	for(int t=0;t<n;t++)
	{
		cin>>days;
		//初始化
		int a[22][22]={0};
		char b[22][22]={0};
		
		for(i=0;i<16;i++)  
		{
			cin>>d[i];
		}
  		
		for(i=1;i<21;i++)
		{
			for(j=1;j<21;j++)
				cin>>a[i][j];
		}
   

	for(int day=0;day<days;day++)
	{
		//第d天的变化
		for(i=1;i<21;i++)
		{	
			for(j=1;j<21;j++)
			{
				k[i][j]=a[i+1][j]+a[i][j+1]+a[i-1][j]+a[i][j-1]+a[i][j];
	 		}
		}

	 	for(i=1;i<21;i++)
		{	
			for(j=1;j<21;j++)
			{
				a[i][j]+=d[k[i][j]];
				if(a[i][j]>3) a[i][j]=3;
				else if(a[i][j]<0) 
				{
					a[i][j]=0;
				}
	   		}
		}
	} 

   	//进行符号的替换
   	for(i=0;i<22;i++)
	{
		for(j=0;j<22;j++)
		{
	    	if(a[i][j]==0) b[i][j]='.';
			else if(a[i][j]==1) b[i][j]='!';
			else if(a[i][j]==2) b[i][j]='X';
			else b[i][j]='#';
		}
	}

	for(i=1;i<21;i++)
	{
		for(j=1;j<21;j++)
		{
			cout<<b[i][j];
		}
		cout<<endl;
	}
	if(t<n-1)
	{
		cout<<endl;
	}
	}
   return 0;
}
