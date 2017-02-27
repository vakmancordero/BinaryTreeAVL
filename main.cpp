#include "BinaryTreeAVL.h"

#include <QTextStream>
#include <QString>
#include <QFile>

#include <iostream>

using namespace std;

int main() {

    cout << "Universidad Politecnica de Chiapas" << endl;
    cout << "Ingenieria en Desarrollo de Software" << endl;
    cout << "\nEstructuras de datos avanzadas" << endl;
    cout << "BinaryTree AVL" << endl;

    cout << "\nArturo Cordero Muniz - 8o A" << endl;

    BinaryTreeAVL binaryTreeAVL;

    QString fileName = "C:\\Files\\Dataset\\Dataset.I.07.txt";

    QFile inputFile(fileName);

    bool inside = true;

    while (inside) {

        int option;

        cout << "\n----- Opciones -----\n" << endl;
        cout << "1. Agregar un nuevo elemento." << endl;
        cout << "2. Eliminar un elemento." << endl;
        cout << "3. Listar elementos." << endl;
        cout << "4. Exportar BinaryTree." << endl;
        cout << "5. Insertar por conjunto de datos." << endl;
        cout << "6. Vaciar BinaryTree." << endl;
        cout << "7. Salir." << endl;

        cout << "\nIngrese la opcion que desee realizar << ";

        cin >> option;

        switch (option) {

            case 1:

                cout << "Agregar..." << endl;

                cout << "\nIngrese un numero entero a agregar << ";

                int toAdd;

                cin >> toAdd;

                binaryTreeAVL.add(toAdd);

                break;

            case 2:

                cout << "Eliminar..." << endl;

                cout << "\nIngrese un numero entero a eliminar << ";

                int toDelete;

                cin >> toDelete;

                binaryTreeAVL.remove(toDelete);

                break;

            case 3:

                cout << "Listar..." << endl;

                binaryTreeAVL.inOrder(binaryTreeAVL.getRoot());

                break;

            case 4:

                cout << "Exportando..." << endl;

                binaryTreeAVL.show();

                break;

            case 5:

                cout << "Insertando datos..." << endl;

                if (inputFile.open(QIODevice::ReadOnly)) {

                   QTextStream in(&inputFile);

                   while (!in.atEnd()) {

                       int number = in.readLine().trimmed().toInt();

                       binaryTreeAVL.add(number);

                   }

                   inputFile.close();

                }

                break;

            case 6:

                cout << "Limpiando..." << endl;

                binaryTreeAVL.clear();

                break;

            case 7:

                cout << "Saliendo..." << endl;

                inside = false;

                break;

            default:

                cout << "Opcion incorrecta :(" << endl;

                break;
        }

    }

    cout << "Here" << endl;

    return 0;
}
