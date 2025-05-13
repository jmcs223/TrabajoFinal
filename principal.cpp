#include <iostream>
using namespace std;

int main(){

    int linea, columna;

    cout<<"Ingresa el numero de lineas de la matriz"<<endl;
    cin>>linea;
    cout<<"Ingresa el numero de columnas de la matriz"<<endl;
    cin>>columna;
    cout<<"La matriz sera "<<linea<<"X"<<columna<<endl;

    int a[linea][columna];
    
    //Datos de matriz a
    cout<<"Ingresa los datos de la matriz a"<<endl;
    for (int i = 0; i < linea; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            cout<<"Elemento["<<i<<"]["<<j<<"]: "<<endl;
            cin>>a[i][j];
        }
    }

    cout<<"La matriz original es: "<<endl;
            for (int i = 0; i < linea; i++)
            {
                for (int j = 0; j < columna; j++)
                {
                cout<<a[i][j]<<"\t";
                }
                cout<<endl;
            }

    //Mostrando la matriz invertida
    cout<<"La matriz ingresada a es: "<<endl;
            for (int j = linea-1; j >= 0; j--)
            {
                for (int i = columna-1; i >= 0; i--)
                {
                cout<<a[j][i]<<"\t";
                }
                cout<<endl;
            }

    return 0;
}
