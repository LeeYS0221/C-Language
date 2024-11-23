#include<iostream>
#include<stack>
#include<queue>
#include<string>

using namespace std;
int main(){
	int N;
	cin >> N;
	stack<int> M;
	queue<string> A;
	for(int i=0; i<N; i++){
		int temp;
		string S;
		cin >> temp;
		cin >> S;
		M.push(temp);
		A.push(S); 
	}
	while(!M.empty()){
		cout << M.top() << " ";
		M.pop();
	}
	cout << endl;
	while(!A.empty()){
		cout << A.front() << " ";
		A.pop();
	}
	return 0;
}
