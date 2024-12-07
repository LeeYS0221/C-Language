#include<cstdio>
#include<map>
using namespace std;

int main(){
	map<int, int> m;
	
	m.insert(make_pair(4,5));
	m[5]=6;
	
	printf("%d\n", m.find(4));
	printf("%d\n", m.find(4)->second);
	printf("%d\n", m[5]);
	return 0;
}
