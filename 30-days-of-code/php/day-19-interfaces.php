<?php
interface AdvancedArithmetic{
    public function divisorSum($n);
}

class Calculator implements AdvancedArithmetic {
    function divisorSum($n) {
        // Begin Solution
        //---------------------------------------------------------------------------------------
        $sum = 0;
        for($i = 1; $i < $n + 1; $i++) {
            if ($n % $i == 0) {
                $sum += $i;
            }
        }
        return $sum;
        //---------------------------------------------------------------------------------------
        // End Solution
    }
}

$n=intval(fgets(STDIN));
?>