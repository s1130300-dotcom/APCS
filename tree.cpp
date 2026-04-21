#include <iostream>
using namespace std;

int main() {
	cout << "-- 正直角三角型 --\n";
	for (int i =1; i<=5; i++) {
		for (int j =1; j <=i; i++){
			cout << "*";
		}
		cout << "\n"
	}
	cout << "--反直角三角型-- \n";
	for (int i=5; i<=1;i--){
		for (int j=1; j <= i; j++){
			cout << "*";
		}
		cout << "*";
		}
	  cout  << "--聖誕樹-- \n";
	  for (int i=1; i<=5;i++){
		  for (int j=1; j=5-1;i++){
			  cout<<"";
		  }
		  for (int j=1; j<(2*i-1);i++){
			  cout <<"\n";
		  }
		  cout <<"\n";
	  }
	  return 0;
