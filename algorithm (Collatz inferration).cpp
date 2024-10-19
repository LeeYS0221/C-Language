#include<stdio.h>
int Collatz(int N, int cnt){
	if(N==1){
		return cnt;
	}
	cnt++;
	if(N%2==0){
		N=N/2;
	}
	else{
		N=N*3+1;
	}
	return Collatz(N, cnt); 
}

//int Collatz2(int N){
//	if(N==1){
//		return 0;
//	}
//	if(N%2==0){
//		return 1+Collatz2(N/2);
//	}
//	else{
//		return 1+Collatz2(N*3+1);
//	}
//}
int main(){
	int N;
	int cnt=0;
	scanf("%d", &N);
	printf("%d ", Collatz(N, cnt));
//	printf("%d", Collatz2(N));
	
	return 0;
}
