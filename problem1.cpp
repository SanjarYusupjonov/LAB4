#include <iostream>
using namespace std;
class Leaf{
public:
    string msg;
    Leaf(string msg){
        this->msg=msg;
    }
};
class Node{
public:
    int value;
    Node *left;
    Node *right;
    Leaf *leftL;
    Leaf *rightL;
    Node(int val){
        value=val;
        left=NULL;
        right=NULL;
        leftL=NULL;
        rightL=NULL;
    }
};

int main() {
    int num;
    cin >> num;

    Node *root = new Node(80);
    //    Right
    Node *r140 = new Node(140);
    Node *l54 =new Node(54);
    root -> right = r140;
    root -> left = l54;
    Leaf *rNet = new Leaf("Net");
    Node *l104 = new Node(104);
    r140->rightL = rNet;
    r140->left = l104;
    Leaf *rVision = new Leaf("Vision");
    Leaf *lPower = new Leaf("Power");
    l104->rightL = rVision;
    l104->leftL = lPower;

//    Left
    Node *r60 = new Node(60);
    Node *l49 = new Node(49);
    l54->right = r60;
    l54->left = l49;
    Leaf *rFlower = new Leaf("Flower");
    Leaf *l55 = new Leaf("55");
    r60->rightL = rFlower;
    r60->leftL = l55;
    Leaf *rHappy = new Leaf("Happy");
    Leaf *lVictory = new Leaf("Victory");
    l49->rightL = rHappy;
    l49->leftL = lVictory;

    Node *temp = root;
    while (true){
        if (num > temp->value){
            if (temp->right == NULL){
                break;
            }
            temp = temp->right;
        } else{
            if (temp->left == NULL){
                break;
            }
            temp = temp->left;
        }
    }

    if (num > temp->value){
        cout << temp->rightL->msg;
    } else{
        cout << temp->leftL->msg;
    }
    return 0;
}
