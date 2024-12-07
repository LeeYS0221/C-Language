#include<stdio.h>
#include<utility>
using namespace std;
int main(){
	pair<int, char> p(15, 'H');
	
	printf("%d %c\n", p.first, p.second);
	
	p.first=40;
	p.second='*';
	printf("%d %c\n", p.first, p.second);
	
	p={5, '+'};
	printf("%d %c\n", p.first, p.second);
	return 0;
}
