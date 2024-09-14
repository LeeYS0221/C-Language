#include<stdio.h>
int main(){
	long long int N, M, i;
	scanf("%lld %lld", &N, &M);
	scanf("%lld", &i);
	if(i>(N/M)*M){
		printf("0");
	}
	else{
		if(i%M==0){
			printf("%lld", M);
		}
		else{
			printf("%lld", i%M);
		}
		
	}
	
	return 0;
}
