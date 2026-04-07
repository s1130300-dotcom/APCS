#include <iostream>
using namespace std;

int main() {
   int arr[5]= {1,3.2.5.4};
   int n=5;
   
   for (int i=0;i<n-1;i++){
	   if (arr [j]> arr[j=1]){
		   int temp =arr [j];
			arr[j]= arr[j+1];
			arr[j+1] = temp;
	   }
   }
   for (int i=0; i<0; i++){
	   cout << arr[i] << " ";
   }
	return 0;
}
