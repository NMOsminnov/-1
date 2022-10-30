#include <iostream>

#include "Tree.h"

using namespace std;

void addLeftNode(tree* start, char inf) {
	tree* node = new tree;
	node->inf = inf;
	start->left = node;
}

void addRightNode(tree* start, char inf) {
    tree* node = new tree;
    node->inf = inf;
    start->right = node;
}

void addNode(tree* start, char inf)// ���������� ������ ���� � ������ (���� � ���� ����������� ����� �����, �� ���� ����������� �����, �����, ���� ����������� ������ �����, �� ���� ����������� ������, ����� ���� �� �����������). ������� ������ ���������� ��������� �� ����������� ���� ��� 0;
{
    if (NULL == start) //���� ������ ���, �����  
    {
        start = new tree; // �������� ������ ��� ����� ������
        start->inf = inf; //���������� ������ � �����
        start->left = NULL; //��������� �������������� ��������
        start->right = NULL; //��������� �������������� ��������
    }

    if (start->left == NULL) //��������: ���� ����� ����� ���� Node ������, ������ ��������� ����
    {
        start->left = new tree;
        start->left->left = start->left->right = NULL;
        start->left->inf = inf;
    }

    if (start->right == NULL) //��������: ���� ������ ����� ���� Node ������, ������ ��������� ����
    {
        start->right = new tree;
        start->right->left = start->right->right = NULL;
        start->right->inf = inf;
    }
}

void PrintTree(tree* start) // ����������� ������� ������ ��������� ������ �� �����.
{
    if (start != NULL) //���� �� ���������� ������ �����
    {
        PrintTree(start->left); //����������� ������� ��� ������ ������ ���������
        cout << start->inf; //���������� ������ ������
        PrintTree(start->right); //����������� ������� ��� ������ ������� ���������
    }
}