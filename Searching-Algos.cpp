//NAME : Abdullah Ajmal
//SAP : 47729


#include <iostream>
using namespace std;


int main(){
	
	cout<<"--->> MENU <<---"<<endl
		<<"Enter 1 to Store Data"<<endl
		<<"Enter 2 to Show Data"<<endl
		<<"Enter 3 to Apply Linear Search"<<endl
		<<"Enter 4 to Apply Binary Search"<<endl
		<<"Enter 5 to Exit"<<endl;

	char option;
	int array[10];

	while(1){
		cout<<">>";cin>>option;
//OPTION 1
		if(option=='1'){
			cout<<"--- Storing Data ---"<<endl;
			for(int i=0;i<10;i+=1){
				cout<<">>";cin>>array[i];
			}
			cout<<"|| Data Stored Successfully ||"<<endl;
		}
//OPTION 2
		else if(option == '2'){
			cout<<"--- Viewing Data ---"<<endl;

			cout<<"Values in the array are :"<<endl;
			for(int i=0;i<10;i+=1){
				cout<<array[i]<<" ";
			}
			cout<<endl;
		}
//OPTION 3
		else if(option == '3'){
			cout<<"--- Applying Linear Search ---"<<endl;
			int target;
			bool found = false;
			int targetInd;

			cout<<"Enter the Number to be Searched>>";cin>>target;
			for(int i=0;i<10;i+=1){
				if(array[i] == target){
					found = true;
					targetInd = i;
					break;
				}
			}

			if(found==true){
				cout<<"The Element was found at Index "<<targetInd<<" !"<<endl;
			}
			else{
				cout<<"The Element was not Found!"<<endl;
			}

		}
//OPTION 4
		else if(option == '4'){
			cout<<"--- Applying Binary Search ---"<<endl;
			cout<<"Note : If the array is not sorted, binary searching will not be done successfully!"<<endl;
			int mid = 10/2;

			int target;
			bool found = false;
			int targetInd;

			cout<<"Enter the Number to be Searched>>";cin>>target;
			if(target>=array[mid]){
				for(int i=mid;i<10;i+=1){
					if(array[i]==target){
						found=true;
						targetInd = i;
						break;
					}
				}
			}else{
				for(int i=mid-1;i>=0;i-=1){
					if(array[i]==target){
						found=true;
						targetInd = i;
						break;
					}
				}
			}

			if(found==true){
				cout<<"The Element was found at Index "<<targetInd<<" !"<<endl;
			}
			else{
				cout<<"The Element was not Found!"<<endl;
			}


		}
//OPTION 5
		else if(option == '5'){
			cout<<endl<<"--- Exiting Program ---"<<endl;
			break;
		}
//INVALID OPTION
		else{
			cout<<endl<<"!!! Invalid Option !!!"<<endl;
		}
	}
	cout<<endl;system("PAUSE");
}