#include <iostream>
using namespace std;

//membuat class node
class Node {

    //memberi akses modifer serta mendeklarasi variabel dan object node
    public :
        string info;
        Node* leftChild;
        Node* rightChild;

        //membuat constructor untuk class node
        Node(string i, Node* I, Node* r){
            //memberi nilai parameter ke variabel
            info = i;
            leftChild = I;
            rightChild = r;
        }
};

//membuat class binarytree
class BinaryTree {

    //memberikan akses modifier dan deklarasi object
    public :
        Node *ROOT;

    //membuat constructor dan memberi nilai kepada object root
    BinaryTree() {
        ROOT = nullptr;
    }

    //membuat prosedur insert
    void insert(string element) {

        //memberikan nilai untuk setiap object yang berada di dalam prosedu insert
        Node *newNode = new Node(element, nullptr, nullptr);
        newNode->info = element;
        newNode->leftChild = nullptr;
        newNode->rightChild = nullptr;

        Node* parent = nullptr;
        Node* currentNode = nullptr;
        search(element, parent, currentNode);

        //membuat conditional statment
        if (parent == nullptr) {
            ROOT = newNode;
            return;
        }

        if(element < parent->info)
        {
            parent->leftChild = newNode;
        }
        else if(element < parent->info)
        {
            parent->rightChild = newNode;
        }
    }
};