#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
        Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            } else {
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                } else {
                   cur=insert(root->right,data);
                   root->right=cur;
                }           
           return root;
           }
        }

	void levelOrder(Node * root){
        // Begin Solution
        //---------------------------------------------------------------------------------------
        queue<Node *> q;
        q.push(root);

        while (q.size() != 0) {
            Node *curr_node = q.front();
            q.pop();

            cout << curr_node->data << " ";

            if (curr_node->left) {
                q.push(curr_node->left);
            }
            if (curr_node->right) {
                q.push(curr_node->right);
            }
        }
        //---------------------------------------------------------------------------------------
        // End Solution
  	}

};

int main() {
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}