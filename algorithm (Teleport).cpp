#include<cstdio>

int Ai[10001];

int Find(int P, int T){
	if(T==0){
		return P;
	}
	return Find(Ai[P-1], T-1);
}
int main(){
	int N, P, T;
	scanf("%d %d %d", &N, &P, &T);
	for(int i=0; i<N; i++){
		scanf("%d", &Ai[i]);
	}
	printf("%d", Find(P, T));
	
	return 0;
}
