#include<stdio.h>
int change(int map[102][102], int i, int j){
	if(map[i][j-1]!=-1) map[i][j-1]+=1;
	if(map[i][j+1]!=-1) map[i][j+1]+=1;
	if(map[i-1][j]!=-1) map[i-1][j]+=1;
	if(map[i+1][j]!=-1) map[i+1][j]+=1;
	if(map[i-1][j-1]!=-1) map[i-1][j-1]+=1;
	if(map[i-1][j+1]!=-1) map[i-1][j+1]+=1;
	if(map[i+1][j-1]!=-1) map[i+1][j-1]+=1;
	if(map[i+1][j+1]!=-1) map[i+1][j+1]+=1;
}
int main(){
	int n, m;
	int c;
	int map[102][102]={0,};
	scanf("%d %d", &n, &m);
	scanf("%d", &c);
	for(int i=0; i<c; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		map[y][x]=-1;
		change(map, y, x);
	}
	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
