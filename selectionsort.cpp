#include<iostream>
using namespace std;
int main()
{ 
	int x,i,j,n;
	cout<<"enter no of elements:";
	cin>>n;
	int a[n];
	cout<<"enter array elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
			x=a[j];
			a[j]=a[i];
			a[i]=x;
		}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
	return 0;
}
