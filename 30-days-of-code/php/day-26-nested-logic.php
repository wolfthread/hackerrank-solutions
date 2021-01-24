<?php
$_fp = fopen("php://stdin", "r");
// Begin Solution
//---------------------------------------------------------------------------------------
list($dayIn, $monthIn, $yearIn) = array_map('intval', explode(' ', fgets(STDIN)));
list($dayOut, $monthOut, $yearOut) = array_map('intval', explode(' ', fgets(STDIN)));
$fineDay = 15;
$fineMonth = 500;
$fineYear = 10000;
if ($yearIn == $yearOut) {
    if ($monthIn == $monthOut) {
        if ($dayIn > $dayOut) {
            echo ($dayIn - $dayOut) * $fineDay;
        } else {
            echo 0;
        }
    } else if ($monthIn > $monthOut) {
        echo ($monthIn - $monthOut) * $fineMonth;
    } else {
        echo 0;
    }
} else if ($yearIn > $yearOut) {
    echo $fineYear;
} else {
    echo 0;
}
//---------------------------------------------------------------------------------------
// End Solution

?>