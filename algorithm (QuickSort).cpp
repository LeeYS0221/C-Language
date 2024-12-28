#include<iostream>
using namespace std;
int a[1000000];

void swap(int &x, int &y){
	int z=x;
	x=y;
	y=z;
}
int ChoosePivot(int low, int high){
	return low+(high-low)/2;
}
int partition(int low, int high){
	int PivotIndex = ChoosePivot(low, high);
	int PivotValue = a[PivotIndex];
	swap(a[PivotIndex], a[high]);
	int StoreIndex = low;
	for(int i=low; i<high; i++){
		if(a[i]<PivotValue){
			swap(a[i], a[StoreIndex]);
			StoreIndex+=1;
		}
	}
	swap(a[StoreIndex], a[high]);
	return StoreIndex;
}

void QuickSort(int low, int high){
	if(low < high){
		int pivot=partition(low, high);
		QuickSort(low, pivot-1);
		QuickSort(pivot+1, high);
	}
}

int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	QuickSort(0, n-1);
	for(int i=0; i<n; i++){
		cout << a[i] << endl;
	}
	return 0;
}
