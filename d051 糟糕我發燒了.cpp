#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double f;
	cin >> f;
	cout << fixed;
	cout << setprecision(3) <<(f-32) *5 / 9 <<"\n" ;
    return 0;
}
