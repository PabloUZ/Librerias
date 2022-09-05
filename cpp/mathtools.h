/**
 * Libreria con utilidades para operaciones matematicas
 * @author Pablo U.
 * @version 1.0.0
 */




/**
 * Verifica si un numero es primo (divisible unicamente por uno y por si mismo)
 * @param numero El numero a verificar
 * @return True si es primo, False si no lo es
*/
bool esPrimo(int n);


bool esPrimo(int n){
    int contador = 2;
    bool primo = true;
    while (contador < n && primo){
        if (n%contador == 0) primo = false;
        contador++;
    }
    return primo;
}