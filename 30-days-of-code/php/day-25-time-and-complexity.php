<?php
$_fp = fopen("php://stdin", "r")

// Begin Solution
//---------------------------------------------------------------------------------------
function isPrime($n) {
    if ($n <= 3) {
        return $n > 1;
    }
    if ($n % 2 == 0 || $n % 3 == 0) {
        return false;
    }
    $i = 5;
    while (pow($i, 2) <= $n) {
      if ($n % $i == 0 || $n % ($i + 2) == 0) {
          return false;
      }
      $i += 6;
    }
    return true;
}

$T = fgets(STDIN);
for($i=0; $i<$T; $i++) {
  $n = fgets(STDIN);
  if (isPrime($n)) {
    echo "Prime\n";
  } else {
    echo "Not prime\n";
  }
}

fclose($stdin);
//---------------------------------------------------------------------------------------
// End Solution    
?>