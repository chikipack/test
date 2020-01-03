'use strict'
//hacer un programa que muestre todos los numeros entre dos numeros introducidos por el usuario 

var num1 = parseInt(prompt("introduce un numero", 0));
var num2 = parseInt(prompt("ingrese otro numero", 0));
for (var i = num1 + 1; i < num2; i++) {
    console.log(i);
}