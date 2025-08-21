#include <iostream>

using namespace std;

class Vehicle {
protected:
    string licenseId;
    string name;
    string model;
    double speed;
    double mass;

public:
    Vehicle() {
        cout << "Vehicle class is going to be constructed by default constructor..." << endl;
        speed = 0.0;
        mass = 0.0;
    }

    Vehicle(string lid, string n, string mo, double s, double ms) {
        cout << "Vehicle class is going to be constructed by 5-params constructor..." << endl;
        licenseId = lid;
        name = n;
        model = mo;
        speed = s;
        mass = ms;
    }

    Vehicle(double s, double m) {
        cout << "Vehicle class is going to be constructed by 2-params constructor..." << endl;
        speed = s;
        mass = m;
    }

    ~Vehicle() {
        cout << "Vehicle class is going to be destructed..." << endl;
    }

    void move() {
        cout << "This vehicle is moving with the speed of- " << speed << endl;
    }
};

class LandVehicle : public Vehicle {
protected:
    int noOfWheels;

public:
    LandVehicle() : Vehicle() {
        cout << "LandVehicle class is going to be constructed by default constructor..." << endl;
        noOfWheels = 1;
    }

    LandVehicle(int s, double m, int nw) : Vehicle(s, m) {
        cout << "LandVehicle class is going to be constructed by 3-params constructor..." << endl;
        noOfWheels = nw;
    }

    LandVehicle(string lid, string n, string mo, double s, double ms, int nw) : Vehicle(lid, n, mo, s, ms) {
        cout << "LandVehicle class is going to be constructed by 6-params constructor..." << endl;
        noOfWheels = nw;
    }

    ~LandVehicle() {
        cout << "LandVehicle class is going to be destructed..." << endl;
    }
};

class Car : public LandVehicle {
protected:
    int noOfRoofs;

public:
    Car() : LandVehicle() {
        cout << "Car class is going to be constructed by default constructor..." << endl;
        noOfRoofs = 0.0;
    }

    Car(int s, double m, int nw, int nr) : LandVehicle(s, m, nw) {
        cout << "Car class is going to be constructed by 4-params constructor..." << endl;
        noOfRoofs = nr;
    }

    Car(string lid, string n, string mo, double s, double ms, int nw, int nr) : LandVehicle(lid, n, mo, s, ms, nw) {
        cout << "Car class is going to be constructed by 7-params constructor..." << endl;
        noOfRoofs = nr;
    }

    ~Car() {
        cout << "Car class is going to be destructed..." << endl;
    }
};

class AirVehicle : public Vehicle {
protected:
    int noOfPropellers;

public:
    AirVehicle() : Vehicle() {
        cout << "AirVehicle class is going to be constructed by default constructor..." << endl;
        noOfPropellers = 1;
    }

    AirVehicle(int s, double m, int np) : Vehicle(s, m) {
        cout << "AirVehicle class is going to be constructed by 3-params constructor..." << endl;
        noOfPropellers = np;
    }

    AirVehicle(string lid, string n, string mo, double s, double ms, int np) : Vehicle(lid, n, mo, s, ms) {
        cout << "AirVehicle class is going to be constructed by 6-params constructor..." << endl;
        noOfPropellers = np;
    }

    ~AirVehicle() {
        cout << "AirVehicle class is going to be destructed..." << endl;
    }
};


class Jet : public AirVehicle {
protected:
    int noOfEngines;

public:
    Jet() : AirVehicle() {
        cout << "Jet class is going to be constructed by default constructor..." << endl;
        noOfEngines = 1;
    }

    Jet(int s, double m, int np, int ne) : AirVehicle(s, m, np) {
        cout << "Jet class is going to be constructed by 4-params constructor..." << endl;
        noOfEngines = ne;
    }

    Jet(string lid, string n, string mo, double s, double ms, int np, int ne) : AirVehicle(lid, n, mo, s, ms, np) {
        cout << "Jet class is going to be constructed by 7-params constructor..." << endl;
        noOfEngines = ne;
    }

    ~Jet() {
        cout << "Jet class is going to be destructed..." << endl;
    }
};

int main() {
    Car mercidies("DM-001", "Mercidies", "Benz", 0, 1000, 4, 2);
    mercidies.move();
    Jet f_29("DM-OO2", "F-29", "Russh", 0, 3000, 10, 2);
    f_29.move();


    return 0;
}
