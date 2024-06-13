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
    {
        node* newNode = new node(element, nullptr, nullptr); // allocate memory fot the new node
        newNode->info = element; // assign value to the data field of the new node
        newNode->leftchild = nullptr; // make the left hild of the new node point to null
        newNode->rightchild = nullptr; // make the right child of the new node point to null

        node* parent = nullptr;
        node* currentNode = nullptr;
        search(element, parent, currentNode); // locate the node which will be the parent of the node to be insert

        if (parent == nullptr) // if the parent is NULL (Tree is empty)
        {
            ROOT = newNode; // mark the new node as ROOT
            return; //exit
        }

        if (element < parent->info) // if the value in the data field of the new node is less than that of the
        {
            parent->leftchild = newNode; // make the left child of the parent point to the new node
        }
    }
}