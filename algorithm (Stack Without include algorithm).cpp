#include<cstdio>
using namespace std;
struct Stack{
	int data[10000];
	int size;
	Stack(){
		size=0;
	}
	void push(int num){
		data[size]=num;
		size+=1;
	}
	bool empty(){
		return size ==0;
	}
	int pop(){
		if(empty()){
			return -1;
		}
		else{
			size-=1;
			return data[size];
		}
	}
	int top(){
		if(empty()){
			return -1;
		}
		else{
			return data[size-1];
		}
	}
};

int main(){
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	
	printf("%d\n", s.top());
	printf("%d\n", s.top());
	printf("%d\n", s.top());
	printf("%d\n", s.top());
	printf("%d\n", s.top());
	printf("%d\n", s.top());
	
	return 0;
}
