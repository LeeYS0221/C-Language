#include<iostream>
#include<stdio.h>
using namespace std;
typedef struct TreeNode{
	char data;
	TreeNode *left, *right;
}TreeNode;


void preorder(TreeNode *root){
	if(root==NULL){
		return;
	}
	cout << root->data;
	preorder(root->left);
	preorder(root->right);
}

void abc(TreeNode *root){
	if(root==NULL){
		return;
	}
	abc(root->right);
	cout << root->data;
	abc(root->left);
	
}

void leaf(TreeNode *root){
    if(root==NULL){
		return;
	}
	
	if(root->left==NULL&&root->right==NULL){
	    cout << root->data;
	    return;
	}
	leaf(root->left);
	leaf(root->right);
}

int main(){
	TreeNode *n1, *n2, *n3, *n4, *n5, *n6, *n7;
	n1=(TreeNode*)malloc(sizeof(TreeNode));
	n2=(TreeNode*)malloc(sizeof(TreeNode));
	n3=(TreeNode*)malloc(sizeof(TreeNode));
	n4=(TreeNode*)malloc(sizeof(TreeNode));
	n5=(TreeNode*)malloc(sizeof(TreeNode));
	n6=(TreeNode*)malloc(sizeof(TreeNode));
	n7=(TreeNode*)malloc(sizeof(TreeNode));
	
	n1->data='A';
	n1->left=n2;
	n1->right=n3;
	
	n2->data='B';
	n2->left=n4;
	n2->right=NULL;
	
	n3->data='C';
	n3->left=n5;
	n3->right=n6;
	
	n4->data='D';
	n4->left=NULL;
	n4->right=NULL;
	
	n5->data='E';
	n5->left=NULL;
	n5->right=NULL;
	
	n6->data='F';
	n6->left=NULL;
	n6->right=n7;
	
	n7->data='G';
	n7->left=NULL;
	n7->right=NULL;
	
	//preorder(n1);
	//abc(n1);
	leaf(n1);
	return 0;
}
