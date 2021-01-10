<?php
$_fp = fopen("php://stdin", "r");
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
$nb_tests = intval(fgets($_fp));
for ($i=0; $i<=$nb_tests; $i++) {
    $my_string = rtrim(fgets($_fp));
    $left_side = "";
    $right_side = "";
    for ($j=0; $j<strlen($my_string); $j++) {
        if ($j%2==0) {
            $left_side .= $my_string[$j];
        } else {
            $right_side .= $my_string[$j];
        }
    }
    echo $left_side . " " . $right_side . "\n";
}
?>