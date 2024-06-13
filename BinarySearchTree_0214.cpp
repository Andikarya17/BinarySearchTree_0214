#include <iostream>
#include <string>
using namespace std;

class node
{
public:
    string info;
    node* leftchild;
    node* rightchild;

    //constructor for the node class
    node(string i, node* l, node* r)
    {
        info = 1;
        leftchild = l;
        rightchild = r;
    }

};

class BinaryTree
{
public:
    node* ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // initializing ROOT to Null
    }

    void insert(string element) // insert a node in the binary search tree
}