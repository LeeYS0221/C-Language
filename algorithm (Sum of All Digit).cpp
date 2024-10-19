#include<stdio.h>
int add(int N, int sum){
	if(N==0){
		return sum;
	}
	sum+=N%10;
	return add(N/10, sum);
}

//int add2(int N){
//	if(N==0){
//		return 0;
//	}
//	return N%10 + add2(N/10);
//}

int main(){
	long long int N;
	int sum=0;
	scanf("%lld", &N);
	printf("%d ", add(N, sum));
//	printf("%d", add2(N));
	return 0;
}
