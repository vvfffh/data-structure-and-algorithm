#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int size;
	cout<<"Number of element = ";
	cin>>size;
		int a[size],sum=0;

	for(int i=0;i<size;i++){
		cout<<endl<<"Enter "<<i+1<<" elements = ";
		cin>>a[i];
	}
	
		for(int i=0;i<size;i++){
		sum =sum+a[i];
		}
			
	cout<<"Array is=[";
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	cout<<"]";	
	cout<<endl<<"sum ="<<sum;	
return 0;
}

