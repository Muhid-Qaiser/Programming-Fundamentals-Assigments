#include<iostream> 

#include<string>

using namespace std ;

int main()
{
	string sentence , subword , checkvar , reverse  ;
	
	int count_subword=0 , count_character=0 , count_word=0 , count_symbol=0 , j=0 , check , size=0 , a ; 
	
	
	cout    << "Enter a Sentence : " ;
	getline( cin , sentence ) ;
	
	cout << "Enter a Subword : " ;
	cin  >> subword ;
	
	// running a loop across string to see all its elements 
	for ( size  ; sentence[size] != '\0' ; size++ )
	{
		// using spaces as a point to isolate a word
		if ( sentence[size] == 32 )
			{
				
					count_word++ ;
					
					// isolating the word to compare it with subword later
					while ( sentence[j] != sentence[size] )
					{
						checkvar += sentence[j] ;
						j++ ;
					}
					
					j++ ;
					
					// taking lenght of word
					for ( a=0 ; checkvar[a] != '\0' ; a++ )
					{
					}
					
					// taking reverse of word
					for ( int k = a-1 ; k>= 0 ; k-- )
						reverse += checkvar[k] ;
					
					// comparing word and its reverse with subword
					if ( checkvar == subword || reverse == subword )
						count_subword++ ;
					
					checkvar = "" ;
					
					reverse = "" ;
			}
			
			// checking for special characters 
		if ( ( sentence[size] >= 33 && sentence[size] <=47 ) || ( sentence[size] >= 58 && sentence[size] <= 64 ) || ( sentence[size] >= 91 && sentence[size] <= 96 ) ||
			 ( sentence[size] >= 122 && sentence[size] <= 126 )   )
			 	count_symbol++ ;
			 	
	
		
	}
	
		// checking once again after the last space 
		while ( sentence[j] != sentence[size] )
					{
						checkvar += sentence[j] ;
						j++ ;
					}
					
	
			for ( a=0 ; checkvar[a] != '\0' ; a++ )
					{
					}
					
					for ( int k = a-1 ; k>= 0 ; k-- )
						reverse += checkvar[k] ;
					
					
					if ( checkvar == subword || reverse == subword )
						count_subword++ ;
	

	
		count_character = size-1 ;
	
	
		cout << "\nSubword repeat : "  << count_subword << " times" 
			 << "\nNumber of words : " << count_word+1 
			 << "\nNumber of characters : " << count_character+1 
			 << "\nNumber of special characters : " << count_symbol ;
	
	
	
	
	
	return 0 ;
}
