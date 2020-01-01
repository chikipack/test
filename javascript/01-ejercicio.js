'use strict'
//programa que pida dos numeros y que nos diga cual es el mayor y cual es el menor y si son iguales

var num1 = parseInt(prompt("introduce el primer numero", 0));
var num2 = parseInt(prompt("introduce el segundo numero", 0));

if (num1 == num2) {
    alert("los numeros son iguales");
} else if (num1 > num2) {
    alert(`el numero mayor es ${num1}`);
} else if (num1 < num2) {
    alert(`el numero mayor es ${num2}`);
}