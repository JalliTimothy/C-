#include<iostream>
using namespace std;

void inp(int x);
void cho(int a,int b);
void add(int a ,int b ,int ch);


int main()
{
	int x=1;
	inp(x);
}
void inp(int x)
{
	int a,b;
	cout << "enterr the 1st number" << endl;
	cin >> a;
	cout << " enter the 2nd number" << endl;
	cin >> b;
	cout << endl << endl ;
	cho(a,b);
}
void cho(int a, int b)
{
	int ch;
	cout<< " 1 -> Addition" << endl ;
	cout<< " 2 -> Subtraction" << endl ;
	cout<< " 3 -> Multiplication" << endl ;
	cout<< " 4 -> Division " << endl ;
	cout<< " 5 -> Exit" << endl ;
	cout << endl << endl ;
	add(a,b,ch);
}
void add(int a,int b,int ch)
{
	int ch1;
	cout << "enter the choice " << endl;
	cin >> ch;
	cout << endl << endl ;
	switch(ch)
	{
		case 1:
			cout << " Addition Result is "<< a+b << endl;
			cout << endl;
			cout << " 1 -> To perform another Arithmetic operartion for same number " << endl ; 
			cout << " 2 -> To perform another Arithmetic operartion for another number " << endl ;
			cout << " 3 -> exit " << endl ;
			cout << " enter the choice " << endl ;
			cin >> ch1;
			cout << endl << endl ;
			if ( ch1 == 1 )
			{
				cho(a,b);
			}
			else if ( ch1 == 2 )
			{
				inp(ch);
			}
			else
			{
				exit(0);
			}
		case 2:
			cout << " Subtraction Result is "<< a-b << endl;
			cout << endl;
			cout << " 1 -> To perform another Arithmetic operartion for same number " << endl ; 
			cout << " 2 -> To perform another Arithmetic operartion for another number " << endl ;
			cout << " 3 -> exit " << endl ;
			cout << " enter the choice " << endl ;
			cin >> ch1;
			cout << endl << endl ;
			if ( ch1 == 1 )
			{
				cho(a,b);
			}
			else if ( ch1 == 2 )
			{
				inp(ch);
			}
			else
			{
				exit(0);
			}
		case 3:
			cout << " Multiplication result is " << a*b << endl;
			cout << endl;
			cout << " 1 -> To perform another Arithmetic operartion for same number " << endl ; 
			cout << " 2 -> To perform another Arithmetic operartion for another number " << endl ;
			cout << " 3 -> exit " << endl ;
			cout << " enter the choice " << endl ;
			cin >> ch1;
			cout << endl << endl ;
			if ( ch1 == 1 )
			{
				cho(a,b);
			}
			else if ( ch1 == 2 )
			{
				inp(ch);
			}
			else
			{
				exit(0);
			}
		case 4:
			cout << " Division result is " << a/b << endl;
			cout << endl;
			cout << " 1 -> To perform another Arithmetic operartion for same number " << endl ; 
			cout << " 2 -> To perform another Arithmetic operartion for another number " << endl ;
			cout << " 3 -> exit " << endl ;
			cout << " enter the choice " << endl ;
			cin >> ch1;
			cout << endl << endl ;
			if ( ch1 == 1 )
			{
				cho(a,b);
			}
			else if ( ch1 == 2 )
			{
				inp(ch);
			}
			else
			{
				exit(0);
			}
		case 5:
			break;
	}
}
