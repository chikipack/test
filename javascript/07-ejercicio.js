'use strict'
//tabla de multiplicar de un numero introducido por pantalla

var numero = parseInt(prompt("de que numero quieres la tabla?", 1));
for (var i = 1; i <= 10; i++) {
    console.log(`${numero}x${i} = ${numero*i}`);
}