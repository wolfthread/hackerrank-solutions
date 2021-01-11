<?php
    class Difference{
    private $elements=array();
    public $maximumDifference;

  function __construct($elements) {
    $this->elements=$elements;
  }

  function computeDifference() {
    $maxAbsolute = 0;
    $currDiff;
    for ($i = 0; $i < sizeof($this->elements); $i++) {
        for($j = 0; $j < sizeof($this->elements); $j++) {
            $currDiff = abs($this->elements[$i] - $this->elements[$j]);
            if ($currDiff > $maxAbsolute) {
                $maxAbsolute = $currDiff;
            }
        }
    }
    $this->maximumDifference = $maxAbsolute;

  }

} //End of Difference class  
     

$N=intval(fgets(STDIN));
$a =array_map('intval', explode(' ', fgets(STDIN)));
$d=new Difference($a);
$d->ComputeDifference();
print ($d->maximumDifference);
?>