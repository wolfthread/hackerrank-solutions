<?php

$stdin = fopen("php://stdin", "r");

fscanf($stdin, "%d\n", $t);

for ($t_itr = 0; $t_itr < $t; $t_itr++) {
    fscanf($stdin, "%[^\n]", $nk_temp);
    $nk = explode(' ', $nk_temp);

    $n = intval($nk[0]);
    $k = intval($nk[1]);
    // Begin Solution
    //---------------------------------------------------------------------------------------
    $max = 0;
    for ($i = 1; $i < $n; $i++) {
        for ($j = $i + 1; $j <= $n; $j++) {
            $andOperation = $i & $j;
            if ($andOperation < $k && $andOperation > $max) {
                $max = $andOperation;
            }
        }
    }
    echo $max."\n";
    //---------------------------------------------------------------------------------------
    // End Solution    
}

fclose($stdin);
