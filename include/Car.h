#ifndef CAR_H
#define CAR_H
#include<string>
class Car {
private:
	std::string make;
	std::string model;
	int year;
	double price;

public:
	Car(std::string, std::string, int, double);
	std::string getMake() const;
	std::string getModel() const;
	int getYear() const;
	double getPrice() const;
};

#endif
