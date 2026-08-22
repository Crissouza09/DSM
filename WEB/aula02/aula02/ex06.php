<?php
    $num = $_POST['txtnum'];
    if ($idade = $num >=60){

        echo"Pulseira VIP para idoso!";
    }   elseif ($idade = $num>=18){
        echo"Pulseira para menores!";
    }