//NAME : Abdullah Ajmal
//SAP : 47729
//TASK : 1


#include <iostream>
using namespace std;
int main(){
	
    const int sizeOfArray = 10;
    int arr[sizeOfArray] = {1};
    int *ptr = arr;
    
    
    for(int i = 0; i<sizeOfArray ; i+=1){
    	cout<<">>";cin>>*(ptr+(4*i));
	}
	
	for(int i = 0; i<sizeOfArray ; i+=1){
    	cout<<"Element at the index "<<i<<" is "<<*(ptr+(4*i))<<endl;
	}
	
	return 0;
}
