#include<iostream>
#include<string>

using namespace std;
int main(){
	string A;
	cin >> A;
	string B;
	cin >> B;
	if(A>B){
		cout << A;
		return 0;
	}
	else{
		cout << B;
		return 0;
	}
}
