<?php
    $Paises = array(
        "Brasil",
        "Chile",
        "Equador",
        "Guatemala",
        "México",
        "Moçambique",
        "Uruguai",
    );
    $tamanho = count($Paises);
    for ($i=1; $i < $tamanho; $i+=2) {
        echo "<p> - $Paises[$i]</p>";
    }
?>