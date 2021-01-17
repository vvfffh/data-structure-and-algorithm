#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int size;
	int a[size], maxNo=INT_MIN, minNo=INT_MAX;
	cout<<"Number of element = ";
	cin>>size;
	
	for(int i=0;i<size;i++){
		cout<<endl<<"Enter "<<i+1<<" elements = ";
		cin>>a[i];
	}
	
//	for(int i=0;i<size;i++){
//		if(a[i]> maxNo){
//			maxNo=a[i];	
//		}
//		if(a[i]<minNo){
//			minNo=a[i];
//		}
//	}
	
		for(int i=0;i<size;i++){
		maxNo=max(maxNo,a[i]);
		minNo=min(minNo,a[i]);
	}	
	
	
cout<<endl<<"min no = "<<minNo<<endl<<"max no = "<<maxNo<<endl;
	
	
	cout<<"Array is=[";
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	cout<<"]";	
		
return 0;
}
