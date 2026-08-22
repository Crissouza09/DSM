<?php
    $num = $_GET['txtidade'];
    if ($idade = $num <10){

        echo"Desculpe, apenas alunos com 10 anos ou mais podem participar da excursão";
    }   else    {
        echo"Seja bem vindo a excursao";
    }
    echo"programa encerrado";
?>