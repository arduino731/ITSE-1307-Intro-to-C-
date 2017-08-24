#include <iostream>
#include <string>
using namespace std;

class Car {

public:

	enum stickShiftState { Park, Reverse, Neutral, Drive };

private:
	string carMake;
	string carModelYear;
	float carSpeed;
	Car::stickShiftState stickShift;

public:

	Car(string make, string year) {
		carMake = make;
		carModelYear = year;
		carSpeed = 0;
		stickShift = Park;
	}

	string getCarModelYear() {
		return carModelYear;
	}

	void setCarModelYear(string ModelYear) {
		carModelYear = ModelYear;
	}

	string getCarMake() {
		return carMake;
	}

	void setCarMake(string Make) {
		carMake = Make;
	}

	float getCarSpeed() {
		return carSpeed;
	}

	void setCarSpeed(float Speed) {
		carSpeed = Speed;
	}

	stickShiftState getStickShift() {
		return stickShift;
	}

	void goFaster(void) {
		carSpeed = carSpeed + 5;
	}

	void slowDown(void) {
		if (carSpeed >= 5) {
			carSpeed = carSpeed - 5;
		}
		else {
			carSpeed = 0;
		}
	}



	void setStickShift(Car::stickShiftState gear) {
		if (stickShift == Drive && gear == Park && carSpeed != 0) {
			cout << "Gear changed from Drive to Park";
		}
		if (stickShift == Drive && gear == Reverse && carSpeed != 0) {
			cout << "Gear changed from Drive to Reverse";
		}
		stickShift = gear;
	}
};

int main() {

	Car vehicle("Toyota", "2019");

	cout << "Car Model Year " << vehicle.getCarModelYear() << endl;
	cout << "Car Make " << vehicle.getCarMake() << endl;
	cout << "Car State " << vehicle.getStickShift() << endl; 
	cout << "Car Speed " << vehicle.getCarSpeed() << endl;

	vehicle.setStickShift(Car::stickShiftState::Drive);



	for (int i = 0; i<60; i += 5) {
		vehicle.goFaster();
		cout << "Car Speed increased to:- " << vehicle.getCarSpeed() << endl;
	}



	for (int i = 0; i<60; i += 5) {
		vehicle.slowDown();
		cout << "Car Speed decreased to:- " << vehicle.getCarSpeed() << endl;
	}

	vehicle.setStickShift(Car::stickShiftState::Park);

	system("pause");
	return 0;
}