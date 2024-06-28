#include<iostream>

using namespace std;

// Program that tells you if the input entry is even or odd using bitwise operators only //
// We do this by finding the right most binary digit. 0 = even , 1 = odd                //

int main ()
{
	// declaring variables //
	
	int num, stor1, stor2;
	bool result ;
	
	cout << " Hi, I can tell you if a number is even or odd " << endl
	     << " Enter a number \n " ;
	cin  >> num ;
	
	//  taking num and shifting it's binary 31 bits to 	the left                    //
   // to clear any uncessary binary digits other than the right most binary digit  //
	
	stor1 = ( num << 31 ) ;
	
	// now shifting stor1 back 31 bits to the right.                              //
   // we will either get 0 or 1. which can also be taken as either true or false //
	
	stor2 = ( stor1 >> 31) ;
	
	// now putting the value of stor2 which is either true or false in bool result //
	
	result = stor2;
	
	// placing result in a ternary operator and simply finding out if it is even or odd. //
	// 0 = even , 1 = odd                                                               //
	
	(result) ? cout << "\n " << num << " is odd " : cout << "\n " << num << " is even " ;

	return 0 ;
}
