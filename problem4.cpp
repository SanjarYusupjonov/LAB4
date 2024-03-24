#include <iostream>

using namespace std;
class Node{
public:
    int value;
    Node *next;
    Node(int val){
        this->value = val;
        this->next = NULL;
    }
};
class LinkedList{
    Node *head;
public:
    LinkedList(){
        head = NULL;
    }
    void insertValue(int newVal){
        Node *newNode = new Node(newVal);
        if (head == NULL) {
            head = newNode;
        }else {
            Node *temp = head;
            while (temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }

    }
    void sort(){
        if (head == NULL){
            return;
        } else{
            Node *temp = head;
            while (temp != NULL){
                Node *temp1 = temp->next;

                while (temp1 != NULL){
                    if (temp1->value < temp->value){
                        int a = temp->value;
                        temp->value = temp1->value;
                        temp1->value = a;
                    }
                    temp1 = temp1->next;
                }

                temp = temp->next;
            }
        }
    }
    void print(){
        if (head == NULL){
            return;
        } else{
            Node *temp = head;
            while (temp != NULL){
                cout << temp->value << " ";
                temp = temp->next;
            }
        }
    }
};
int main(){
    LinkedList l1;
    int n; cin >> n;

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        l1.insertValue(a);
    }

    l1.sort();
    l1.print();
    return 0;

}