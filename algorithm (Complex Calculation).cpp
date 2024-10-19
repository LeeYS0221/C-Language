#include<stdio.h>
int One(int N){
	return (N-2)*(N+1)*N/2;
}
int Two(int N){
	return (N*N*N)-((N-1)*(N-1)*(N-1));
}
int Three(int N){
	return (3*N*N*N)-(N*N)-(3*N);
}
int main(){
	int N, M;
	scanf("%d %d", &N, &M);
	if(M==1){
		printf("%d", One(N));	
	}
	else if(M==2){
		printf("%d", Two(N));	
	}
	else if(M==3){
		printf("%d", Three(N));	
	}
	
	return 0;
}
