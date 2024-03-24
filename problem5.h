#include <iostream>
using namespace std;
class Node {
public:
    int value;
    Node *next;

    Node(int val) {
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
        if (head == NULL){
            head = newNode;
        } else{
            Node *temp = head;
            while (temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void deleteDuplicates() {
        if (head == NULL) {
            return;
        } else {
            Node *temp = head;

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
    int n; cin >> n;
    LinkedList l1;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        l1.insertValue(a);
    }

    l1.deleteDuplicates();
    l1.print();
    return 0;
}