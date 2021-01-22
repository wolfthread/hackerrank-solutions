<?php

class Person {
    public $age;
    public function __construct($initialAge) {
        // Begin Solution
        //---------------------------------------------------------------------------------------
        if ($initialAge < 0) {
            echo "Age is not valid, setting age to 0."."\n";
            $this->age = 0;
        } else {
            $this->age = $initialAge;
        }
        //---------------------------------------------------------------------------------------
        // End Solution
    }
    public  function amIOld() {
        // Begin Solution
        //---------------------------------------------------------------------------------------
        if ($this->age < 13) {
                    echo "You are young."."\n";
                } elseif ($this->age >= 13 && $this->age < 18) {
                    echo "You are a teenager."."\n";
                } else {
                    echo "You are old."."\n";
                }
        //---------------------------------------------------------------------------------------
        // End Solution
    }
    public  function yearPasses() {
        // Begin Solution
        //---------------------------------------------------------------------------------------
        $this->age++;
        //---------------------------------------------------------------------------------------
        // End Solution
    }
}

$T = intval(fgets(STDIN));
for($i=0;$i<$T;$i++){
    $age=intval(fgets(STDIN));
    $p=new Person($age);
    $p->amIOld();
    for($j=0;$j<3;$j++){
        $p->yearPasses();
    }
    $p->amIOld();
    echo "\n";
        
}
?>