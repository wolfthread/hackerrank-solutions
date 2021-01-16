#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class Solution {
    private:
        //Two instance variables: one for your stack , and one for your queue.
        stack<char> myStack;
        queue<char> myQueue;

    public:

        //A void pushCharacter(char ch) method that pushes a character onto a stack.
        void pushCharacter(char ch) {
            myStack.push(ch);
        }

        //A void enqueueCharacter(char ch) method that enqueues a character in the queue instance variable.
        void enqueueCharacter(char ch) {
            myQueue.push(ch);
        }

        //A char popCharacter() method that pops and returns the character at the top of the stack instance variable.
        char popCharacter() {
            char topChar = myStack.top();
            myStack.pop();
            return topChar;
        }

        //A char dequeueCharacter() method that dequeues and returns the first character in the queue instance variable.
        char dequeueCharacter() {
            char firstChar = myQueue.front();
            myQueue.pop();
            return firstChar;
        }

};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}