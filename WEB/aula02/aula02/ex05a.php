<?php
    $num = $_POST['txtnum'];
    if ($idade = $num <10){

        echo"Desculpe, apenas alunos com 10 anos ou mais podem  entrar na festa!";
    }   else    {
        echo"Seja bem vindo à festa!";
    }
    echo"programa encerrado";
?>