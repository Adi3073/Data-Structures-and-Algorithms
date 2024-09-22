// Car Class

#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

class Car {
protected:
    int noOfGear;
    string color;

public:
    Car(int noOfGear, const string& color) : noOfGear(noOfGear), color(color) {}

    void printCarInfo() {
        cout << "noOfGear: " << noOfGear << "color: " << color << endl;
    }
};

class RaceCar : public Car {
private:
    int maxSpeed;

public:
    RaceCar(int noOfGear, const string& color, int maxSpeed) : Car(noOfGear, color), maxSpeed(maxSpeed) {}

    void printRaceCarInfo() {
        cout << "noOfGear: " << noOfGear <<endl;
        cout<<"color: " << color << endl;
        cout<<"maxSpeed: " << maxSpeed << endl;
    }
};

int main() {
    int noOfGear, maxSpeed;
    string colour;
    cin >> noOfGear >> colour >> maxSpeed;

    RaceCar raceCar(noOfGear, colour, maxSpeed);
    raceCar.printRaceCarInfo();

    return 0;
}
