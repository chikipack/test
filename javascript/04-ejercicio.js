'use strict'
//mostrar todos los numero impares que hay entre dos numeros introducidos por el usuario

var num1 = parseInt(prompt("introduce un numero", 0));
var num2 = parseInt(prompt("ingrese otro numero", 0));
if (num1 < num2) {
    for (var i = num1; i <= num2; i++) {
        if ((i % 2) != 0) {
            console.log(i);
        }
    }
}