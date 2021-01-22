<?php
$handle = fopen ("php://stdin","r");
fscanf($handle,"%s",$S);
// Begin Solution
//---------------------------------------------------------------------------------------
function echoInt(int $val) {
        echo $val;
}
try {
    echoInt($S);
} catch(TypeError $e) {
    echo "Bad String";
}
//---------------------------------------------------------------------------------------
// End Solution
?>