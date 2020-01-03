'use strict'
//una calculadora que pida dos numeros por pantalla 
//si metemos uno mal que nos lo vuevla a pedir
//en el cuerpo de la pagina en una alerta y por la consola el resultado de sumar restar multiplicar y dividir esas dos cifras
var num1 = parseInt(prompt("introduce un numero", 0));
var num2 = parseInt(prompt("ingresa otro numero", 0));

while (isNaN(num1) || isNaN(num2) || num1 < 0 || num2 < 0) {
    num1 = parseInt(prompt("introduce un numero", 0));
    num2 = parseInt(prompt("ingresa otro numero", 0));
}

console.log(`la suma es: ${num1+num2}`);
console.log(`la resta es: ${num1-num2}`);
console.log(`la multiplicacion es: ${num1*num2}`);
console.log(`la division es: ${num1/num2}`);