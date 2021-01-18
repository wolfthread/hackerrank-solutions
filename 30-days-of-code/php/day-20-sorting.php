<?php

$handle = fopen ("php://stdin", "r");
fscanf($handle, "%d",$n);
$a_temp = fgets($handle);
$a = explode(" ",$a_temp);
$a = array_map('intval', $a);
$numberOfSwaps = 0;
$endPosition = $n - 1;
$swapPosition;
while( $endPosition > 0 ) {
    $swapPosition = 0;
    for($i = 0; $i < $endPosition; $i++) {
        if( $a[$i] > $a[$i + 1] ){
            $tmp = $a[$i];
            $a[$i] = $a[$i + 1];
            $a[$i + 1] = $tmp;
            $numberOfSwaps += 1;
            $swapPosition = $i;
        }
    }
    $endPosition = $swapPosition;
}
printf("%s%d%s", "Array is sorted in ", $numberOfSwaps, " swaps.\n");
printf("%s%d%s", "First Element: ", $a[0], "\n");
printf("%s%d%s", "Last Element: ", $a[$n- 1], "\n");



?>