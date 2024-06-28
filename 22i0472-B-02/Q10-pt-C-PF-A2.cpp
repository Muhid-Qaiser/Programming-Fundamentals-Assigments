#include<iostream>

using namespace std ;

// THIS IS PART C OF Q10 //
// Program that tells you whether the entered year is a leap year or not //

int main ()
{
	
	int year ;
	
	cout << "Enter your desired year and I will tell you if it is a leap year or not \n" ;
	cin  >> year ;

	cout << endl ;
	      
   // if the year is completely divisible by 4 but not completely divisible by 100 , it is a leap year //
  //  or if the year is completely divisible by 400 , it is a leap year ; else it is not a leap year  //
 //   using this logic in ternary op                                                                 // 

   ( ( ( year % 4 ) == 0 ) && ( ( year % 100 != 0 ) ) ) ?  cout << year << " is a leap year!!\n" :  ( ( ( year % 400 ) == 0 ) ?  cout << year << " is a leap year!!\n" :  cout << year << " is not a leap year!!\n" )   ;            

	
	return 0;
}
	
