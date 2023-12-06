#include <iostream>
using namespace std;

int menuPrincipal();
int registrarExport();
int reporteA();
int reporteB();
int reporteC();
int creditos();
int continuar();

int registrarExport(){

return 0;
}

int reporteA(){

return 0;

}
int reporteB(){

return 0;
}

int reporteC(){

return 0;
}

int creditos(){
    cout << "creditos" << endl;

return 0;
}

int continuar(){ /// Pregunta al usuario si desea volver al menu principal o salir, 1 retorna al menu, 2 sale del programa. 
    int opcion;
    cout << "1 - Volver al menu principal , 2 - Salir " << endl;
    cin >> opcion;

    return opcion;
}

int menuPrincipal(){
    int seguir;
    
    do {

        cout << "MENU PRINCIPAL" << endl;
        cout << "----------------" << endl;
        cout << "1 - Registrar exportaciones " << endl;
        cout << "2 - Reporte A" << endl;
        cout << "3 - Reporte B" << endl;
        cout << "4 - Reporte C" << endl;
        cout << "5 - Creditos" << endl;
        cout << "----------------" << endl;
        cout << "0 - Salir" << endl;

        int opc;
        cout << "Ingrese la opcion deseada: " << endl;
        cin >> ;

        switch (opc)
        {
        case 1:

            registrarExport();
            break;

        case 2:
            
            reporteA();
            break;

        case 3:
            
            reporteB();
            break;

        case 4:
            
            reporteC();
            break;

        case 5:
            
            creditos();
            seguir = continuar();
            break;

        case 0:
            return 0;
            break;

        default:
            cout << "Opcion invalida, intente nuevamente..." << endl;
            break;
        }
    } while ( seguir == 1);
    
    cout << "Fin del programa " << endl;
}








int main(){
   menuPrincipal();
    return 0;
}