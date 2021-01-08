<?php

$stdin = fopen("php://stdin", "r");

$arr = array();

for ($i = 0; $i < 6; $i++) {
    fscanf($stdin, "%[^\n]", $arr_temp);
    $arr[] = array_map('intval', preg_split('/ /', $arr_temp, -1, PREG_SPLIT_NO_EMPTY));
}

$max_sum = -63;

// moving hourglass from left to right, then top to bottom
for ($move_ver = 0; $move_ver < 4; $move_ver ++) {
  for ($move_hor = 0; $move_hor < 4;$move_hor ++) {
      $sum = 0;
      // adding a counter check since 4th entry and 6th entry not counted
      $counter = 1;
      for ($i = 0; $i < 3; $i++) {
          for ($j = 0; $j < 3; $j++) {
              if ($counter != 4 && $counter != 6){
                  $sum += $arr[$i + $move_ver][$j + $move_hor];
              }
              $counter += 1;
          };
      };
      if ($sum > $max_sum) {
          $max_sum = $sum;
      };
  };
};

echo $max_sum;

fclose($stdin);

?>