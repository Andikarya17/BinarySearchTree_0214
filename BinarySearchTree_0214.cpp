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