<?php
class Node{
    public $data;
    public $next;
    function __construct($d)
    {
        $this->data = $d;
        $this->next = NULL;
    }
}
class Solution{

    function insert($head, $data){
        // Begin Solution
        //---------------------------------------------------------------------------------------
        if ($head == null) {
            $head = new Node($data);
        } else {
            $current = $head;
            while ($current->next != null) {
                $current = $current->next;
            }
            $current->next = new Node($data);
        }
        return $head;
        //---------------------------------------------------------------------------------------
        // End Solution
    }

function display($head){
        $start=$head;
        while($start){
            echo $start->data,' ';
            $start=$start->next;
        }
    }
}
$T=intval(fgets(STDIN));
$head=null;
$mylist=new Solution();
while($T-->0){
    $data=intval(fgets(STDIN));
    $head=$mylist->insert($head,$data);
}
$mylist->display($head);
?>