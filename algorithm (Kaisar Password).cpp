#include<stdio.h>
int main(){
	int N;
	char S[1001];
	scanf("%d", &N);
	scanf("%s", S);
	for(int i=0; i<S[i]; i++){
		if(S[i]+N>90){
			S[i]-=23;
		}
		else{
			S[i]+=N;
		}
	}
	printf("%s", S);
}
