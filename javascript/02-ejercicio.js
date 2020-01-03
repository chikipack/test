'use strict'
//utilizando un bucle mostrar la suma y la media de los numero introducidos por el usuario 
//hasta introducir un numero negativo y ahi mostrar el resultado 

var suma = 0;
var contador = 0;
var numero = 0;
var media = 0;
do {
    numero = parseInt(prompt("introduce numero positivos, para finalizar ingresa un numero negativo", 0));
    if (isNaN(numero)) {
        numero = 0;
    } else if (numero >= 0) {
        //suma = suma + numero;
        suma += numero;
        contador++;
    }

} while (numero >= 0)
media = suma / contador;
alert(`la suma de los numeros ingresados es: ${suma}\ny la media es:${media}`);