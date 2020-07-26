#include <iostream>
#include <algorithm>
using namespace std;

struct Node
{
    int x;
    Node* l, * r;
};

void Leaf(Node* t) // вывод листьев
{
    if ((t->l == nullptr) && (t->r == nullptr))
        cout << t->x << "\n";
    else
    {
        if (t->l) Leaf(t->l);
        if (t->r) Leaf(t->r);
    }
}

void print_Tree(Node* p, int level) //Вывод дерева
{
    if (p)
    {
        print_Tree(p->l, level + 1);
        for (int i = 0; i < level; i++) cout << "   ";
        cout << p->x << endl;
        print_Tree(p->r, level + 1);
    }
}

void add_node(int x, Node*& MyTree)  //Добавление звена
{
    if (NULL == MyTree)
    {
        MyTree = new Node;
        MyTree->x = x;
        MyTree->l = MyTree->r = NULL;
    }

    if (x < MyTree->x)
    {
        if (MyTree->l != NULL) add_node(x, MyTree->l);
        else
        {
            MyTree->l = new Node;
            MyTree->l->l = MyTree->l->r = NULL;
            MyTree->l->x = x;
        }
    }

    if (x > MyTree->x)
    {
        if (MyTree->r != NULL) add_node(x, MyTree->r);
        else
        {
            MyTree->r = new Node;
            MyTree->r->l = MyTree->r->r = NULL;
            MyTree->r->x = x;
        }
    }
}

int main()
{
    setlocale(LC_CTYPE, "rus");
    Node* Tree = NULL;
    int n = 20;                 //Количество зарашиваемых чисел
    int b;
    cout << "Введите " << n << " чисел\n";
    for (int i = 0; i < n; i == i) {
        cin >> b;
        if (cin) {
            add_node(b, Tree);
            i++;
        }
        else cout << "error. " << "Повторите ввод числа\n";
        cin.clear();
        cin.get();
    }
    cout << "Дерево\n";
    print_Tree(Tree, n);
    cout << "Листья\n";
    Leaf(Tree);
    cin.get();

    return 0;
}