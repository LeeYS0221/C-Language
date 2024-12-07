#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<int> q;
	for(int i=0; i<5; i++){
		int temp;
		cin >> temp;
		q.push(temp);
	}
	q.pop();
	cout << q.front() << endl;
	cout << q.size() << endl;
	cout << q.empty() << endl;
	
	return 0;
}
