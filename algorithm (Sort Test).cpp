#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
	return a>b;
}
int main(){
	int arr[]={10,20,30,40,50};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	sort(arr, arr+size, compare);
	
	cout<< "������������ ���ĵ� �迭 : ";
	for(int i=0; i<size; ++i){
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return 0;
}
