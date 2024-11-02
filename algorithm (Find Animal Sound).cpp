#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	string targetsound;
	cin >> targetsound;
//	cout << targetsound;
	
	int N;
	cin >> N;
	
	vector<string> recordedsounds(N);
	for(int i=0; i<N; ++i){
		cin >> recordedsounds[i];
	}
	for(int i=0; i<N; i++){
		if(recordedsounds[i]==targetsound){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	
	return 0;
}
