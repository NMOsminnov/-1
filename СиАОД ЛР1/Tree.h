#include <iostream>

using namespace std;

#ifndef BINARY_TREE
#define BINARY_TREE

struct tree {
	char inf = NULL;
	tree* left = NULL;
	tree* right = NULL;
};

void addNode(tree* start, char inf);

void addLeftNode(tree* start, char inf);
void addRightNode(tree* start, char inf);


tree* deleteNode(tree* start);

tree* find(tree* start, char key);

void straight(tree* start);
void printTree(tree* start);

int heightOfTree(tree* start);
int countOfNodes(tree* start);


#endif