#include<string>
#include<iostream>
#include<vector>

using namespace std;
bool pal(string str){
	int right=0;
	int reverse=str.length()-1;
	while(right <= reverse){
		if(str[right] == str[reverse]){
			right++;
			reverse--;	
		}
		else{
			return false;
		}
	}
	return true;
}
int main(){
	int T;
	int cnt=0;
	cin >> T;
	vector<string> str(T);
	for(int i=0; i<T; i++){
		cin >> str[i];	
	}
	for(int i=0; i<T; i++){
		if(pal(str[i])){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
