#include<iostream>

using namespace std;


int main()
{
	float scale;
	
	cout << "Enter Scale : " ;
	
	cin  >> scale ;

	cout << "\n\n" ;

// making lots of small loops for accurate scaling
// using concepts such as 5*scale + 1*scale != 6*scale
	for (int i = 0; i < int(1 * scale); i++)
	{
		for (int j = 0; j < int(1 * scale); j++)
			cout << " " ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << " " ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << "*" ;
			
		for (int j = 0; j < int(1 * scale); j++)
			cout << "*" ;
			
		for (int j = 0; j < int(5 * scale); j++)
			cout << "*" ;
			
		for (int j = 0; j < int(1 * scale); j++)
			cout << "*" ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << "*" ;
			
		cout << endl ;
	}

	for (int i = 0; i < int(1 * scale); i++)
	{
		for (int j = 0; j < int(1 * scale); j++)
			cout << "-" ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << "-" ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << "*" ;
			
		for (int j = 0; j < int(1 * scale); j++)
			cout << "*" ;
			
		for (int j = 0; j < int(5 * scale); j++)
			cout << "*" ;
			
		for (int j = 0; j < int(1 * scale); j++)
			cout << "*" ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << "*" ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << "-" ;
			
		for (int j = 0; j < int(1 * scale); j++)
			cout << "-" ;
			
		cout << endl ;
	}

	for (int i = 0; i < int(11 * scale); i++)
	{
		for (int j = 0; j < int(1 * scale); j++)
			cout << " " ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << " " ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << "*" ;
			
		for (int j = 0; j < int(1 * scale); j++)
			cout << "*" ;
			
		for (int j = 0; j < int(5 * scale); j++)
			cout << "*" ;
			
		for (int j = 0; j < int(1 * scale); j++)
			cout << "*" ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << "*" ;
			
		cout << endl ;
	}

	for (int i = 0; i < int(18 * scale); i++)
	{
		for (int j = 0; j < int(1 * scale); j++)
			cout << " " ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << " " ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << "*" ;
			
		for (int j = 0; j < int(1 * scale); j++)
			cout << "|" ;
			
		for (int j = 0; j < int(5 * scale); j++)
			cout << "*" ;
			
		for (int j = 0; j < int(1 * scale); j++)
			cout << "|" ; 
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << "*" ;
			
		cout << endl;
	}

	for (int i = 0; i < int(4 * scale); i++)
	{
		for (int j = 0; j < int(1 * scale); j++)
			cout << " " ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << "|" ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << "*" ;
			
		for (int j = 0; j < int(1 * scale); j++)
			cout << "|" ;
			
		for (int j = 0; j < int(5 * scale); j++)
			cout << "*" ;
			
		for (int j = 0; j < int(1 * scale); j++)
			cout << "|" ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << "*" ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << "|" ;
			
		cout << endl;
	}

	for (int i = 0; i < int(1 * scale); i++)
	{
		for (int j = 0; j < int(1 * scale); j++)
			cout << " " ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << "-" ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << "-" ;
			
		for (int j = 0; j < int(1 * scale); j++)
			cout << "-" ;
			
		for (int j = 0; j < int(5 * scale); j++)
			cout << "-" ;
			
		for (int j = 0; j < int(1 * scale); j++)
			cout << "-" ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << "-" ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << "-" ;
			
		cout << endl;
	}

	for (int i = 0; i < int(3 * scale); i++)
	{
		for (int j = 0; j < int(1 * scale); j++)
			cout << " " ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << " " ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << "^" ;
			
		for (int j = 0; j < int(1 * scale); j++)
			cout << "^" ;
			
		for (int j = 0; j < int(5 * scale); j++)
			cout << "^" ;
			
		for (int j = 0; j < int(1 * scale); j++)
			cout << "^" ;
			
		for (int j = 0; j < int(2 * scale); j++)
			cout << "^" ;
			
		cout << endl;
	}
	
	return 0 ;
}

