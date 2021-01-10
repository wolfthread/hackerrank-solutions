<?php



$stdin = fopen("php://stdin", "r");

fscanf($stdin, "%d\n", $N);

$w = "Weird";
$nw = "Not Weird";

if ($N % 2 != 0) {
    echo $w;
} elseif ($N >= 2 && $N <= 5) {
    echo $nw;
} elseif ($N >= 6 && $N <= 20) {
    echo $w;
} else {
    echo $nw;
};

fclose($stdin);
?>