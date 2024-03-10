#pragma once
#include <iostream>
using namespace std;

class Transport 
{
protected:
    char* fuelType;

public:
    Transport();
    virtual ~Transport();

    virtual void setFuelType(const char* fuel);
    virtual const char* getFuelType() const;
    virtual void display() const;
};