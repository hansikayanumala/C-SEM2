#include<iostream>
using namespace std;

void swap (int &a, int &b)
{
	int t=a;
	a=b;
	b=t;
}
void selectionsort( int a[],int n)
{
	for (int i=0;i<n-1;i++)
	{
		int min=0;
		for (int j=i+1;j<=n-1;j++)
        {
		
			if (a[j]<a[min])
			{
				min=j;
			}
		}
		swap(a[i],a[min]);
    }
}
int main()
{
	int a[]={5,3,2,1,4};
	int n=sizeof(a)/sizeof(a[0]);
	selectionsort(a,n);
	for (int i=0;i<n;i++)
	{
		cout<<a[i]<<" "<<endl;
	}
}
