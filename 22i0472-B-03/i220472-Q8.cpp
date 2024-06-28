#include<iostream>

#include<string>

using namespace std;

// function to separate ASCI and store it in a string 
string Decryption(unsigned long long int Encrypted)
{
	string res, reversed;
	
	int Letter, size;

	// storing asci of word in reversed form
	while (Encrypted > 0)
	{
		Letter = Encrypted % 100;
		
		Encrypted /= 1000;
		
		reversed += Letter;
	}

	// checking lenght of reverse string
	for (size = 0; reversed[size] != '\0'; size++);
	{
	}
	// storing it in int in correct order 
	for(int i=size-1 ; i>=0; i--)
	{
			res += reversed[i];
	}
	
	return res;
}

int main() 
{
	
	unsigned long long int encrypt , i  ;
	
	int j , mult , size ;
	
	string decode , rollnum , reversedrollnum ;
	
	
	cout << "Enter encrypted key : " ;
	
	cin  >> encrypt ;
	
	// function calling and assigning
	decode = Decryption ( encrypt ) ;
	
	cout << "\nDecrypted code : " << decode << endl ;
	

	i = encrypt ;
	
	// calculating the length of the code 
	for ( size = 0 ; i != 0 ; size++ )
	{
		i = i / 10 ;
	}
	
	i = encrypt ;
	
	// separating rollnum values from encrypted key 
		while ( i > 1000 )
	{
		if( i == encrypt && size == 14 )
	   		i /= 100 ;
	   		
	   	else if( i == encrypt && size == 17 )
		   	i /= 100000 ;	
		
		else
			i /= 1000 ;

	// retrieving the roll num in reversed order
	reversedrollnum +=  ( (i % 10 ) + 48 ) ;

	}
	
	// checking the lenght of the reversedrollnum 
	for ( size = 0 ; reversedrollnum[size] != '\0' ; size++ )
	{
	}
	
	// storing the rol num in correct order 
	for ( int j = size -1 ; j >= 0 ; j-- )
	{
		rollnum += reversedrollnum[j] ;
	}
		
		cout << "Roll number : " << rollnum ;
		
	
	
	
	return 0 ;
	
}
