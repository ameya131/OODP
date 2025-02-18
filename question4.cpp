#include <iostream>
using namespace std;
class SmartCar {
private:
    int speed;
public:
    static int speedLimit;  
    SmartCar() : speed(0) {} 
    static void setSpeedLimit(int newLimit)
     {
        speedLimit = newLimit;
        cout << "Speed limit set to " << speedLimit << " km/h\n";
    }

    void setSpeed(int newSpeed) 
    {
        if (newSpeed > speedLimit) 
        {
            cout << "Speed exceeds limit! Setting speed to " << speedLimit << " km/h\n";
            speed = speedLimit;
        } else 
        {
            speed = newSpeed;
            cout << "Speed set to " << speed << " km/h\n";
        }
    }

    void showSpeed() const {
        
        cout << "Current speed: " << speed << " km/h\n";
    }
};
int SmartCar::speedLimit = 50;

int main() {
    SmartCar car1, car2;

    car1.setSpeed(40);
    car2.setSpeed(60);

    SmartCar::setSpeedLimit(80);

    car1.setSpeed(90);
    car2.setSpeed(70);

    car1.showSpeed();
    car2.showSpeed();

    return 0;
}
