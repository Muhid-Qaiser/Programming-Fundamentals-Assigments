#include<iostream>

#include<cstring>

using namespace std;

// program for a user to enter a password and the program checks if the password meets the criteria of a strong password or not //

int main()
{
	char v1,v2,v3,v4,v5,v6,v7,v8,v9,v10, ans;
	
	int lp = 0 , up = 0 , dg = 0 ; // lp = lower case , up = upper case , dg = digit //
	
	string f;
	
	// first take a 6 character password from the user //
	
	cout << "Enter your password of 6 characters one character at a time \n";
	
	cin  >> v1 >> v2 >> v3 >> v4 >> v5 >> v6 ;
    
    
	// concatinate the password into a string //
	
	f = f + v1 + v2 + v3 + v4 + v5 + v6;
	

	// ask the user if they want to continue on inputting their password or not //	
	
	cout<<"\nDo u want to proceed on with ur password? [y/n] \n";
	cin>>ans;
		
		// if user enters y or Y for yes //
		
		if (ans == 'y' || ans == 'Y')
		{	
			//  if user enters yes , alllow the user to enter 4 more characters into their password //
			
			cout<<"\nYou can enter 4 more characters\n";
			cin>>v7>>v8>>v9>>v10;
			
			
			cout << "\nPassword = "<<v1<<v2<<v3<<v4<<v5<<v6<<v7<<v8<<v9<<v10<<endl;
		 
		 // checking to see if the password contains any lower case letters //
		 
		 if ( ( ( v1 >= 'a' ) && ( v1 <= 'z' ) ) || ( ( v2 >= 'a' ) && ( v2 <= 'z' ) ) || ( ( v3 >= 'a' ) && ( v3 <= 'z' ) ) || ( ( v4 >= 'a') && ( v4 <= 'z' ) )
		  || ( ( v5 >= 'a' ) && ( v5 <= 'z' ) ) || ( ( v6 >= 'a' ) && ( v6 <= 'z' ) )  || ( ( v7 >= 'a' ) && ( v7 <= 'z' ) )  || ( ( v8 >= 'a' ) && ( v8 <= 'z' ) ) 
		   || ( ( v9 >= 'a' ) && ( v9 <= 'z' ) )  || ( ( v10 >= 'a' ) && ( v10 <= 'z' ) )    )
		  {
		  	lp++;
		  }
		 
		 // checking to see if the password contains any upper case letters // 
		 
		 if ( ( ( v1 >= 'A' ) && ( v1 <= 'Z' ) ) || ( ( v2 >= 'A' ) && ( v2 <= 'Z' ) ) || ( ( v3 >= 'A' ) && ( v3 <= 'Z' ) ) || ( ( v4 >= 'A' ) && ( v4 <= 'Z' ) )
		  || ( ( v5 >= 'A' ) && ( v5 <= 'Z' ) ) || ( ( v6 >= 'A') && ( v6 <= 'Z' ) )  || ( ( v7 >= 'A' ) && ( v7 <= 'Z' ) )  || ( ( v8 >= 'A' ) && ( v8 <= 'Z' ) ) 
		   || ( ( v9 >= 'A' ) && ( v9 <= 'Z' ) )  || ( ( v10 >= 'A' ) && ( v10 <= 'Z' ) )     )
		  {
		  	up++;
		  }
		  
		 // checking to see if the password contains any numbers //
		 
		  if  ( ( ( v1 >= '0' ) && ( v1 <= '9' ) ) || ( ( v2 >= '0' ) && ( v2 <= '9' ) ) || ( ( v3 >= '0' ) && ( v3 <= '9' ) ) || ( ( v4 >= '0' ) && ( v4 <= '9' ) )
		  || ( ( v5 >= '0' ) && ( v5 <= '9' ) ) || ( ( v6 >= '0' ) && ( v6 <= '9' ) )  || ( ( v7 >= '0' ) && ( v7 <= '9' ) )  || ( ( v8 >= '0' ) && ( v8 <= '9' ) ) 
		   || ( ( v9 >= '0' ) && ( v9 <= '9' ) )  || ( ( v10 >= '0' ) && ( v10 <= '9' ) )     )
		   {
		   	dg++;
		   }
		  
		  // using condition to see if the password is strong or not //
		  
		  if ( up == 1 && lp == 1 && dg == 1 )
		  {
		  	cout<<"\nThe password is strong\n" ;
		  }
		  
		  else
		  {
		  	cout<<"\nThe password is weak\n" ;
		  }
		 
		}
		
		
		// if user enters n or N for no //
		
		else if ( ans == 'n' || ans == 'N')
		{
			
		 cout << "\nPassword = " << v1 << v2 << v3 << v4 << v5 << v6 << endl ;
		 
		 
		 // checking to see if the password contains any lower case letters //
		 
		 if ( ( ( v1 >= 'a' ) && ( v1 <= 'z' ) ) || ( ( v2 >= 'a' ) && ( v2 <= 'z' ) ) || ( ( v3 >= 'a' ) && ( v3 <= 'z' ) ) || ( ( v4 >= 'a' ) && ( v4 <= 'z' ) )
		  || ( ( v5 >= 'a' ) && ( v5 <= 'z' ) ) || ( ( v6 >= 'a') && ( v6 <= 'z' ) )    )
		  {
		  	lp++;
		  }
		 
		 // checking to see if the password contains any upper case letters // 
		 
		 if ( ( ( v1 >= 'A' ) && ( v1 <= 'Z' ) ) || ( ( v2 >= 'A' ) && ( v2 <= 'Z' ) ) || ( ( v3 >= 'A' ) && ( v3 <= 'Z' ) ) || ( ( v4 >= 'A' ) && ( v4 <= 'Z' ) )
		  || ( ( v5 >= 'A' ) && ( v5 <= 'Z' ) ) || ( ( v6 >= 'A' ) && ( v6 <= 'Z' ) )    )
		  {
		  	up++;
		  }
		 
		 // checking to see if the password contains any numbers  // 
		 
		 if  ( ( (v1>='0') && ( v1<='9' ) ) || ( ( v2 >= '0' ) && ( v2 <= '9' ) ) || ( ( v3 >= '0' ) && ( v3 <= '9' ) ) || ( ( v4 >= '0' ) && ( v4 <= '9' ) )
		  || ( ( v5 >= '0' ) && ( v5 <= '9' ) ) || ( ( v6 >= '0' ) && ( v6 <= '9' ) )    )
		  {
		   	dg++;
		  }
		  
		  
		  // using condition to see if the password is strong or not //
		  
		  if ( up==1 && lp ==1 && dg==1)
		  {
		  	cout << "\nThe password is strong\n" ;
		  }
		  
		  else
		  {
		  	cout << "\nThe password is weak\n" ;
		  }
		 
		}
		
		// if an invalid input is entered //
		
		else 
		{
			
			cout << "\nInvalid Entry \n" 
				 << "Answer using only 'y' or 'n' \n" ;
			
		}

     
	return 0;
	
}
