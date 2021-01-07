<?php

$stdin = fopen("php://stdin", "r");

fscanf($stdin, "%d\n", $n);

$current_count = 0;
$max_count = 0;
for($i=0; $n>0; $i++) {    
    if($n%2 == 1){
        $current_count++;
    } else {
        $current_count = 0;
    }
    if($current_count > $max_count){
        $max_count = $current_count;
    };
    $n = $n/2;
};
echo $max_count;

fclose($stdin);
?>