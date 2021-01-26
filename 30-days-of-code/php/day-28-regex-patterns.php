<?php

$stdin = fopen("php://stdin", "r");

fscanf($stdin, "%d\n", $N);

// Begin Solution
//---------------------------------------------------------------------------------------
// create a list to keep valid names
$keep = array();
//---------------------------------------------------------------------------------------
// End Solution

for ($N_itr = 0; $N_itr < $N; $N_itr++) {
    fscanf($stdin, "%[^\n]", $firstNameEmailID_temp);
    $firstNameEmailID = explode(' ', $firstNameEmailID_temp);

    $firstName = $firstNameEmailID[0];

    $emailID = $firstNameEmailID[1];

    // Begin Solution
    //---------------------------------------------------------------------------------------
    // create regex pattern and look for it in current emailID
    if(preg_match("/@gmail.com/", $emailID)) {
        array_push($keep, $firstName);
    }
    //---------------------------------------------------------------------------------------
    // End Solution
}

// Begin Solution
//---------------------------------------------------------------------------------------
// sort names list
sort($keep);
// print names in sorted list
foreach ($keep as $name) {
  echo $name."\n";
}
//---------------------------------------------------------------------------------------
// End Solution

fclose($stdin);
