#include<iostream>
using namespace std;

int main()
{
	int sum=0;
	int a[]={5,3,2,1,4};
	int n=sizeof(a)/sizeof(a[0]);
	for (int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
		cout<<sum<<" "<<endl;
}
