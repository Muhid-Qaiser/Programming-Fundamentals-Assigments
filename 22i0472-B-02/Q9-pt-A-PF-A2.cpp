#include<iostream>

using namespace std ;


// 	THIS IS PART 1 OF Q9 //
//  Program which finds the greatest number among 3 numbers //

int main ()
{
	//declaring variables //
	
	int x , y , z ;
	
	
	cout<<"Enter three numbers and i will calculate which is greatest \n\n" ;
	
	cout << "Enter the first number \n" ;
	cin  >> x ;
	
	cout << "Enter the second number \n" ;
	cin  >> y;
	
	cout << "Enter the third number \n" ;
	cin  >> z;
	
	// using nested ternary op to simply which number is greatest //
	
	( (x==y) && (y==z) ) ? cout<<"\nAll are equal" : ( ( x > y ) ? ( ( x > z ) ? cout<<endl<<x<<" is greatest\n" : cout<<endl<<z<<" is greatest\n") : ( ( y > z ) ? cout<<endl<<y<<" is greatest\n" : cout<<endl<<z<<" is greatest\n" ) ) ;
	 
	 
 return 0 ;
	
}
