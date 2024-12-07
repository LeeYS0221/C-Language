#include<cstdio>
using namespace std;
struct Queue{
	int data[10000];
	int begin, end;
	
	Queue(){
		begin=0;
		end=0;
	}
	
	void push(int num){
		data[end]=num;
		end+=1;
	}
	
	bool empty(){
		return begin==end;
	}
	
	int front(){
		if(empty()){
			return -1;
		}
		return data[begin];
	}
	int back(){
		if(empty()){
			return -1;
		}
		return data[end-1];
	}
	int pop(){
		if(empty()){
			return -1;
		}
		int result =data[begin];
		begin +=1;
		return result;
	}
};
