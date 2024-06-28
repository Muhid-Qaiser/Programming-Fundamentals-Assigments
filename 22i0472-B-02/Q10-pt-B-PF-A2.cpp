#include<iostream>

using namespace std;

// THIS IS PART B OF Q10 //
// program that tells you if your input is a symbol or not using ASCI values //

int main()
{
	//decalaring using char because the input can be anything //
	
	char symbol ;
	
	cout << " Enter any symbol and I will tell you if it is a small alphabet or not \n " ;
	cin  >> symbol ;
	
	// setting conditions in ternary to check if the input is within the multiple interval ranges of ASCI values of symmbols //
	
	( ( ( symbol >= 33 ) && ( symbol <= 47 ) ) || ( (  symbol >= 58 ) && ( symbol <= 64 ) ) || ( ( symbol >= 91 ) && ( symbol <= 96 ) ) 
	|| ( ( symbol >= 123 ) && ( symbol <= 126 ) ) ) ? 	cout<<" It is a symbol!!\n " : 	cout<<" It is not a symbol!!\n " ;
	

	return 0 ;
	
}
