#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	cin >> str;
	string bomb;
	cin >> bomb;
	
	string result;
	int bomblen = bomb.length();
	int originlen = str.length();
	for(int i=0; i<originlen; i++){
		result+=str[i];
		if(result.length() >= bomblen){
			if(result.substr(result.length()-bomblen)==bomb){
				result = result.substr(0, result.length()-bomblen);
			}
		}
	}
	if(result.empty()){
		cout << "Art";
	}
	else{
		cout << result;
	}
	return 0;
}
