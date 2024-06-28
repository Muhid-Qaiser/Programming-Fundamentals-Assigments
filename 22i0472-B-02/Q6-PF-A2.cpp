#include <iostream>

using namespace std;

//  Program which tells if the input entry is a multiple of 2 or not

int main()
{
	
	// vari1 is the number being checked. vari2 is used in helping to find out if vari1 is a multiple of 2 or not //
	
	int vari1 , vari2;
	
	cout << " Enter any number and i will tell you if it is a multiple of 2 or not\n " ;
	
	cin  >> vari1 ;
	
	// using bitwise & to find if vari2 == 0 or not which determines if the condition is true or false //
	
	vari2 =  ( vari1 & ( vari1 - 1 ) )  ; 
	
	// taking NOT of vari2 and then taking && of vari1 which is true and vari2 which can either be true or false //
	// this will determine if vari1 is a multiple of 2 or not //
	
	if (  vari1  &&  !( vari2 )  )
	{
		
	 cout << "\n " << vari1 << " is a multiple of 2 \n " ;	
	
	}
	
	else 
	{
		
	 cout << "\n " << vari1 << " is not a multiple of 2 \n " ;
	
	} 
	
	
 return 0;

}

