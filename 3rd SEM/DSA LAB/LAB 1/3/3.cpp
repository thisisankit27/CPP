#include <iostream>
using namespace std;

struct emp{
    char name[100];
    char gender;
    char des[50];
    char dep[50];
    long int pay;
};

int main() {
	int n;
	cin>>n;
	struct emp s[n];
	for(int i=0;i<n;i++){
        cin.ignore();
        cout<<"Name: ";
	    gets(s[i].name);
	    cout<<"Gender: ";
	    cin>>s[i].gender;
        cin.ignore();
        cout<<"des: ";
	    gets(s[i].des);
	    cout<<"dep: ";
	    gets(s[i].dep);
        cout<<"pay: ";
	    cin>>s[i].pay;
	}
    for(int i=0;i<n;i++){
        int hr = (s[i].pay)*0.25;
        int dr = (s[i].pay)*0.75;
        cout<<s[i].name<<" Gross Pay = "<<s[i].pay+hr+dr<<endl;
    }
	return 0;
}
