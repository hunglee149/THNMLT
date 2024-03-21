#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <cstdlib>
#include "stdlib.h"
#include <fstream>

using namespace std;
using ll = long long;

#define task "hli"

int n;

struct Car
{
	char brand[20];
	unsigned int year;
	char model[25];
	char usedOrNew[4];
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

	Car tempCar;

	int it = 0;

	char brand[20];
	char year[4];
	char model[25];
	char usedOrNew[4];
	char price[10];
	
	while(inFile.getline(brand, ','))
	{
		inFile.getline(year, ',');
		inFile.getline(model, ',');
		inFile.getline(usedOrNew, ',');
		inFile.getline(price, '\n');

		strcpy(tempCar.brand, brand);
		tempCar.year = atoi(year);
		strcpy(tempCar.model, model);
		strcpy(tempCar.usedOrNew, usedOrNew);
		tempCar.price = atoi(price);

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
	coutFile << "Output: \n";
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
