#include<string>

#include<iostream>

using namespace std;

int main()
{
	unsigned long long int Encrypted = 0;
	
	int size , roll1=0 , roll2=0 , roll3=0 , roll4=0 ;
	
	bool Invalid;
	
	string word , rollnum;

	// checking to see if the input is valid or not
	do {
		
		Invalid = false;

		cout << "Enter a Word : ";
		
		cin >> word ;

		size = 0;
		
		// running loop across the string to check its validity 
		for (size = 0; word[size] != '\0'; size++)
		{
			if ( word[size] < 'A' || word[size] > 'Z' )
				Invalid = true;
		}
		
		if (size > 6)
			Invalid = true;

	} while (Invalid);
	
	cout << "Enter roll number : " ;
	
	cin  >> rollnum ;
	
	// Storing each digit of rollnum in separate variables 
	roll1 = rollnum[0] - 48 ;
	
	roll2 = rollnum[1] - 48 ;
	
	roll3 = rollnum[2] - 48 ;
	
	roll4 = rollnum[3] - 48 ;
	

	// storing the ASCI of the word in INT except the last ASCI and incoporating the values of roll number as well
	for (int i = 0; i < size-1; i++)
	{
		
		Encrypted += word[i] ;
		
		Encrypted *= 10;
		
		
		if (i%4 == 0)
			Encrypted += roll1;
			
		else if (i%4 == 1)
			Encrypted += roll2;
			
		else if (i%4 == 2)
			Encrypted += roll3;
			
		else if (i%4 == 3)
			Encrypted += roll4;

		Encrypted *= 100; 
	}
	
	// storing the last ASCI of the word into the INT variable 
	Encrypted += word[size-1]  ;

	cout << endl << "Encrypted key : " << Encrypted << endl ; 
	
	return 0;
} 
