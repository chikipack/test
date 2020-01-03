'use strict'
//hacer un programa que nos diga si un numero es par o impar
//si no es es valido que lo vuelva a pedir

var numero = parseInt(prompt("introduce un numero", 0));

while (isNaN(numero)) {
    numero = parseInt(prompt("introduce un numero valido", 0));
}
if (numero % 2 == 0) {
    alert(`${numero} es un numero par`);
} else {
    alert(`${numero} es un numero impar`);
}