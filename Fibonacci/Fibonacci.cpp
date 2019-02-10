#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter your number: " << endl;
	string n;
	getline(cin, n);
	int n0 = stoi(n);
	int arr[n0];
	
	arr[0] = 0;
	arr[1] = 1;
		
	int arrLength = sizeof(arr)/sizeof(n0);
	
	for(int i=2; i<=arrLength+1; i++)
	{
		 arr[i] = arr[i-1]+arr[i-2];
	}
	
	cout << "Your Fibonacci numbers: " << endl;
	
	for(int i=0; i<arrLength; i++)
	{
		cout << arr[i] << " ";
	}
		
	system("pause");
	return 0;
}
