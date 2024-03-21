#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include "stdlib.h"
#include <fstream>

using namespace std;
using ll = long long;

#define task "hli"

int n;

struct Car
{
	string brand;
	unsigned int year;
	string model;
	string usedOrNew;
	unsigned int price;

	void print() 
	{
		if (usedOrNew == "USED") cout << "USED CAR: ";
       	else cout << "NEW CAR: ";
       	cout << brand << "," << year << "," << model << "," << usedOrNew << "," << price << endl;
    }
};

void ReadFile(char fileName[], Car car[], int &n)
{
	fstream inFile;
	inFile.open(fileName);
	string ignore;
	getline(inFile, ignore);

	if (!inFile.is_open())
	{	
		cout << "Khong mo duoc file!";
		return 0;
	}
	Car tempCar;

	int it = 0;

	string brand = "";
	string year = "";
	string model = "";
	string usedOrNew = "";
	string price = "";
	
	while(getline(inFile, brand, ','))
	{
		getline(inFile, year, ',');
		getline(inFile, model, ',');
		getline(inFile, usedOrNew, ',');
		getline(inFile, price, '\n');

		tempCar.brand = brand;
		tempCar.year = stoi(year);
		tempCar.model = model;
		tempCar.usedOrNew = usedOrNew;
		tempCar.price = stoi(price);

		car[it++] = tempCar;
	}
	n = it;

	fstream outFile;
	outFile.open("output.txt");

	if (!outFile.is_open())
	{
		cout << "Khong mo duoc file!";
		return;
	}

	for (int i = 0; i < it; i++)
	{
		car[i].print();
	}
	outFile.close();
	return;
}

int price[10000007];

void printCar(Car car[], int n, int year)
{
	int it = 0;
	cout << "Output: \n";
	cout << "-- " << year << " --" << endl;

	for (int i = 0; i < n; i++)
	{
		if (car[i].year == year && price[car[i].price] == 0)
		{
			car[i].print();
			price[car[i].price]++;
		}
	}
}

int main()
{
	char fileName[] = "carStudent.txt";
	Car car[100];
	ReadFile(fileName, car, n);
	printCar(car, n, 2023);
}
