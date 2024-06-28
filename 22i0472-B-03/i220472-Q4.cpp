#include <iostream>

#include <string>

using namespace std ;

int main()
{
	int remainder , numb , copyhex , copyoct , hexa=0 , octal=0 , mult = 1 ;
	
	char temp ;
	
	string hexadec ;
	
	
	cout << " Enter any decimal and I will convert it into a hexadecimal and octal \n " ;
	
	cin >> numb ;
	
	copyhex = numb ;
	
	copyoct = numb ;
	
	cout << endl ;
	
	// convert decimal to hexadecimal
	
	while ( copyhex > 0 )
	{
		
		remainder = copyhex % 16 ;
		
		copyhex = copyhex / 16 ;
		
		// using ternary to get alphabetical letters for hexadecimal 
		( remainder > 9 ) ? ( temp = remainder + 55 ) : ( temp = remainder + 48 ) ;
		
		hexadec = temp + hexadec ;
	
		
	}
	
	// convert decimal to octal
	
	mult = 1 ; 
	
	while ( copyoct > 0 )
	{
		
		remainder = copyoct % 8 ;
		
		copyoct = copyoct / 8 ;
		
		octal = octal + ( remainder * mult ) ;
		
		mult = mult * 10 ;
		
	} 
	
	cout << " Decimal :     " << numb  << endl
	     << " Hexadecimal : " << hexadec  << endl
	     << " Octal       : " << octal << endl ;
	
	return 0 ;
}

