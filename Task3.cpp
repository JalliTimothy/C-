#include<iostream>
#include<pthread.h>
using namespace std;
void p1(char a[9]);
void p2(char a[9]);
void res1(char a[10]);
void res2(char a[10]);
char a[10] ={'0','1','2','3','4','5','6','7','8','9'};
int d=0;
int main()
 {
 	cout << "player 1 is ( X ) ";
	cout << "player 2 is ( O ) "<< endl << endl;
	int i,j=1;
 	for (i=1;i<=9;i++)
 	{
 		if(i%3 != 0)
 		{
 			cout << '\t' << a[i] ;
			cout << '\t';
			cout << '|';
		 }
		 else
		 {
		 	cout << '\t' << a[i];
		 }
		if ((i%3 == 0)&&(j<3))
		{
			cout <<endl << "--------------------------------------------"<< endl;
			j=j+1;
		}
	}
	cout << endl << endl;
	p1(a);
 }
 void p1(char a[9])
 {
 	int b,i;
 	cout << " Player 1 chance"<< endl;
 	cin >> b;
 	for(i=1;i<=9;i++)
 	{
 		if (i == b)
 		{
 			
 			a[i]='X';
		 }
	 }	
 	res1(a);
 	
 }
 void p2(char a[10])
 {
 	int c,i;
 	cout << " Palyer 2 chance"<< endl;
 	cin >> c;
 	for(i=1;i<=9;i++)
 	{
		if (i == c)
 		{
 			a[i]='O';
		 }
	 }
 	res2(a);
 }
 void res1(char a[9])
 {
 	int i,j=1;
 	for (i=1;i<=9;i++)
 	{
 		if(i%3 != 0)
 		{
 			cout << '\t' << a[i];
			cout << '\t';
			cout << '|';
		}
		else
		{
		 	cout << '\t' << a[i];
		}
		if ((i%3 == 0)&&(j<3))
		{
			cout <<endl << "--------------------------------------------"<< endl;j=j+1;;
		}
		
	}
	if ((a[1] == a[2]) && (a[2] == a[3]))
	{
		cout <<  "\n player 1 wins " << endl;
		exit(1);
	}
	else if((a[4] == a[5]) && (a[5] == a[6])) 
	{
		cout << "\n player 1 wins " << endl;
		exit(1);
	}
	else if ((a[7] == a[8]) && (a[8] == a[9])) 
	{
		cout << "\n player 1 wins " << endl;
		exit(1);
	}
	else if ((a[1] == a[4]) && (a[4] == a[7])) 
	{
		cout << "\n player 1 wins " << endl;
		exit(1);
	}
	else if ((a[2] == a[5]) && (a[5] == a[8])) 
	{
		cout << "\n player 1 wins " << endl;
		exit(1);
	}
	else if ((a[3] == a[6]) && (a[6] == a[9])) 
	{
		cout << "\n player 1 wins " << endl;
		exit(1);
	}
	else if ((a[1] == a[5]) && (a[5] == a[9])) 
	{
		cout << "\n player 1 wins " << endl;
		exit(1);
	}
	else if ((a[3] == a[5]) && (a[5] == a[7]))
	{
		cout << "\n player 1 wins " << endl;
		exit(1);
	}
	else 
	{
		cout <<endl;
	}
	d=d+1;
	cout << endl << endl;
	if  (d != 5)
	 {
	 	p2(a);
	 }
	 else
	{
		cout << " \n match draw "<< endl;
		exit(0);
	}
 }
 void res2(char a[9])
 {
 	int i,j=1;
 	for (i=1;i<=9;i++)
 	{
 		if(i%3 != 0)
 		{
 			cout << '\t' << a[i];
			cout << '\t';
			cout << '|';
		}
		else
		{
		 	cout << '\t' << a[i];
		}
		if ((i%3 == 0)&&(j<3))
		{
			cout <<endl << "--------------------------------------------"<< endl;j=j+1;
		}
	}
	if ((a[1] == a[2]) && (a[2] == a[3]))
	{
		cout <<  "\n player 2 wins " << endl;
		exit(1);
	}
	else if((a[4] == a[5]) && (a[5] == a[6])) 
	{
		cout << "\n player 2 wins " << endl;
		exit(1);
	}
	else if ((a[7] == a[8]) && (a[8] == a[9])) 
	{
		cout << "\n player 2 wins " << endl;
		exit(1);
	}
	else if ((a[1] == a[4]) && (a[4] == a[7])) 
	{
		cout << "\n player 2 wins " << endl;
		exit(1);
	}
	else if ((a[2] == a[5]) && (a[5] == a[8])) 
	{
		cout << "\n player 2 wins " << endl;
		exit(1);
	}
	else if ((a[3] == a[6]) && (a[6] == a[9])) 
	{
		cout << "\n player 2 wins " << endl;
		exit(1);
	}
	else if ((a[1] == a[5]) && (a[5] == a[9])) 
	{
		cout << "\n player 2 wins " << endl;
		exit(1);
	}
	else if ((a[3] == a[5]) && (a[5] == a[7]))
	{
		cout << "\n player 2 wins " << endl;
		exit(1);
	}
	else 
	{
		cout <<endl;
	}
	cout << endl << endl;
	p1(a);
 }

