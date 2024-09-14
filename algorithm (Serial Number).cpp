#include<stdio.h>
int main(){
	int sn;
	int a;
	int ans=0;
	for(int i =0;i<5;i++){
		scanf("%1d", &sn);
		ans += sn*sn;	
	}
	printf("%d", ans%10) ;
}
