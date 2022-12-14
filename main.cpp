#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){
	ifstream myfile("./input.txt");
	string myText;
	
	//Total Number of Coffees ordered
	int coffeeTotal = 0;
	
	//Total Number of Orders
	int orderTotal = 0;
	
	//Get Values from File
	while (getline(myfile, myText)) {
  		// Output the text from the file
  		int currentNum = stoi(myText);
  		orderTotal += 1;
  		coffeeTotal += currentNum;
  		cout << "#" << orderTotal <<  " Order Amount: " << myText << " Total Coffees: " << coffeeTotal << endl;
  		
	}
	
	//Close the File
	myfile.close();
	
	//Amount of Coffee Water needed
	const int coffeeWater = coffeeTotal;
	
	//Amount of Coffee Grounds Needed
	const int coffeeGrounds = coffeeTotal * 2;
	
	//Give Output
	cout << endl << "--------------------------------------------" << endl << endl;
	cout << orderTotal << " Total Orders" << endl;
	cout << coffeeWater << " Cups of Water Needed" << endl;
	cout << coffeeGrounds << " oz of Coffee Grounds" << endl;
	
	
	
	
	return 0;
}
