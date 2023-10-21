//Name : Abdullah Ajmal

#include <iostream>
using namespace std;

//Created a structure called Student
struct Student{
	int stSap;
	string stName ;
};

//Created a function for Bubble Sort
void bubbleSort(Student students[]){
	int tempSap;
	string tempName;
	for(int pass = 0;pass<=19;pass+=1){
		
		for(int i = 0;i<19;i+=1){
			if(students[i].stSap<students[i+1].stSap){
				tempSap = students[i].stSap;
				tempName = students[i].stName;
				
				students[i].stSap = students[i+1].stSap;
				students[i].stName = students[i+1].stName;
				
				students[i+1].stSap = tempSap;
				students[i+1].stName = tempName;
			}
		}
		
	}
}

int main(){
	//Initializing an array of a structure called 'Student'
	Student students[20] = {
		{24904, "Hamza Baig"},
        {27773, "Muhammad Ayaz"},
        {35622, "Faizan Khan"},
        {37532, "Shoaib Iqbal"},
        {44172, "Shehryar Ahmed"},
        {45804, "Ghazen Ahmed"},
        {45923, "Haider Ali"},
        {46202, "Muhammad Waleed"},
        {46292, "Rehan Ahmed"},
        {46334, "sauod Azad"},
        {46411, "Ali Hammad Afzal"},
        {46451, "Mian Muhammad Hashir"},
        {46465, "Ehsan Ullah"},
        {46488, "Nouman Ashfaq"},
        {46980, "Ali Naseer"},
        {47231, "Muhammad Abdullah"},
        {47419, "Usman Pervez"},
        {47527, "Mussab bin Aziz"},
        {47729, "Abdullah Ajmal"}
	};
	
//	Student temp[20] = students;

	bubbleSort(students);//Applying Bubble Sort
	
	//Displaying Sorted Array
	for(int i=0;i<19;i+=1){
		cout<<students[i].stSap<<"\t"<<students[i].stName<<endl;
	}
}
