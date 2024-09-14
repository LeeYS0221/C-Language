#include<stdio.h>
int main(){
	char C;
	int I;
	long long int L;
	float D;
	char S[100];
	scanf("%c", &C);
	scanf("%d", &I);
	scanf("%lld", &L);
	scanf("%f", &D);
	scanf("%s", &S);
	
	printf("%s %f %lld %d %c", S, D, L, I, C);
	return 0;
}
