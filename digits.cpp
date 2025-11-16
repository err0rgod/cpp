#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
    int origin=n;
	int revnum=0;
	while(n>0){
		int ld=n%10;
		revnum = (revnum)+(ld*ld*ld);
		n= n/10;

		

	}

    if(revnum == origin){
        cout<< "True";
    }else{
        cout<<"false";
    }
	
}
