#include<fstream>
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main() {
//declaring variables
	string cityName;
	int fahrenheit, celcius;

	
	//Creating file object and to open the file
	ifstream inFile;
	inFile.open("FahrenheitTemperature.txt");

	//creates the file object 
	ofstream outFile;
	//Opens the file in "CelsiusTemperature.txt' using the output file object as well it creates the file if the file doesn't exist
	outFile.open("CelsiusTemperature.txt");

	//Checks if input file wont open
	if (!inFile) {
		cout << "File cannot be opened." << endl;
	}
	else {
		//reads the file 
	while (inFile >> cityName >> fahrenheit) {
			//Converts from fahrenheit temperature to celcius temperature
			celcius = (int)round(((fahrenheit - 32) * 5) / (double)9);
			//Writes the city name and celcius value on the celsius file
			outFile << cityName << " " << celcius << endl;
		}
	}

//this will close both files
	inFile.close();
	outFile.close();

	return 0;
}