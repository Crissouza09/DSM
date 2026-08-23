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
    for ($i=0; $i < $tamanho; $i++) {
        echo "<p> - $Paises[$i]</p>";
    }
?>