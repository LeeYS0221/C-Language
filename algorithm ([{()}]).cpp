#include<iostream>
#include<stack>
using namespace std;
int main(){
	char str[10001];
	cin >> str;
	stack<int> S;
	for(int i=0; str[i]; i++){
		if(str[i]=='('||str[i]=='{'||str[i]=='['){
			S.push(str[i]);
		}
		else{
			if(S.top()!='(' && str[i]==')'){
				cout << '0';
				return 0;
			}
			else if(S.top()!='{' && str[i]=='}'){
				cout << '0';
				return 0;
			}
			else if(S.top()!='[' && str[i]==']'){
				cout << '0';
				return 0;
			}
			S.pop();
		}
	}
	if(S.empty()){
		cout << '1';
	}
	else{
		cout << '0';
	}
	return 0;
}
