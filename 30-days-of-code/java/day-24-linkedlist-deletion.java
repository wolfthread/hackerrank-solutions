import java.io.*;
import java.util.*;
class Node {
	int data;
	Node next;
	Node(int d){
        data=d;
        next=null;
    }
	
}
class Solution {

    public static Node removeDuplicates(Node head) {
        // Begin Solution
        //---------------------------------------------------------------------------------------
        Node curr_node = head;
        while (curr_node != null && curr_node.next != null) {
            while (curr_node.next != null && curr_node.data == curr_node.next.data) {
                curr_node.next = curr_node.next.next;
            }
            curr_node = curr_node.next;
        }
        return head;
        //---------------------------------------------------------------------------------------
        // End Solution
    }

    public static  Node insert(Node head,int data) {
        Node p=new Node(data);			
        if(head==null)
            head=p;
        else if(head.next==null)
            head.next=p;
        else {
            Node start=head;
            while(start.next!=null)
                start=start.next;
            start.next=p;

        }
        return head;
    }

    public static void display(Node head) {
              Node start=head;
              while(start!=null) {
                  System.out.print(start.data+" ");
                  start=start.next;
              }
        }
        
    public static void main(String args[]) {
            Scanner sc=new Scanner(System.in);
            Node head=null;
            int T=sc.nextInt();
            while(T-->0) {
                int ele=sc.nextInt();
                head=insert(head,ele);
            }
            head=removeDuplicates(head);
            display(head);
    }
}