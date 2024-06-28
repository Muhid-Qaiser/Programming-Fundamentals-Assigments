#include<iostream>

using namespace std;

// Program that calculates the average of 2 numbers without arithmatic operators //

int main()
{
	// delcaring variables //
	
	int number1 , number2 , a ,b , vari1 , vari2 , vari3 , vari4 , vari5 , avg ;
	
	cout << " Enter any two numbers and i will calculate their average without using arithematic operators \n\n" ;
	
	cout << " Enter your first desired number \n " ;
	cin  >> number1 ;
	
	cout << " Enter your second desired number \n " ;
	cin  >> number2 ;
	
	// in a , we use ^ to add number1 and number2 without taking the carry        //
   //  in b , we use & to take the carry between number1 and number2             //	
  //   but the carry's binary position is one bit right of its correct position // 
 //    so we shift it one bit to the left                                      //
  	
	a = ( number1 ^ number2 ) ; // adding without the carry //
	
	b = ( number1 & number2 ) << 1 ; // calculating the position of the carry and shifting it one bit to the left //
	
	// we repeat this process again because after a ^ b , more carrys are found and  //
   //  we need to position them correctly and then add the carry with the sum       //
	
	vari1 = ( a ^ b ) ; // adding without the carry //
	
	vari2 = ( a & b ) << 1 ; // calculating the position of the carry and shifting it one bit to the left //
	
	
	vari3 = ( vari1 ^ vari2 ) ; // adding without the carry //
	
	vari4 = ( vari1 & vari2 ) << 1 ; // calculating the position of the carry and shifting it one bit to the left //
	
	vari5 = ( vari3 ^ vari4 ) ;  // adding the 2 variables //
	
	// now dividing the sum by shifting it one bit to the right //
	
	avg = vari5 >> 1 ; 
	
	// if the number1 and number2 are both even or odd , it'll print it as it is                                     //
   //  otherwise , it'll print a '.5' with it because int doesnt output decimals and binary of float is complicated //	
	
	if( ( ( number1 % 2 == 0 ) && ( number2 % 2 == 0 ) ) || ( ( number1 % 2 != 0 ) && ( number2 % 2 != 0 ) ) )
	{
		cout << "\n The average of " << number1 << " and " << number2 << " is : " << avg << endl ;
	}
	
	else
	{
		cout << "\n The average of " << number1 << " and " << number2 << " is : " << avg << ".5 \n " ;
	}
	
	
	return 0;
}
