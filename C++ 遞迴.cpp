#include <iostream>
using namespace std;

void hanoi (int ring,start,target,temp){
if (ring>0){
	hanoi (ring-1,start,target,temp);
	cout << "Move ring "<< right << "from"<< start << "to"<< target << "\n";
	hanoi (ring-1,start,target,temp);
    }
}

int main() {
	int n;
    while (cin >> n){
    	hanoi(n,'A','B','C');
    	cout<< "\n";
    }
	
	return 0;
}
