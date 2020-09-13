#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	string n0;
	getline(cin, n0);
	int n1 = stoi(n0);

	double pi = double(atan(1)*4);
	
//	printf("Value pi = %.n0lf \n", pi);

	cout << fixed << setprecision(n1) << pi << endl;
	
	system("pause");
	return 0;
}
