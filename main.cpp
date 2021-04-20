#include <iostream>

using namespace std;

int main()
{
    int bit=0;
    unsigned int byte=0;
    unsigned long int matriz[4][4];
    int tamanio=4;//prueba con la mitad de la matriz
    for (int i=0;i<tamanio;i++){//filas
        cout<<"Ingrese los datos: ";
         cin>>byte;
         for (int j=0;j<tamanio;j++){//columnas
                bit=byte%10;
                //cout<<bit<<": bit"<<endl;//comprobar uno a uno
                matriz[i][j]=bit;

                byte/=10;
             }
    }
   for(int i=0;i<tamanio;i++){//imprime matriz con sus posiciones
       for(int j=0;j<tamanio;j++){
        cout<<matriz[i][j]<<"["<<i<<"]["<<j<<"]";
    }
    cout<<endl;
  }
    return 0;
}
