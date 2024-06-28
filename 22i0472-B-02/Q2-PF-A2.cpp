#include <iostream>

#include<cstdlib>

#include <string>

#include<ctime>

using namespace std;

// Program of Hi-Lo game. User gets 5 chances to guess a number the computer has chosen //

int main () 
{
    int rad, guess, guess2 , chan=5 , check = 0 , x;
    
    srand(time(0)); // use srand to randomize value with time //
    
	rad = rand()%100+1; // use rand to make the computer choose a random number

	cout  << "This is a Number Guessing Game. " << endl 
		  << "I will choose a number between 1-100 and you have to guess it within 5 tires. " << endl << endl ;
	
	// check to see if the player has a chance to play //
	if( chan > 0 && chan <= 5)
	{
		
      	// taking the player's guess //
		cout << "Enter your first guess \n" ;
   		cin  >> guess ;
   		
   		// check to see if the guess is valid
   		if( guess > 0 && guess < 101)
		   {
  			
  			// check to see if you guessed correct //
   			if( ( guess == rad ) && ( guess >= 0 && guess <= 100) )
		    {
		    	
   			cout << "\nYou Win. \nYou guess correct "
			     << "in just " << ( chan-4 ) << " try \n" ;
   			chan = 10 ;
   			
		    }
		    
		    // check to see if your guess is high //
			else if( guess > rad  && ( guess >= 0 && guess <= 100) )
			{
			
				chan -- ;
				
				cout << "\nYou guessed high \n"
			    	 <<"You have " << chan << " tries left \n" ;
			     
			
			}
			
			
		    // check to see if your guess is low //
			else if( guess < rad  && ( guess >= 0 && guess <= 100))
			{
				chan--;
					
				cout << "\nYou guessed low \n"
				     << "You have " << chan << " tries left \n" ;
				     
				
			}
			
			}
		
	   // if the guess is invalid //	
	   else
	   {
	   	cout<<"\nInvalid Input\n";
	   }
	   
   }
   
   // check if you lost //
   else if ( chan == 0 ) 
   {
   	cout << "\nYou ran out of chances. \nYou Lost!\n" ;
   }

   // second try //
  // check to see if you have a chance to play again // 
   if ( chan > 0 && chan <= 5 ){
  
   cout << "\nEnter your second guess \n" ;
   cin  >> guess ;
    
   		
  		// checking if the guess is valid // 	
   		if ( guess > 0 && guess < 101 )
		   {
  			
  			// checking if the guess is correct //
   			if ( ( guess == rad ) && ( guess >= 0 && guess <= 100) )
		    {
		    	
   				cout << "\nYou Won. \nYou guess correct "
				     << "in just " << ( chan-2 ) << " tries \n" ;
   			
			   	chan = 10 ;
   			
		    }
		    
		    // checking if the guess is high //
			else if ( guess > rad  && ( guess >= 0 && guess <= 100) )
			{
				
				chan--;
				
				cout << "\nYou guessed high\n"
				     << "You have " << chan << " tries left \n" ;
			
			}
			
			// checking if the guess is low //
			else if ( guess < rad  && ( guess >= 0 && guess <= 100 ) )
			{
				
				chan -- ;
				
				cout << "\nYou guessed low\n"
			         <<"You have " << chan << " tries left \n" ;
				
			
			}
			
			}
		
	   // if the guess is invalid //
	   else 
	   {
	   	cout<<"\nInvalid Input \n";
	   }
	   
   }
   
   // checking if you ran out of chances //
   else if ( chan == 0 )
   {
   	cout<<"\nYou ran out of chances. \nYou Lost! \n";
   }
   
   // third try //
   // checking if you have a chance to play again //
  	if (chan > 0 && chan <= 5)
	  {

		cout << "\nEnter your third guess \n" ;
   		cin  >> guess ;
   		
   		// checking if the guess is valid //
   		if ( guess > 0 && guess < 101 )
		   {
  			
  			// checking if the guess is correct //
   			if ( ( guess == rad ) && ( guess >= 0 && guess <= 100) )
		    {
		    	
   				cout << "\nYou Won. \nYou guess correct "
				     << "in just " << (chan) <<" tries \n" ;
			     
   				chan = 10;
   			
		    }
		    
		    // checking if the guess is high //
			else if ( guess > rad  && ( guess >= 0 && guess <= 100) )
			{
				
				chan-- ;
					
				cout << "\nYou guessed high\n"
					 << "You have " << chan << " tries left \n" ;
	
			}
			
			// checking if the guess is low //
			else if ( guess < rad  && ( guess >= 0 && guess <= 100) )
			{
					chan--;
					
					cout << "You guessed low \n"
			    	     << "You have " << chan <<  " tries left \n" ;
			
			}
			
			}
		
	   // if the guess is invalid //	
	   else
	   {
	   	cout << "\nInvalid Input \n";
	   }
  
   }
    
   // checking if you have run out of chances //  
   else  if ( chan == 0 )
   {
   	cout << "\nYou ran out of chances. \nYou Lost! \n";
   }
   
   // fourth try //
   // checking to see if you have a chance to play again //
   	if ( chan > 0 && chan <= 5 )
	   {

		cout << "\nEnter your fourth guess \n" ;
   		cin  >> guess;
   		
   		// checking to see if the guess is valid //
   		if( guess > 0 && guess < 101 )
		{
  
  			// checking to see if the guess is correct //
   			if ( ( guess == rad ) && ( guess >= 0 && guess <= 100) )
		    {
		    	
   				cout << "\nYou Won. \nYou guess correct "
				     << "in just " << ( chan + 2 ) << " tries \n" ;
   			
				chan = 10 ;
   			
		    }
		    
		    // checking to see if the guess is high //
			else if ( guess > rad  && ( guess >= 0 && guess <= 100) )
			{
				chan--;
					
				cout << "\nYou guessed high \n"
			    	 << "You have "<< chan <<" tries left \n";
			    	 
			}
			
			// checking to see if the guess is low //
			else if ( guess < rad  && ( guess >= 0 && guess <= 100) )
			{
				chan--;
				
				cout << "\nYou guessed low \n"
			         << "You have " << chan << " tries left \n";
				
			}
			
			}
	   
	   // if guess is invalid //	
	   else
	   {
	   	cout << "\nInvalid Input \n";
	   }
	   
   }
   
   // checking to see if you ran out of chances //
   else  if ( chan == 0 )
   {
   	cout << "\nYou ran out of chances. \nYou Lost!\n";
   }
   
   // fifth try //
  // checking to see if you have a chance to play // 
   	if( chan > 0 && chan <= 5 )
	   {

		cout << "\nEnter your fifth guess \n" ;
   		cin  >> guess ;
   		
   		// checking to see if the guess is valid //
   		if ( guess>0 && guess < 101 ){
  
  			// checking to see if the guess is correct //
   			if ( ( guess == rad ) && ( guess >= 0 && guess <= 100) )
		    {
		    	
   				cout << "\nYou Won. \nYou guess correct "
				    << "in just " << ( chan+4 ) << " tries \n" ;
			    
   				chan = 10;
   			
		    }
		    
  			// checking to see if the guess is high //
			else if ( guess > rad  && ( guess >= 0 && guess <= 100 ) )
			{
				chan--;
					
				cout << "\nYou guessed high \n"
			    	 << "You have " << chan << " tries left \n" ;
				
			}
			
  			// checking to see if the guess is low //
			else if ( guess < rad  && ( guess >= 0 && guess <= 100 ) )
			{
				chan--;
				
				cout << "\nYou guessed low \n"
			         << "You have " << chan << " tries left \n";
				
			}
			
			}
	 
	   // if the guess is invalid //	
	   else
	   {
	   	cout << "\nInvalid Input\n" ;
	   }
	   
   }
   
   // checking if you ran out of chances //
   else if ( chan == 0 )
   {
   	cout << "\nYou ran out of chances. u Lost!\n" ;
   }
   
   cout << "\nThe computer guessed : " << rad << endl ; // this is what the computer chose //
   
   cout << "\nGame over\n" ;
   	
    

    return 0;
}
