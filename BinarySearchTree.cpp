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
        else if(element > parent->info)
        {
            parent->rightChild = newNode;
        }
    }

    //membuat dan mengidentifikasikan
    void search(string element, Node*& parent, Node*& currentNode){
        currentNode = ROOT;
        parent = nullptr;
        while ((currentNode != nullptr) && (currentNode->info != element))
        {

            parent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->leftChild;
            else
                currentNode = currentNode->rightChild;
        }
    }

    void inorder(Node* ptr) {
        if (ROOT == nullptr){
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != nullptr) {
            inorder(ptr->leftChild);
            cout << ptr->info << "";
            inorder(ptr->rightChild);
        }
    }

    void preorder(Node *ptr)
    {
        if (ROOT == nullptr)
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != nullptr)
        {
            cout << ptr->info << "";
            inorder(ptr->leftChild);
            inorder(ptr->rightChild);
        }
    }

    void postorder(Node *ptr)
    {
        if (ROOT == nullptr)
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != nullptr)
        {
            inorder(ptr->leftChild);
            inorder(ptr->rightChild);
            cout << ptr->info << "";
        }
    }
};

int main()
{
    //deklarasi object x sebagai object binarytree
    BinaryTree x;

    //perulangan while selama nilai benar
    while (true)
    {
        //membuat menu program dan input pilihan
        cout << "\nMenu" << endl;
        cout << "1. implement insert operation" << endl;
        cout << "2. perform inorder traversal" << endl;
        cout << "3. perform preorder traversal" << endl;
        cout << "4. perform postorder traversal" << endl;
        cout << "5. exit " << endl;
        cout << "\n Enter your choice (1-5) : ";
    }
}