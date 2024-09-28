#include<stdio.h>
#include<vector>
using namespace std;
int main(){
	int n;
	vector<long long int> hi;
	int sub, si, sj;
	int max=0;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		int temp;
		scanf("%d", &temp);
		hi.push_back(temp); 
	}
	for(int i=0; i<n-1; i++){
		sub=hi[i+1]-hi[i];
		if(max<sub){
			max=sub;
			si=i+1;
			sj=i+2;
		}
	}
	if(max==0){
		printf("0");
	}
	else{
		printf("%d %d", si, sj);
	}
}
