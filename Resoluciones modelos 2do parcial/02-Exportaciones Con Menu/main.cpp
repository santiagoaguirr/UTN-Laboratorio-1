#include <iostream>
using namespace std;
#include <string>

void mostrarVector(int vec[], int tamanio);
int buscarPosMaxVector(int vec[], int tamanio);


void mostrarVector(int vec[], int tamanio){
    for(int i=0; i<tamanio; i++){
    cout << vec[i];
    }
}

int buscarPosMaxVector(int vec[], int tamanio){
    int max = vec[0];
    int posmax;

    for(int i = 0; i < tamanio; i++){
        if(vec[i] > max){
            max = vec[i];
            posmax = i;
        }
    }
    return posmax;
}



int main(){
    int anio, pais, producto, peso, importe;

    /// Vector punto A
    int vecExportPorAnio[5] = {0,0,0,0,0};
    /// Vector punto B
    int vecTonImpPorPais[10] = {0,0,0,0,0,0,0,0,0,0};
    // Vector punto C
    string vectorNombreProductos[8] = {"Soja", "Trigo", "Maiz", "Limon", "Naranja", "Manzana", "Carne Vacuna", "Mariscos"};
    int vectorGananciaProd[8] = {0,0,0,0,0,0,0,0};

    cout << "A continuacion, ingresara las exportaciones: " << endl;
    cout << "Ingrese anio de la venta: " << endl;
    cin >> anio;

    while(anio != 0){
        
        vecExportPorAnio[anio - 2016] += 1; // Al ingresar el año, se le resta 2016 para que coincida el vlaor
                                                //con la posicion en el vector
        cout << "Pais: ";
        cin >> pais;
        while(true){
            cout << "Codigo de producto: ";
            cin >> producto;

            if( producto >= 1 && producto <= 8){
                break;
            }else{
                cout << "Codigo invalido, por favor intente nuevamente.." << endl; 
            }
        }

        cout << "Indique peso en toneladas: ";
        cin >> peso;
        vecTonImpPorPais[pais - 101]+= peso;
        cout << "Importe en millones: ";
        cin >> importe;
        vectorGananciaProd[producto - 1]+= importe; // Sumo el importe de la venta del producto en el vectorGnanciaProd, en la posicion producto - 1.
        cout << "--------------------------------" << endl;
        cout << "DATOS INGRESADOS CORRECTAMENTE!" << endl;
        cout << "--------------------------------" << endl;
        system("pause");
        cout << "Ingrese anio de la venta: " << endl;
        cin >> anio;
    }
    system("cls");

/// PUNTO A
    cout << "Punto A: " << endl;
    int a = 2016;
    for(int i=0; i<5; i++){
        if(vecExportPorAnio[i]!=1){
            cout << a << ": " << vecExportPorAnio[i] << " ventas " << endl;
        } else {
                cout << a << ": " << vecExportPorAnio[i] << " venta " << endl;
            }
        a+=1;
    }

/// PUNTO B
    cout << endl;
    cout << "Punto B: " << endl;
    int paisMasImp;
    paisMasImp = buscarPosMaxVector(vecTonImpPorPais, 10);
    cout << "Codigo pais que mas importó: " << paisMasImp+101 << endl;
    cout << "Con un total de: " << vecTonImpPorPais[paisMasImp] << " toneladas!" << endl;


/// PUNTO C
    cout << endl;
    cout << "Punto C: " << endl;
    int cont = 0;
   while( cont < 8){
    if(vectorGananciaProd[cont] == 1){
        cout << vectorNombreProductos[cont] << ": " << vectorGananciaProd[cont] << " millon de pesos" << endl;
    }
    else {
    cout << vectorNombreProductos[cont] << ": " << vectorGananciaProd[cont] << " millones de pesos" << endl;
    }
    cont++;
   }


/// CREDITOS

    cout << " -----------------------------" << endl;
    cout << "          CodeMinds           " << endl;
    cout << "      Forjando el futuro      " << endl;
    cout << " -----------------------------" << endl;

/// SALIR

    cout << "Muchas gracias por utilizar nuestro software" << endl;

    return 0;
} 