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
    
}