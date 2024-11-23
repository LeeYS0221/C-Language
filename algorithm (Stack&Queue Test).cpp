#include<stack>
#include<queue>
#include<iostream>

using namespace std;
int main(){
	stack<int> s;
	queue<int> q;
	for(int i=0; i<10; i++){
		int temp;
		cin >> temp;
		s.push(temp);
		q.push(temp);
	}
	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
		while(!q.empty()){
		cout << q.front() << " ";
		q.pop();
	}
	return 0;
}
