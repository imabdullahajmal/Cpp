//NAME : Abdullah Ajmal
//SAP : 47729

#include <iostream>
using namespace std;


int main(){
	int array[10];
	int *ptr = array;

	

	

	//*(ptr + (i*4))
	char option;

	while(1){

		cout<<"--->> MENU <<---"<<endl
		<<"Enter 1 to Store Data"<<endl
		<<"Enter 2 to View Data"<<endl
		<<"Enter 3 to Apply BUBBLE SORTING"<<endl
		<<"Enter 4 to Apply SELECTION SORTING"<<endl
		<<"Enter 5 to Exit"<<endl;

		cout<<">>";cin>>option;

//OPTION 1
		if(option == '1'){
			cout<<"--- Enter Values for the Array ---"<<endl;
			for(int i=0;i<10;i+=1){
				cout<<">>";cin>>array[i];

			}
		}


//OPTION 2
		else if(option =='2'){
			cout<<"--- Displaying Array Data ---"<<endl<<"\t";
			for(int i=0;i<10;i+=1){
				cout<<array[i]<<" ";
			}
			cout<<endl;
		}
//OPTION 3
		else if(option == '3'){
			cout<<"--- Applying Bubble Sort ---"<<endl;

			for(int i=0;i<10;i+=1){
				for(int j=0;j<10-1;j+=1){
					if(array[j]>array[j+1]){

						int temp = array[j];
						array[j] = array[j+1];
						array[j+1] = temp;
	
					}
				}

			}
			cout<<endl<<"|| Bubble Sort Applied !  ||"<<endl;
		}
//OPTION 4
		else if(option == '4'){
			cout<<"--- Applying Selection Search ---"<<endl;
			
			for(int i=0;i<10-1;i+=1){
				int minimumInd = i;
				for(int j=i+1;j<10;j+=1){
					if(array[j]<array[minimumInd]){
						minimumInd = j;
					}
				}
				int temp = array[minimumInd];
				array[minimumInd] = array[i];
				array[i] = array[temp];
				
			}
			cout<<endl<<"|| Selection Sort Applied !  ||"<<endl;
		}
//OPTION 5
		else if(option == '5'){
			cout<<"--- Exiting Program ---"<<endl;
			break;
		}
//INVALID OPTION
		else{
			cout<<endl<<"!!! Invalid Option !!!"<<endl;
		}

	}
	
		

	cout<<endl;system("PAUSE");
}
