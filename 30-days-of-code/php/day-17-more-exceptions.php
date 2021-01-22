<?php

// Begin Solution
//---------------------------------------------------------------------------------------
class NegativeException extends Exception {
    
    public function __construct($message, $code=0) {
        parent::__construct($message,$code);
    }   

    public function __toString() {
        return $this->message;
    }
    
} 

class Calculator {
    public function power($a, $b) {
        if ($a < 0 || $b < 0) {
            throw new NegativeException("n and p should be non-negative");
        } else {
            return pow($a, $b);
        }
    }
}
   
//---------------------------------------------------------------------------------------
// End Solution

$myCalculator=new Calculator();
$T=intval(fgets(STDIN));
while($T-->0){
    list($n, $p)  = explode(" ", trim(fgets(STDIN)));
    try{
        $ans=$myCalculator->power($n,$p);
        echo $ans."\n";
    }
    catch(Exception $e){
        echo $e->getMessage()."\n";
    }
}
?>