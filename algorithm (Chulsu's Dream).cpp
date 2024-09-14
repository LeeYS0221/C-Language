#include<stdio.h>
int main(){
	long long int n;
	int cnt=0;
	int temp=0;
	scanf("%lld", &n);
	
	while(n>=10){
		temp=0;
		while(n){
			temp+=n%10;
			n/=10;
	    }
	    n=temp;
	    cnt++;
	}
	printf("%d", cnt);
	return 0;
}
