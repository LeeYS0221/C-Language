#include<stdio.h>
int Hanoi(int N, int from, int to){
	if(N==0){
		return 0;
	}
	Hanoi(N-1, from, 6-to-from);
	printf("%d %d %d\n", N, from, to);
	Hanoi(N-1, 6-to-from, to);
}
int main(){
	int N;
	scanf("%d", &N);
	Hanoi(N, 1, 3);
	
	return 0;
}
