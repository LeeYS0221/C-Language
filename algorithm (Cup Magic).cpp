#include<iostream>
#include<stack>

using namespace std;
int main(){
	int temp;
	int N;
	cin >> N;
	stack<int> S;
	for(int i=0; i<N; i++){
		cin >> temp;
		while (!S.empty() && temp>S.top()){
			S.pop();
		}
		S.push(temp);
//		cout << "pushed temp" <<S.top();
	}
	
	cout<<S.size();
	return 0;
}
