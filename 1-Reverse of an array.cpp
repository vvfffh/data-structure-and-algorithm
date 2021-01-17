#include<iostream>
using namespace std;

int main(){
	cout<<"\n Enter the size of Array = ";
	int n;
	int a[n];
	int b[n];
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cout<<"\n enter the "<<i<<" element of Array = ";
		cin>>a[i];
	}

	
	for(int i=1;i<=n;i++){
	
		b[i]=a[n-i];
		cout<<b[i];	
	}
	
	
return 0;	
	
}
