#include <iostream>

using namespace std;
#include "../tl/Controller.h"

int main() {
    Controller* controller = new Controller();
    int length;
    double number;
    cout << "Digite la cantidad de numeros\n";
    cin >> length;
    controller->init(length);
    for (int i = 0; i < controller->getLength(); ++i) {
        cout << "Digite el numero\n";
        cin >> number;
        controller->setNumber(number);
    }
    cout << "\nPromedio " << controller->average();
    cout << "\nMinimo " << controller->min();
    cout << "\nMaximo " << controller->max();
    return 0;
}
