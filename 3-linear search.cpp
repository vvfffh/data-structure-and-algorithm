#include<iostream>
#include<climits>
using namespace std;
	int linearSearch(int a[],int size ,int key){
		for(int i=0;i<size;i++){
		
		if(a[i]==key){
			return i+1;
		}
}
			return -1;
			
		}

int main()
{
	int size;
	cout<<"Number of element = ";
	cin>>size;
		int a[size],key;
		cout<<endl<<"key= ";
cin>>key;
	for(int i=0;i<size;i++){
		cout<<endl<<"Enter "<<i+1<<" elements = ";
		cin>>a[i];
	}

			
			
	cout<<"Array is=[";
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	cout<<"]";	
	cout<<endl<<linearSearch(a,size,key);	
return 0;
}

