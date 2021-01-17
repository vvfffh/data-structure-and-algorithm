#include<iostream>

using namespace std;

int main()
{int row, col;

	cout<<"enter the no of rows = ";
	cin>>row;
	cout<<endl<<"enter the no of col = ";
	cin>>col;	
	
	for(int i=1;i<=row;i++){
		
	

		for(int j=1;j<=col;j++){
		if(j<=row-i){
		
			
			cout<<"   ";
}else{cout<<" "<<j;}
}
		for(int j=1;j<i;j++){
			
			
			cout<<" "<<j;
}

	cout<<endl;
	}

			
			
	
return 0;
}

