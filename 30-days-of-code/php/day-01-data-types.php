<?php
$handle = fopen ("php://stdin","r");
$i = 4;
$d = 4.0;
$s = "HackerRank ";

// Begin Solution
//---------------------------------------------------------------------------------------
// Declare second integer, double, and String variables.
$handle = fopen("php://stdin", "r");
// Read and save an integer, double, and String to your variables.
$my_int = intval(fgets($handle));
$my_double = floatval(fgets($handle));
$my_string = fgets($handle);
// Print the sum of both integer variables on a new line.
echo ($i + $my_int)."\n";
// Print the sum of the double variables on a new line.
echo number_format($d + $my_double, 1)."\n";
// Concatenate and print the String variables on a new line
// The 's' variable above should be printed first.
echo $s.$my_string."\n";
fclose($handle);
//---------------------------------------------------------------------------------------
// End Solution

?>