#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a, int b){
	return a>b;
}
int main(){
	int arr[10];
	for(int i=0; i<10; i++){
		cin >> arr[i];
	}
	sort(arr, arr+10);
	for(int i=0; i<10; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	sort(arr, arr+10, cmp);
	for(int i=0; i<10; i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}
