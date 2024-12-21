#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
	string str;
	cin >> str;
	
	int cnt=0;
	int sum=0;
	stack<char> S;
	for(int i=0; i<str.length(); i++){
		if(str[i]=='('){
			S.push(str[i]);
			cnt++;
		}
		else{
			S.pop();
			cnt--;
			if(str[i-1]=='('){
				sum+=cnt;
			}
			else{
				sum+=1;
			}
		}
	}
	cout << sum;
	return 0;
}
