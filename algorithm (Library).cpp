#include<iostream>
#include<string>
using namespace std;
struct Books{
	string name;
	int G;
	int U;
};
int main(){
	int N;
	cin >> N;
	Books b[N];
	for(int i=0; i<N; i++){
		cin >> b[i].name >> b[i].G >> b[i].U;
	}
	string Fname;
	cin >> Fname;
	for(int i=0; i<N; i++){
		if(Fname==b[i].name){
			cout << b[i].G << ' ' << b[i].U;
		}
	}
	return 0;
}
