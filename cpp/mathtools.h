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