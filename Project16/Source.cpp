#include "transport.h"
#include "car.h"
#include "ship.h"
#include "airplane.h"
#include "tram.h"
#include "motorcycle.h"

int main() 
{
    Transport* transports[5];
    int choice;
    char fuel[50];

    cout << "Create Transport Objects:" << endl;

    for (int i = 0; i < 5; ++i) {
        cout << "Choose type for transport " << (i + 1) << ":" << endl;
        cout << "1. Car" << endl;
        cout << "2. Ship" << endl;
        cout << "3. Airplane" << endl;
        cout << "4. Tram" << endl;
        cout << "5. Motorcycle" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
        case 1:
            transports[i] = new Car();
            break;
        case 2:
            transports[i] = new Ship();
            break;
        case 3:
            transports[i] = new Airplane();
            break;
        case 4:
            transports[i] = new Tram();
            break;
        case 5:
            transports[i] = new Motorcycle();
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }

        cout << "Enter fuel type for transport " << (i + 1) << ": ";
        cin >> fuel;
        transports[i]->setFuelType(fuel);
    }

    cout << "\nDisplaying Transport Information:" << endl;

    for (int i = 0; i < 5; i++) 
    {
        cout << "\nTransport " << (i + 1) << ":" << endl;
        transports[i]->display();
    }

    for (int i = 0; i < 5; i++) 
    {
        delete transports[i];
    }

    return 0;
}
