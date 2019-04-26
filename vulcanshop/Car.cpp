#include <iostream>
#include "Car.h"

using namespace std;

Car::Car(CarBrand b, string m, int y){
    this->brand = b;
    this->model = m;
    this->year = y;
    cout << "New car added!"<<endl;
}

Car::~Car(){
    cout << brand << " " << model << " " << year << " deleted!" <<endl;
}

void Car::showData(){
    cout << "Brand:\t";
    switch(brand){
        case CarBrand::AUDI:
            cout << "Audi";
            break;
        case CarBrand::BMW:
            cout << "BMW";
            break;
        case CarBrand::MERCEDES:
            cout << "Mercedes";
            break;
        case CarBrand::VOLKSVAGEN:
            cout << "Volksvagen";
            break;
        case CarBrand::TOYOTA:
            cout << "Toyota";
            break;
    }

    cout <<"\nModel:\t"<<model<<endl;
    cout <<"Year:\t"<<year<<endl;
}

ostream& operator<<(ostream& os, Car& c){
	switch(c.brand){
		case CarBrand::AUDI:
			os << " Audi";
			break;
		case CarBrand::BMW:
			os << " BMW";
			break;
		case CarBrand::MERCEDES:
			os << " Mercedes";
			break;
        case CarBrand::VOLKSVAGEN:
            os << " Volksvagen";
            break;
        case CarBrand::TOYOTA:
            os << " Toyota";
            break;
	}
    os << c.model << " " << c.year;
    return os;
}

