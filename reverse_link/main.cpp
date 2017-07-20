#include <iostream>

using namespace std;

class SLink{
public:
    class Node{
    public:
        int val;
        Node* next;
        Node(int v = 0,Node* n = NULL){
            val = v;
            next = n;
        }
    };
    Node *head;
    SLink(){
        //head store no data
        head = new Node();
    }

    void addNode(int v=0){
        Node* temp = new Node(v,head->next);
        head->next = temp;
    }

    void traverse(){
        Node *p = head;
        while(p->next!=NULL){
            p = p -> next;
            cout << p->val << " ";
        }
        cout<<endl;
    }

    void reverse(){
        if(head->next == NULL){
            return;
        }

        Node *p1, *p2, *p3;
        p1 = head->next;
        p2 = head->next->next;

        while(p2 != NULL){
            p3 = p2->next;
            p2->next = p1;
            p1 = p2;
            p2 = p3;
        }
        //breaks when p1 is the true head
        head->next->next = NULL;
        head->next = p1;
    }

};

int main() {
    SLink *list = new SLink();
    list->addNode(1);
    list->addNode(2);
    list->addNode(3);
    list->traverse();
    list->reverse();
    list->traverse();

    return 0;
}
