#include<stdio.h>
#include<vector>
using namespace std;
int main(){
	int n;
	vector<int>h;
	int cnt=0;
	scanf("%d", &n);
	h.push_back(0);
	for(int i=1; i<=n; i++){
		int temp;
		scanf("%d", &temp);
		h.push_back(temp); 
	}
	h.push_back(0);
	for(int i=n; i>0; i--){
		if(h[i]>h[i+1]){
			cnt++;
			printf("%d %d %d %d\n", h[i-1], h[i], h[i+1], cnt);
		}
	}
	printf("%d", cnt);
	
	return 0;
}
