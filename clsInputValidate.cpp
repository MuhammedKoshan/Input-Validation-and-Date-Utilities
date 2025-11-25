include <iostream>
#include "clsInputValidate.h";

using namespace std;


int main() {

	cout << clsInputValidate::IsNumberBetween(0, 1, 10) << endl;
	cout << clsInputValidate::IsNumberBetween(1.1, 0.0, 4.5) << endl;



	return 0;
}