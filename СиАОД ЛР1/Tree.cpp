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

void addNode(tree* start, char inf)// добавление нового узла в дерево (если у узла отсутствует лева€ ветвь, то узел добавл€етс€ слева, иначе, если отсутствует права€ ветвь, то узел добавл€етс€ справа, иначе узел не добавл€етс€). ‘ункци€ должна возвращать указатель на добавленный узел или 0;
{
    if (NULL == start) //если дерева нет, тогда  
    {
        start = new tree; // выдел€ем пам€ть под звено дерева
        start->inf = inf; //записываем данные в звено
        start->left = NULL; //подзвень€ инициализируем пустотой
        start->right = NULL; //подзвень€ инициализируем пустотой
    }

    if (start->left == NULL) //проверка: если лева€ ветвь узла Node пуста€, значит добавл€ем туда
    {
        start->left = new tree;
        start->left->left = start->left->right = NULL;
        start->left->inf = inf;
    }

    if (start->right == NULL) //проверка: если права€ ветвь узла Node пуста€, значит добавл€ем туда
    {
        start->right = new tree;
        start->right->left = start->right->right = NULL;
        start->right->inf = inf;
    }
}

void PrintTree(tree* start) // рекурсивна€ функци€ вывода бинарного дерева на экран.
{
    if (start != NULL) //ѕока не встретитс€ пустое звено
    {
        PrintTree(start->left); //рекурсивна€ функци€ дл€ вывода левого поддерева
        cout << start->inf; //отображаем корень дерева
        PrintTree(start->right); //рекурсивна€ функци€ дл€ вывода правого поддерева
    }
}