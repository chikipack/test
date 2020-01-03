'use strict'
// muestre los numeros divisores de un numero introducido en un prompt
var numero = parseInt(prompt("ingresa un numero", 1));

for (var i = 1; i <= numero; i++) {
    if (numero % i == 0) {
        console.log(`divisor ${i}`);
    }
}