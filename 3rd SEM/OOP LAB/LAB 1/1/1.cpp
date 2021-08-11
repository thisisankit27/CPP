#include <iostream>

using namespace std;

struct student{
    char name_167[50];
    int roll_167;
    float marks_167[5];
};

int main() {
	struct student s;
	cout<<"Enter information of student: \n";
	cout<<"Enter Name: ";
	gets(s.name_167);
	cout<<"Enter Roll Number: ";
	cin>>s.roll_167;
	cout<<"Enter Marks: \n";
	for(int i=0; i<5; i++){
	    cout<<"Mark "<<i+1<<": ";
	    cin>>s.marks_167[i];
	}
	//display
	cout<<"Name: "<<s.name_167<<endl;
	cout<<"Roll: "<<s.roll_167<<endl;
	for(int i=0; i<5; i++){
	    cout<<"Mark: "<<s.marks_167[i]<<endl;
	}
	return 0;
}
