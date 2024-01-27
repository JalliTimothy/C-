#include<ctime>
#include <cstdlib> 
#include <iostream> 
using namespace std; 

int main() 
{ 
	int x,n,c; 
	//srand(time(0)); 
	x= rand() % 50;
	cout << " enter the number you think" << endl ;
	cin >> n;
	while (x!=n)
	{
		if (x>n)
		{
			cout << " random value is bigger" << endl;
		}
		else
		{
			cout << " your value is bigger" << endl;
		}
		cout<<"choice another number" << endl;
		cin >> n;
		c =c+1;
	}
	if (x==n)
	{
		cout << "correct value" << endl;
		cout << "you have taken " << c << "time" ;
		
	}
	return 0; 
} 

// This code is contributed by Susobhan Akhuli

