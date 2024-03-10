#include "transport.h"

Transport::Transport() 
{
    fuelType = nullptr;
}

Transport::~Transport() 
{
    delete[] fuelType;
}

void Transport::setFuelType(const char* fuel) 
{
    if (fuelType != nullptr) 
    {
        delete[] fuelType;
    }
    size_t length = strlen(fuel);
    fuelType = new char[length + 1];
    strcpy_s(fuelType, length + 1, fuel);
}

const char* Transport::getFuelType() const 
{
    return fuelType;
}

void Transport::display() const 
{
    if (fuelType != nullptr) 
    {
        cout << "Fuel Type: " << fuelType << endl;
    }
    else 
    {
        cout << "Fuel Type: Not specified" << endl;
    }
}