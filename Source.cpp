#include <cstdlib>
#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float Nilai[10];
	int X, Y;
	
	cout << "Mau Berapa Data [1..10]: "; 
	cin >> Y;

	for (X = 0; X < Y; X++)
	{
		cout << "Nilai Ke: " << X + 1 << " = ";
		cin >> Nilai[X];
	}

	cout << endl;
	cout << setiosflags(ios::fixed);

	for (X = 0; X < Y; X++)
	{
		cout << "Nilai Ke: " << setprecision(2) << X + 1 << " = " << Nilai[X] << endl;
	}

	cout << endl;

	_getch();
	return 0;
}