#include<iostream>
#include<climits>
using namespace std;

	int BinarySearch(int a[],int size ,int key){
		int s=0,e= size;
		while(s<=e){
			int mid =(s+e)/2;
			if(a[mid]==key){
				return mid;
			}
			else if(a[mid]>key){
			e=mid-1;
			}
			else{
				e=mid+1;
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

		
	cout<<endl<<"element is ="<<BinarySearch(a,size,key);	
			
//	cout<<"Array is=[";
//	for(int i=0;i<size;i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<"]";	
		
return 0;
}

