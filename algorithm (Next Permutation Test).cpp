#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int arr[4];
	
	for(int i=0; i<4; i++){
		arr[i]=i;
	}
	do{
		for(int i=0; i<4; i++){
			printf("%d ", arr[i]);
		}
		printf("\n");
	}while (next_permutation(arr, arr+4));
	
	return 0;
}
