<?php
    $cardapio = [
        "Bebidas" => ["Agua", "Suco", "cerveja"], 
        "comidas" =>["Hamburguer", "pizza"],

    ];

    foreach ($cardapio as $categoria => $itens) {
        echo "<h3>$categoria</h3>";
        echo "<ol>";
            foreach ($itens as $item) {
                echo "<li>$item</li>";
            }
        echo "</ol>";
    }
?>