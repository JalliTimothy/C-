#include<iostream>
#include<pthread.h>
#include<string>
#include<conio.h>
using namespace std;

void input();
void show();
void search();
void take();
void ret();
void taken();
void reg();

int x,i,p,k=1;
string se1;
string a[100];
string w[20] = {"","C++", "JAVA", "PYTHON", "C", "DBMS","OS","CN","SQL","MEAN","","c++","java","python","c","dbms","os","cn","sql","mean"};

int main()
{
	input();
	return 0;
}

void input()
{
	cout << endl;
	cout << " 1 -> show books " << endl ;
	cout << " 2 -> search book " << endl ;
	cout << " 3 -> Take a book " << endl ;
	cout << " 4 -> return book " << endl ;
	cout << " 5 -> show taken book " << endl ;
	cout << " 6 -> exit " << endl ;
	cout << endl ;
	cout << " enter the number you choice " << endl ;
	cin >> x ;
	switch(x)
	{
		case 1:
			show();
			break;
		case 2:
			search();
			break;
		case 3:
			take();
			break;
		case 4:
			ret();
			break;
		case 5:
			taken();
			break;
	}
}

void show()
{
	cout << "The books in library are " << endl;
	for(i=1;i<10;i++)
	{
		cout<< i << "->" << w[i] << endl;
	}
	
	input();
}
void search()
{
	cout << " enter the book name you want to search " << endl;
	cin >> se1;
	for (i=1;i<20;i++)
	{
		if (w[i] == se1)
		{
			p=i;
			cout << i%10 << "->" << w[i%10];
		}
	}
	if(se1==w[p])
	{
		i=i+1;
	}
	else 
	{
		cout << " no book is present " << endl;
		cout << " we will return to main library " << endl;
	}
	cout << endl;
	input();
}

void take()
{
	int sel;
	cout <<endl << "The books are" << endl << endl;
	for(i=1;i<10;i++)
	{
		cout<< i << " -> " << w[i] << endl;
	}
	cout << " 1 -> Want to take book " << endl;
	cout << " 2 -> return back to library" << endl;
	cout << endl << "enter the choice " << endl;
	cin >> sel;
	switch(sel)
	{
		case 1:
			reg();
			break;
		case 2:
			input();
			break;
	}
}
void reg()
{
	cout << " Your name" << endl;
	cin >> a[k];
	k=k+1;
	cout << " Book Name " << endl;
	cin >> a[k];
	k=k+1;
	cout << " Auther Name " << endl;
	cin >> a[k];
	k=k+1;
	cout << " Branch Name " << endl;
	cin >> a[k];
	k=k+1;
	cout << " Thank you for Takeing book " << endl;
	input();
}
void taken()
{
	cout << " Your name \t" ;
	cout << " Book Name \t" ;
	cout << " Auther Name \t" ;
	cout << " Branch Name " << endl ;
	cout << " -----------------------------------------------------------------------" << endl;
	if (k==1)
	{
		cout << endl <<"NO RECORDS PRESENT" << endl;
	}
	for (i=1;i<k;i++)
	{
		if (i%4 == 0)
		{
			cout << a[i] << endl;
		}
		else
		{
			
			cout << a[i];
			cout << "\t \t";
			
		}
	}
	input();
}
void ret()
{
	int y,x;
	string z;
	cout << " your name " ;
	cin >> z;
	for (i=0;i<k;i++)
	{
		if (a[i] == z)
		{
			y=i;
		}
	}
	for (i=0;i<k;i++)
	{
		if( (i>=y) and (k>=x) )
		{
			a[i] = a[i+4];
			x=i+4;
		}
	}
	k=k-4;
	taken();
}
