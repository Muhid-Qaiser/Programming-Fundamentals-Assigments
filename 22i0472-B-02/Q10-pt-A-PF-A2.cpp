#include<iostream>

using namespace std;

// THIS IS PART A OF Q10 //
// Program that tells you if the input entry is a small letter or not via ASCI values //

int main()
{
	// using char because the program will take in any character and check it //
	char letter ;
	
	cout << " Enter any character and I will tell you if it is a small alphabet or not \n " ;
	cin  >> letter ;
	
	// using conditions where we check if the ASCI value of the input is within the range of small letters or not //
	
	( ( letter >= 97 ) && ( letter <=122 ) ) ? cout << " It is a small letter!!\n" : cout << " It is not a small letter!! \n" ;
	

	
 return 0 ;
 
}
