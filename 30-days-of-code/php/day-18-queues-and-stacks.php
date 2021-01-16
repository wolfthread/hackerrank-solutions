<?php

class Solution {
    public $myQueue, $myStack;

    public function __construct() {
      $this->myQueue = new SplQueue();
      $this->myStack = new SplQueue();
    }    
    //A void pushCharacter(char ch) method that pushes a character onto a stack.
    function pushCharacter($ch) {
        $this->myStack->push($ch);
    }

    //A void enqueueCharacter(char ch) method that enqueues a character in the queue instance variable.
    function enqueueCharacter($ch) {
        $this->myQueue->enqueue($ch);
    }

    //A char popCharacter() method that pops and returns the character at the top of the stack instance variable.
    function popCharacter() {
        return $this->myStack->pop();
    }

    //A char dequeueCharacter() method that dequeues and returns the first character in the queue instance variable.
    function dequeueCharacter() {
        return $this->myQueue->dequeue();
    }

}

// read the string s
$s = fgets(STDIN);

// create the Solution class object p
$obj = new Solution();

$len = strlen($s);
$isPalindrome = true;

// push/enqueue all the characters of string s to stack
for ($i = 0; $i < $len; $i++) {
    $obj->pushCharacter($s{$i});
    $obj->enqueueCharacter($s{$i});
}

/*
pop the top character from stack
dequeue the first character from queue
compare both the characters
*/
for ($i = 0; $i < $len / 2; $i++) {
    if($obj->popCharacter() != $obj->dequeueCharacter()){
        $isPalindrome = false;
    	
        break;
    }
}

//finally print whether string s is palindrome or not.
if ($isPalindrome)
    echo "The word, ".$s.", is a palindrome.";
else
    echo "The word, ".$s.", is not a palindrome.";
?>