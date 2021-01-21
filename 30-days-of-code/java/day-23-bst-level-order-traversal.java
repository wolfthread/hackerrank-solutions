import java.util.*;
import java.io.*;
class Node{
    Node left,right;
    int data;
    Node(int data){
        this.data=data;
        left=right=null;
    }
}
class Solution{

static void levelOrder(Node root){
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        
        while (!q.isEmpty()) {
            Node curr_node = q.remove();
            System.out.print(String.format("%d%s", curr_node.data, " "));
            
            if (curr_node.left != null) {
                q.add(curr_node.left);
            }
            
            if (curr_node.right != null) {
                q.add(curr_node.right);
            }
        }
      
    }

public static Node insert(Node root,int data){
        if(root==null){
            return new Node(data);
        }
        else{
            Node cur;
            if(data<=root.data){
                cur=insert(root.left,data);
                root.left=cur;
            }
            else{
                cur=insert(root.right,data);
                root.right=cur;
            }
            return root;
        }
    }
    public static void main(String args[]){
            Scanner sc=new Scanner(System.in);
            int T=sc.nextInt();
            Node root=null;
            while(T-->0){
                int data=sc.nextInt();
                root=insert(root,data);
            }
            levelOrder(root);
        }	
}