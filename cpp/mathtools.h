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
    int contador=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            contador++;
        }
    }
    return (contador==2?true:false);
}