#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
int main(){
	int T;
	cin >> T;
	
	for(int i =0;i<T;i++){
		stack<int> S;
		char str[51];
		scanf("%s", str);
		int check=0;
		for(int j=0; str[j]; j++){
			
			if(str[j]=='('){
				S.push(str[j]);
				//printf("if str[j]:%c\n", str[j]);
			}
			else {
				if(S.top()=='('){
					S.pop();
					//printf("else 1 str[j]:%c\n", str[j]);
				}
				else if(S.empty() || S.top()==')'){
					check = 1;
					break;
					//printf("else 2 str[j]:%c\n", str[j]);
				}
			}
			
		}
		//printf("%d, %d", S.empty(), check);
		if(S.empty() && check ==0){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
	}
	return 0;
}
