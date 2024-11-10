#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Declaración de funciones para cada sección
void registrarVisita();
void confirmarVisita();
void reagendarVisita();
void cancelarVisita();
void registrarProducto();
void consultarHistorial();
void generarAlerta();
void registrarCliente();
void actualizarCliente();
void registrarIncidencia();

// Funcion para obtener opcion valida
int obtenerOpcion() {
    int opcion;
    while (true) {
        cout << "Seleccione una opcion: ";
        if (cin >> opcion) {
            break; // Salir del bucle si la entrada es valida
        } else {
            cout << "Entrada invalida. Por favor, ingrese un numero.\n";
            cin.clear(); // Limpiar el estado de error de cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignorar la entrada incorrecta
        }
    }
    return opcion;
}

// Menu para Gestion de Visitas Programadas a Clientes
void menuVisitas() {
    int opcion;
    do {
        cout << "\n--- Gestion de Visitas Programadas a Clientes ---\n";
        cout << "1. Registrar Visita\n";
        cout << "2. Confirmar Visita\n";
        cout << "3. Reagendar Visita\n";
        cout << "4. Cancelar Visita\n";
        cout << "5. Salir\n";
        opcion = obtenerOpcion();

        switch (opcion) {
            case 1: registrarVisita(); break;
            case 2: confirmarVisita(); break;
            case 3: reagendarVisita(); break;
            case 4: cancelarVisita(); break;
            case 5: cout << "Saliendo del menu de visitas...\n"; break;
            default: cout << "Opcion invalida. Intente de nuevo.\n";
        }
    } while (opcion != 5);
}

void registrarVisita() {
    cout << "\n--- Registrar Visita Programada ---\n";
    cout << "Cliente: ";
    cout << "\nFecha de Visita: ";
    cout << "\nID de Visita: ";
    cout << "\nResponsable: ";
    cout << "\n\nRegistro completado.\n";
    cout << "Desea continuar? (1: Si / 2: No): ";
    if (obtenerOpcion() == 1) menuVisitas();
}

void confirmarVisita() {
    cout << "\n--- Confirmar Visita ---\n";
    cout << "ID de Visita: ";
    cout << "\nFecha de Visita: ";
    cout << "\nResponsable: ";
    cout << "\n\nConfirmacion completada.\n";
    cout << "Desea continuar? (1: Si / 2: No): ";
    if (obtenerOpcion() == 1) menuVisitas();
}

void reagendarVisita() {
    cout << "\n--- Reagendar Visita ---\n";
    cout << "ID de Visita: ";
    cout << "\nNueva Fecha de Visita: ";
    cout << "\nResponsable: ";
    cout << "\n\nReagendamiento completado.\n";
    cout << "Desea continuar? (1: Si / 2: No): ";
    if (obtenerOpcion() == 1) menuVisitas();
}

void cancelarVisita() {
    cout << "\n--- Cancelar Visita ---\n";
    cout << "ID de Visita: ";
    cout << "\nFecha de Visita: ";
    cout << "\nResponsable: ";
    cout << "\n\nCancelacion completada.\n";
    cout << "Desea continuar? (1: Si / 2: No): ";
    if (obtenerOpcion() == 1) menuVisitas();
}

// Menu para Seguimiento de Estado de Productos
void menuProductos() {
    int opcion;
    do {
        cout << "\n--- Seguimiento de Estado de Productos ---\n";
        cout << "1. Registrar Producto\n";
        cout << "2. Consultar Historial de Productos Vencidos\n";
        cout << "3. Generar Alerta de Vencimiento\n";
        cout << "4. Salir\n";
        opcion = obtenerOpcion();

        switch (opcion) {
            case 1: registrarProducto(); break;
            case 2: consultarHistorial(); break;
            case 3: generarAlerta(); break;
            case 4: cout << "Saliendo del menu de productos...\n"; break;
            default: cout << "Opcion invalida. Intente de nuevo.\n";
        }
    } while (opcion != 4);
}

void registrarProducto() {
    cout << "\n--- Registrar Producto ---\n";
    cout << "Nombre del Producto: ";
    cout << "\nCantidad: ";
    cout << "\nFecha de Entrega: ";
    cout << "\nFecha de Vencimiento: ";
    cout << "\n\nRegistro de producto completado.\n";
    cout << "Desea continuar? (1: Si / 2: No): ";
    if (obtenerOpcion() == 1) menuProductos();
}

void consultarHistorial() {
    cout << "\n--- Consultar Historial de Productos Vencidos ---\n";
    cout << "Cliente: ";
    cout << "\n\nConsulta completada.\n";
    cout << "Desea continuar? (1: Si / 2: No): ";
    if (obtenerOpcion() == 1) menuProductos();
}

void generarAlerta() {
    cout << "\n--- Generar Alerta de Vencimiento ---\n";
    cout << "Aqui se colocara la funcionalidad que generara una alerta de vencimiento.\n";
}

// Menu para Gestion de Clientes y Comunicacion
void menuClientes() {
    int opcion;
    do {
        cout << "\n--- Gestion de Clientes y Comunicacion ---\n";
        cout << "1. Registrar Cliente\n";
        cout << "2. Actualizar Cliente\n";
        cout << "3. Registrar Incidencia o Queja\n";
        cout << "4. Salir\n";
        opcion = obtenerOpcion();

        switch (opcion) {
            case 1: registrarCliente(); break;
            case 2: actualizarCliente(); break;
            case 3: registrarIncidencia(); break;
            case 4: cout << "Saliendo del menu de clientes...\n"; break;
            default: cout << "Opcion invalida. Intente de nuevo.\n";
        }
    } while (opcion != 4);
}

void registrarCliente() {
    cout << "\n--- Registrar Cliente ---\n";
    cout << "Nombre del Cliente: ";
    cout << "\nDireccion: ";
    cout << "\nContacto: ";
    cout << "\n\nRegistro de cliente completado.\n";
    cout << "Desea continuar? (1: Si / 2: No): ";
    if (obtenerOpcion() == 1) menuClientes();
}

void actualizarCliente() {
    cout << "\n--- Actualizar Cliente ---\n";
    cout << "Nombre del Cliente: ";
    cout << "\nNueva Direccion: ";
    cout << "\nNuevo Contacto: ";
    cout << "\n\nActualizacion completada.\n";
    cout << "Desea continuar? (1: Si / 2: No): ";
    if (obtenerOpcion() == 1) menuClientes();
}

void registrarIncidencia() {
    cout << "\n--- Registrar Incidencia o Queja ---\n";
    cout << "Cliente: ";
    cout << "\nFecha de Incidencia: ";
    cout << "\nDescripcion del Problema: ";
    cout << "\n\nRegistro de incidencia completado.\n";
    cout << "Desea continuar? (1: Si / 2: No): ";
    if (obtenerOpcion() == 1) menuClientes();
}

// Menu Principal
int main() {
    int opcion;
    do {
        cout << "\n--- Sistema de Gestion ---\n";
        cout << "1. Gestion de Visitas\n";
        cout << "2. Seguimiento de Productos\n";
        cout << "3. Gestion de Clientes\n";
        cout << "4. Salir\n";
        opcion = obtenerOpcion();

        switch (opcion) {
            case 1: menuVisitas(); break;
            case 2: menuProductos(); break;
            case 3: menuClientes(); break;
            case 4: cout << "Saliendo del sistema...\n"; break;
            default: cout << "Opcion invalida. Intente de nuevo.\n";
        }
    } while (opcion != 4);

    return 0;
}
