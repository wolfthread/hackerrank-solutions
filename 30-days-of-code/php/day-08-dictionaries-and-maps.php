<?php
$_fp = fopen("php://stdin", "r");
// Begin Solution
//---------------------------------------------------------------------------------------
$n = intval(fgets($_fp));
$m = [];
for ($i=0; $i<$n; $i++) {
    $full_entry = fgets($_fp);
    $name_and_tel =  explode(" ", $full_entry);
    $m[trim($name_and_tel[0])] = trim($name_and_tel[1]);
}
$querying = true;
do {
    $query = trim(fgets($_fp));
    if ($query){
        $ans = "Not found\n";
        if (array_key_exists($query, $m)) {
            $ans = $query."=".$m[$query]."\n";
        }
        echo $ans;
    } else {
        $querying = false;
    };
} while ($querying);

fclose($stdin);
//---------------------------------------------------------------------------------------
// End Solution

?>