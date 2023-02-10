# include <iostream>
using namespace std;

int main()
{
	int n=5,m=4;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(i==n||j==m||j==1)
			{
				cout<<"*";
			}
			else
			{ 
			  cout<<" ";
			}
		}
		cout<<endl;
		
	}
}
