#include<iostream>

using namespace std ;

// THIS IS PART B OF Q9                                     //
// Program which finds the greatest number among 4 numbers //

int main ()
{
	
	int num1 , num2 , num3 , num4 ;
	
	 
	cout<<"Enter four numbers and i will calculate which is greatest \n\n" ;
	
	cout << "Enter the first number \n" ;
	cin  >> num1 ;
	
	cout << "Enter the second number \n" ;
	cin  >> num2;
	
	cout << "Enter the third number \n" ;
	cin  >> num3;
	
	cout << "Enter the fourth nummber \n" ;
	cin  >> num4 ;
	
	cout << endl ;
	
	 
	( ( num1 == num2 ) && ( num2 == num3 ) && ( num3 == num4 ) ) ? cout << "All are equal" : ( ( num1 > num2 ) ? ( ( ( num1 > num3 ) ? ( ( num1 > num4 ) ? cout << num1 << " is greatest" : cout << num4 << " is greatest" ) : ( ( num3 > num4 ) ? cout << num3 << " is greatest" : cout << num4 << " is greatest" )  ) ) 
	: ( ( num2 > num3 ) ?  ( ( num2 > num4 ) ? cout << num2 << " is greatest" : cout << num4 << " is greatest" ) : ( ( num3 > num4 ) ? cout << num3 << " is greatest" : cout << num4 << " is greatest" )  ) ) ;
	

	
	return 0 ;
}
