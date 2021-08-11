#include <iostream>

using namespace std;

struct student{
    char name_167[50];
    int roll_167;
    float marks_167[5];
    int total_167;
    int percentage_167;
};

void calc(struct student s[], int n);
void find_stud(struct student s[], int n, int roll_no);
void find_range(struct student s[], int n, int lower, int upper);
void marks_sort(struct student s[], int n);

int main() {
    int n_167;
    cout<<"Enter Number of Students: ";
    cin>>n_167;
	struct student s[n_167];
	cout<<"Enter information of student: \n";
	for(int i=0;i<n_167;i++){
        cin.ignore();
        cout<<"Enter Name: ";
        gets(s[i].name_167);
        cout<<"Enter Roll Number: ";
        cin>>s[i].roll_167;
        cout<<"Enter Marks: \n";
        for(int j=0; j<5; j++){
            cout<<"Mark "<<j+1<<": ";
            cin>>s[i].marks_167[j];
        }
	}
	marks_sort(s,n_167);    //sorts marks or all students
	calc(s,n_167);
	int roll_no_167;
	cout<<"Enter Roll No. of Student to Search: ";
	cin>>roll_no_167;
	cout<<endl;
	find_stud(s,n_167,roll_no_167);
	cout<<"Enter Lower and Upper Range of Percentage: ";
	int lower_167, upper_167;
	cin>>lower_167>>upper_167;
	find_range(s,n_167,lower_167,upper_167);

	return 0;
}

void calc(struct student s[], int n){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<5;j++){
            sum+=s[i].marks_167[j];
        }
        s[i].total_167=sum;
        s[i].percentage_167=(sum/5);
    }
}

void find_stud(struct student s[], int n, int roll_no){
    for(int i=0;i<n;i++){
        if(s[i].roll_167==roll_no){
            cout<<"Name: "<<s[i].name_167<<endl;
            cout<<"Roll: "<<s[i].roll_167<<endl;
            for(int j=0; j<5; j++){
                cout<<"Mark: "<<s[i].marks_167[j]<<endl;
            }
            cout<<"Percentage: "<<s[i].percentage_167<<endl;
        }
    }
}

void find_range(struct student s[], int n, int lower, int upper){
    cout<<"Details of student in the range ("<<lower<<","<<upper<<") :\n";
    for(int i=0;i<n;i++){
        if(s[i].percentage_167>=lower && s[i].percentage_167<=upper){
            cout<<"Name: "<<s[i].name_167<<endl;
            cout<<"Roll: "<<s[i].roll_167<<endl;
            for(int j=0; j<5; j++){
                cout<<"Mark: "<<s[i].marks_167[j]<<endl;
            }
            cout<<"Percentage: "<<s[i].percentage_167<<endl;
        }
    }
}

void marks_sort(struct student s[], int n){

    for(int p=0;p<n;p++){
        int counter=0;
        while(counter<4){
        for(int i=0;i<4;i++){
            if(s[p].marks_167[i]>s[p].marks_167[i+1]){
                int temp=s[p].marks_167[i];
                s[p].marks_167[i]=s[p].marks_167[i+1];
                s[p].marks_167[i+1]=temp;
            }
        }
        counter++;
        }
    }
}
