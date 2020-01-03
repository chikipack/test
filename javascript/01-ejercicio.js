'use strict'
//programa que pida dos numeros y que nos diga cual es el mayor y cual es el menor y si son iguales
//PLUS si los numeros no son un numero o si son menores a cero nos los vuelva a pedir

var num1 = parseInt(prompt("introduce el primer numero", 0));
var num2 = parseInt(prompt("introduce el segundo numero", 0));

while (num1 <= 0 || num2 <= 0 || isNaN(num1) || isNaN(num2)) {
    num1 = parseInt(prompt("introduce el primer numero", 0));
    num2 = parseInt(prompt("introduce el segundo numero", 0));
}

if (num1 == num2) {
    alert("los numeros son iguales");
} else if (num1 > num2) {
    alert(`el numero mayor es ${num1}\ny el numero menor es ${num2}`);
} else if (num1 < num2) {
    alert(`el numero mayor es ${num2}\n y el numero menor es ${num1}`);
}