#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	string str0 = "";
	getline(cin, str0);
	int n = stoi(str0);

	int t,k;
	cout << n << " =";
	

	if(n<=1)				//If value is 0 or 1.
	{
		cout<<" "<<n;
	}
	
	t = sqrt(n);			//If value is more than 1.
	k = 2;
	  
	while(k <= t)
	{
		if( !(n%k) )
		{
			n /= k;
			cout << " " << k;
			
			while( !n%k )
			{
				n /= k;
				cout << " " << k; 			
            }	
			 			
        t = sqrt(n); 
				
        } 	
			
    k++; 	
    }	
    
    if( n>1 ) cout << " " << n << endl;
	
	system("pause");
	return 0;
}
