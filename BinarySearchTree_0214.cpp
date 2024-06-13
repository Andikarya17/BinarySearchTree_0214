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

        if (element < parent->info) // if the value in the data field of the new node is less than that of the parent
        {
            parent->leftchild = newNode; // make the left child of the parent point to the new node
        }
        else if (element > parent->info) // if the value in the data field of the new node is greater than that of the parent
        {
            parent->rightchild = newNode; // make the right child of the parent point to the new node
        }
    }

    void search(string element, node*& parent, node*& currentNode)
    {
        //this function searches the currentNode of the specified Node as well as the current node of its parent
        currentNode = ROOT;
        parent = NULL;
         while ((currentNode != nullptr) && (currentNode->info != element))
         {
             parent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->leftchild;
            else
                currentNode = currentNode->rightchild;

         }
    }

    void inorder(node* ptr)
    {
        if (ROOT == nullptr)
        {
             cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != nullptr)
        {
            inorder(ptr->leftchild);
            cout << ptr->info << " ";
            inorder(ptr->rightchild);
        }
    }

    void preorder(node* ptr)
    {
        if (ROOT == nullptr)
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != nullptr)
        {
            cout << ptr->info << " ";
            preorder(ptr->leftchild);
            preorder(ptr->rightchild);
        }
    }
    void postorder(node* ptr)
    {
        if (ROOT == nullptr)
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != nullptr)
        {
            postorder(ptr->leftchild);
            postorder(ptr->rightchild);
            cout << ptr->info << " ";
        }  
    }
};