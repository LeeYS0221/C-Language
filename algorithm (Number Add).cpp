#include<stdio.h>
int main(){
	int N;
	scanf("%d", &N);
	printf("%d", (N/1000)+(N%1000/100)+((N%1000)%100/10)+(((N%1000)%100)%10));
}
