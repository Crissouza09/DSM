<?php
$n1 = $_POST['txtnum1'];
$n2 = $_POST['txtnum2'];
$operador = $_POST['txtop'];

if ($operador == 'soma'){
    $resultado = $n1 + $n2;
} eslseif ($operador == 'subtr'){
    $resultado = $n1 - $n2;
} elseif ($operador == 'div'){
    $resultado = $n1 / $n2;
} else ($operador == 'mult'){
    $resultado = $n1 * $n2;
}
echo "Resultado: $n1 $operador $n2 = $resultado";

?>