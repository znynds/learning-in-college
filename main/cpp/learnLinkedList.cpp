#include<iostream>
using namespace std;

struct Node{
	int dat;
	Node *next;
	Node (int data = 0,Node *node = 0){
		dat = data;		next = node;
	}
};

