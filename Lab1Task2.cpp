//NAME : Abdullah Ajmal
//SAP : 47729
//TASK : 2

#include <iostream>
using namespace std;
int main(){
	
	const int rows = 5;
    const int columns = 4;
    double arr[rows][columns];
    char choice;

	
	
	
	while(1){
		
		cout<<"Enter A\tto Enter Data"<<endl
			<<"Enter B\tto View Marks"<<endl
			<<"Enter C\tto View Grade"<<endl
			<<"Enter D\tto Exit"<<endl;
		
		cout<<">>";cin>>choice;
		
		if(choice=='A'){
			cout<<"--- Data Entry ---"<<endl;
			for(int i=0;i<rows;i+=1){
				for(int j=1;j<columns;j+=1){
					cout<<"Student ID : "<<i<<endl;
					cout<<"Enter Marks of Subject # "<<j<<" : ";cin>>arr[i][j];
					cout<<endl;
				}
			}
			cout<<endl;
		}
		
		
		else if(choice=='B'){
			cout<<"--- View Marks and Total Marks ---"<<endl;
			int checkId, totalM;
			cout<<"Enter students ID to view marks : ";cin>>checkId;

			cout<<"--- Displaying Marks ---"<<endl;
			for(int i=1;i<columns;i+=1){
				cout<<"Subject # "<<i<<"\t"<<arr[checkId][i]<<endl;
				totalM += arr[checkId][i];
			}
			cout<<"Total/t"<<totalM<<endl;
			cout<<endl;
		}
		
		else if(choice == 'C'){
			cout<<"--- View Grade ---"<<endl;
			int checkId, totalM = 0;
			cout<<"Enter students ID to view Grade : ";cin>>checkId;
			for(int i=1;i<columns;i+=1){
				totalM += arr[checkId][i];
			}
//			Grading
			if(totalM>=90){
				cout<<"Congrats! You recieved A grade."<<endl;
			}else if(totalM<90 && totalM>=85){
				cout<<"Not Bad! You recieved B grade."<<endl;
			}else if(totalM<85 && totalM>70){
				cout<<"Can do better! You recieved C grade."<<endl;
			}else{
				cout<<"Need to work Harder! You recieved F grade."<<endl;
			}
			cout<<endl;
		}
		
		else if(choice =='D'){
			cout<<"--- Exit ---"<<endl;
			cout<<"Exiting..."<<endl;
			break;
			
		}
		
		else{
			cout<<"Invalid option!"<<endl<<endl;
		}
	}
	
	return 0;
}
