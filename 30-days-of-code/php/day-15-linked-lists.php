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
    }

function display($head){