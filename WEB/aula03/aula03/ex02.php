<?php
    $num = $_POST['txtnum'];
    $num1 = 0;
    $num2 = 1;
   
    echo "<p>$num1, $num2";
    for ($i=2; $i <= 15;  $i++) {
        $temp = $num1 + $num2;
        echo ", $temp"; 
        $pisos = $pisos + $temp ** 2;
        $num1 = $num2;
        $num2 = $temp;
    }
    echo "</p>";
?>