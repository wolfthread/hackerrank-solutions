#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
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

class Solution {
    public:
        Node* removeDuplicates(Node *head) {
            // Begin Solution
            //---------------------------------------------------------------------------------------
            Node *curr_node = head;
            while (curr_node && curr_node->next) {
                while (curr_node->next && curr_node->data == curr_node->next->data) {
                    curr_node->next = curr_node->next->next;
                }
                curr_node = curr_node->next;
            }
            return head;
            //---------------------------------------------------------------------------------------
            // End Solution
        }

        Node* insert(Node *head,int data) {
            Node* p=new Node(data);
            if(head==NULL) {
                head=p;  

            } else if(head->next==NULL) {
                head->next=p;

            } else {
                Node *start=head;
                while(start->next!=NULL){
                    start=start->next;
                }
                start->next=p;   

            }
            return head;
        }
        void display(Node *head) {
            Node *start=head;
              while(start)
              {
                  cout<<start->data<<" ";
                  start=start->next;
              }
        }
};
			
int main() {
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0) {
        cin>>data;
        head=mylist.insert(head,data);
    }	
    head=mylist.removeDuplicates(head);

	mylist.display(head);
		
}