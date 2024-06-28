#include<iostream>

using namespace std;

// Program to find out which quadrilateral the user is thinking about //

int main()
{
	char ans ;
	
	cout << " Think of a quadrilateral and I will guess it \n"
	     << " Answer by only entering [y/n] \n\n"
	     << " Does the quadrilateral have 4 equal sides ? \n ";
	cin  >> ans ;
	
	// if user enter 'y' than it has to either be a square or a rhombus //
	
	if ( ( ans == 'Y' ) || ( ans == 'y' ) )
	{
		
		cout << " Does the quadrilateral have all 90 degree angles ? \n ";
		cin >> ans ;
		
		// square has all equal and perpendicular sides //
		
		if ( ( ans == 'Y' ) || ( ans == 'y' ) )
		{
			cout << "\n It is a sqaure! \n";
			
		}
		
		// rhombus has equal but not perpendicular sides //
		
		else if ( ( ans == 'N' ) || ( ans == 'n' ) )
		{
			cout << "\n It is a Rhombus! \n";
			
		}
		
		// if the input is invalid //
		
		else {
		
		cout << "\n Invalid input \n"
		     << " Answer by only entering [y/n] ";
		
    	}
	
		
	}
	
	// if all sides are not equal //
	
	else if ( ( ans == 'N' ) || ( ans == 'n' ) )
	{
		cout << "\n Does the quadrilateral have a pair of 2 equal sides ? \n ";
		cin  >> ans ;
		
		//  quadrilateral with a pair of 2 equal sides is either a rectangle , kite , parallelogram //  
		
		if ( ( ans == 'Y' ) || ( ans == 'y' ) )
		{
			
			cout << "\n Does the quadrilateral have all 90 degree angles ? \n ";
			cin  >> ans ;
			
			// a pair of 2 equal sides and all 90 degrees angle is a rectangle //
			
			if ( ( ans == 'Y' ) || ( ans == 'y' ) )
			{
				cout << "\n It is a rectangle! \n";
				
			 } 
			 
			 
			else if ( ( ans == 'N' ) || ( ans == 'n' ) )
			{
				cout << "\n Are the opposite sides of the quadrilateral parallel to each other ? \n ";
				cin  >> ans ;
				
				// 	when opposite sides of a quadrilateral are parallel and not 90 degrees, it is a parallelogram //		
					
				if ( ( ans == 'Y' ) || ( ans == 'y' ) )
				{
					cout << "\n It is a parallelogram! \n";
					
				}
				
				
				// 	when opposite sides of a quadrilateral are not parallel and not 90 degrees , it is a kite //
				
				else if ( ( ans == 'N' ) || ( ans == 'n' ) )
				{
					
					cout << "\n It is a Kite \n";
					
				}
				
				// if input is invalid //
				
				else {
		
	              	cout << "\n Invalid input \n"
		             << " Answer by only entering [y/n] ";
		
             	}
	
				
			} 
			 
			// if input is invalid // 
			
			else 
			{
		
	            cout << "\n Invalid input \n"
		             << " Answer by only entering [y/n] ";
		
            }
			 
		}
		
		// if a quadrilateral does not contain a pair of 2 equal sides  , it is a trapzium //
		
		else if ( ( ans == 'N' ) || ( ans == 'n' ) )
		{
			
			cout << " \n It is a trapzium! \n";
			
		}
		
		// if input is invalid //
		
		else 
		{
		
		cout << "\n Invalid input \n"
		     << " Answer by only entering [y/n] ";
		
        }
	
		
	}
	
	// if input is invalid //
	
	else {
		
		cout << "\n Invalid input \n"
		     << " Answer by only entering [y/n] ";
		
	}
	
	
	
	
	return 0;
}
