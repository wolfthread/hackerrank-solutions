#include <iostream>
#include <cstddef>
using namespace std;	
class Node {
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};

class Solution{
    public:

      Node* insert(Node *head,int data) {
        if (head == NULL) {
            head = new Node(data);
        } else {
            Node *current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = new Node(data);
        }
        return head;
      }

      void display(Node *head)
}