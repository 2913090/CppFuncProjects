#include <iostream>
using namespace std;

struct Car {

    string number;
    string color;
    string model;
    int power;

};

struct Parking {
    string name;
    float price;
    int capacity;
    int count = 0;
    Car** cars = new Car * [0];
};


void carInfo(Car* car) {
    cout << "Number: " << car->number <<
        "\nColor: " << car->color <<
        "\nModel: " << car->model <<
        "\nPower: " << car->power << endl << endl;
}

Car* createCar(string number, string color, string model, int power) {
    Car* car = new Car;
    car->number = number;
    car->color = color;
    car->model = model;
    car->power = power;
    return car;
}

void parkCar(Parking& park, Car* car) {
    if (park.count >= park.capacity) {
        cout << "Parking is full" << endl;
        return;
    }
    for (int i = 0; i < park.count; i++) {
        if (park.cars[i] == car) {
            cout << "That car is already here\n";
            return;
        }
    }
    Car** buf = new Car * [park.count + 1];
    for (int i = 0; i < park.count; i++) {
        buf[i] = park.cars[i];
    }
    buf[park.count] = car;

    delete[] park.cars;
    park.cars = buf;
    park.count++;

}


void parkInfo(Parking park) {
    if (park.count == 0) {
        cout << "Park is empty\n\n";
        return;
    }
    cout << "Current cars on park: \n";
    for (int i = 0; i < park.count; i++)
    {
        cout << "Car " << i + 1 << endl;
        carInfo(park.cars[i]);
    }
}


void delCar(Parking &park, string number) {
    if (park.count == 0) {
        cout << "Park is empty\n";
        return;
    }
    bool flag = 1;
    for (int i = 0; i < park.count; i++) {
        if ((park.cars[i])->number == number) {
            flag = 0;
            break;
        }
    }
    if (flag) return;
    Car** buf = new Car * [park.count - 1];
    int index = -1;
    for (int k = 0, i = 0; i < park.count; i++) {
        if ((park.cars[i])->number != number) {
            buf[k++] = park.cars[i];
        }
    }
    delete[] park.cars;
    park.cars = buf;
    park.count--;
}
int main()
{
    Parking park1;
    park1.capacity = 100;
    park1.name = "Rostov Parking";
    park1.price = 3.5;

    Car* cr1 = createCar("A324PT", "white", "BMW M3", 450);
    Car* cr2 = createCar("F975TK", "black", "TOYOTA COROLA", 180);
    Car* cr3 = createCar("S798LO", "green", "MERSEDES AMG", 650);
    Car* cr4 = createCar("O809PF", "red", "LAND ROVER", 800);
    parkInfo(park1);
    parkCar(park1, cr1);
    parkCar(park1, cr1);
    parkCar(park1, cr3);
    parkCar(park1, cr4);
    parkInfo(park1);
    delCar(park1, cr1->number);
    parkInfo(park1);
}