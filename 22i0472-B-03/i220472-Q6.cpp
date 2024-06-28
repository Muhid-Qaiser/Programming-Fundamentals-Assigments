#include<iostream>

using namespace std ;

int main()
{
	
	int diamonds , maxnum ;
	
	
	cout << " Enter number of diamonds : " ;
	
	cin  >> diamonds ;
	
	cout << " Enter the highest number : " ;
	
	cin  >> maxnum ;
	
	// loop to ouput maximum number for upper half of the diamond
	for ( int i = 0 ; i <= maxnum ; i ++ )
	{
		// loop to output number of upper half diamonds
		for ( int j = 0 ; j < diamonds ; j ++ )
		{
			// loop to get proper spacing before diamond
			for ( int space = maxnum - i ; space > 0 ; space --  )
					
					cout << " " ;
			// loop to print the numbers in the diamond in decsending order
			for ( int num = i ; num > 0 ; num -- )
			
					cout << num ;
			
			// loop to print the number in the diamond in ascending order
			for ( int num = 1 ; num <= i ; num ++ )
			
					cout << num ;
					
			// loops to get proper spacing after diamond
			for ( int space = maxnum - i ; space > 0 ; space -- )
			
					cout << " " ;				
			
			
		}
		
		cout << endl ;
		
	}
	
	
	// loop to ouput maximum number for lower half of the diamond
	for ( int i = maxnum - 1 ; i > 0 ; i -- )
	{
		
		// loop to output number of lower half diamonds
		for ( int j = 0 ; j < diamonds ; j ++ )
		{
			
			// loop to get proper spacing before diamond
			for ( int space = 1 ; space <= maxnum - i ; space ++ )
			
					cout << " " ;
			
			// loop to print the numbers in the diamond in decsending order
			for ( int num = i ; num > 0 ; num -- )
			
					cout << num ;
			
			// loop to print the numbers in the diamond in ascending order
			for ( int num = 1 ; num <= i ; num ++ )
			
					cout << num ; 				
			
			// loop to get proper spacing after diamond
			for ( int space = 1 ; space <= maxnum - i ; space ++ )
			
					cout << " " ;
		}
		
		cout << endl ;
		
	}
	
	
	
	
	
	return 0 ;
}
