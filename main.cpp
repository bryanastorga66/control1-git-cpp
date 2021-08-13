// Example program
#include <iostream>
#include <string>


/* Si es grupo de 3 omitir este
    Este metodo deber retornar el elemento numero N de serie de fibonnaci
    1 1 2 3 5 8 13  21
    
    1 2 3 4 5 6 7   8 
*/
int fibonacci(int N) {
    return 0;
}

/* Imprimir en Navo numero primo
 // Ejemplo de programa numeros primos (Alex) 
#include <stdio.h>

int main() {
    int primos_por_mostrar, n, d;
    int es_primo;

    printf("Cuantos primos desea mostrar: ");
    scanf("%d", &primos_por_mostrar);

    n = 2;
    while (primos_por_mostrar > 0) {

        /* determinar si n es primo */
        es_primo = 1;
        for (d = 2; d < n; ++d) {
            if (n % d == 0) {
                es_primo = 0;
                break;
            }
        }

        /* mostrar el numero
         * y actualizar el contador */
        if (es_primo) {
            printf("%d ", n);
            primos_por_mostrar--;
        }
        n++;
    }

    printf("\n");
    return 0;
}

}

/* Determina si un numero es capicua o no.
    retorna 0 si no es capicua
    retoran 1 si es capicua
*/
int main(){
 int num,aux,resto,ni=0;
 
 cout<<"Ingrese numero"<<endl;
 cin>>num;
 
 aux=num;
 
 while(aux>0){
         resto=aux%10;
      aux=aux/10;
      ni=ni*10+resto;
 }
 
 if(ni==num){
  cout<<"1";
 }
 else{
  cout<<"0";
  
 }
 
 return 0;
}


/* Retornar el residuo de una division sin tulizar el operado residuo (modulo %) ni el operador de division (/)
*/
int residuo(int a, int b)
{
    int j=a;
    while(a<b)
    {
        a=a+j;
    }
    a=a-b;
    return a;
}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    cout<<residuo(a,b);
    return 0;
}


int main()
{
  std::string name;
  std::cout << "El fibonacci de 8 " << fibonacci(8) << std::endl;   // 21
  std::cout << "El primo numer 8 " << fibonacci(8) << std::endl;    // 19
  std::cout << "El primo numer 8 " << capicua(11211) << std::endl ;    // 1 
  std::cout << "El residuo de  13 entre 4 " << residuo(13, 4) << std::endl;    // 1 
}




