<?php

function factorial($n) {
  // Begin Solution
  //---------------------------------------------------------------------------------------
  if($n == 1){
    return 1;
  } else {
    return factorial($n-1) * $n;
  };
  //---------------------------------------------------------------------------------------
  // End Solution
}

$fptr = fopen(getenv("OUTPUT_PATH"), "w");

$stdin = fopen("php://stdin", "r");

fscanf($stdin, "%d\n", $n);

$result = factorial($n);

fwrite($fptr, $result . "\n");

fclose($stdin);
fclose($fptr);
?>