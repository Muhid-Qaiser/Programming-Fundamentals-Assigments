#include<iostream>

using namespace std ;

int main()
{
	// Declaring variables 
	int num, mult = 1, remainder, bin=0 , f=0 , result ;
	
	bool layer1v0=0 , layer1v1=0 , layer1v2=0 , layer1v3=0 , layer1v4=0 , layer1v5=0 , layer1v6=0 , layer1v7=0 , layer1v8=0 , layer1v9=0 , 
		 layer2v1=0 , layer2v2=0 , layer2v3=0 , layer2v4=0 ;  
	
	cout << " choose a nmber between 0-9 \n " ;
	
	cin>>num;
	
	// calculating binary 
	while( num != 0 )
	{
		remainder = num % 2 ;
		
		num = num / 2 ;
		
		bin = bin + (remainder * mult) ;
		
		mult = mult * 10 ;
	}
	
	// storing binary in variables 
	if ( num == 0 )
	{
		layer1v0 = 1 ;
	}
	
	else if ( num == 1 )
	{
		layer1v1 = 1 ;
	}
	
		else if ( num == 2 )
	{
		layer1v2 = 1 ;
	}
	
		else if ( num == 3 )
	{
		layer1v3 = 1 ;
	}
	
		else if ( num == 4 )
	{
		layer1v4 = 1 ;
	}
	
		else if ( num == 5 )
	{
		layer1v5 = 1 ;
	}
	
		else if ( num == 6 )
	{
		layer1v6 = 1 ;
	}
	
		else if ( num == 7 )
	{
		layer1v7 = 1 ;
	}
	
		else if ( num == 8 )
	{
		layer1v8 = 1 ;
	}
	
		else if ( num == 9 )
	{
		layer1v9 = 1 ;
	}
	
	//storing each binary in different variables 
	layer2v4 = bin % 10 ;
	
	layer2v3 = (bin/10) % 10 ;
	
	layer2v2 = (bin/100) % 10 ;
	
	layer2v1 = (bin/1000) % 10 ;
		
	
	// now converting binary to decimal
	switch ( layer2v4 )
	{
		
		case 1 :
			
				result = result + 1 ;
				
				break;
				
		case 0 :
		
				result = result + 0 ;
			
			
	}
	
	switch ( layer2v3 )
	{
		
		case 1 :
			
				result = result + 2 ;
				
				break;
				
		case 0 :
		
				result = result + 0 ;
						
	}
		
	switch ( layer2v2 )
	{
		
		case 1 : 
		
				result = result + 4 ;
				
				break;
				
		case 0 :
			
				result = result + 0 ;
	}
		
	switch ( layer2v1 )
	{
		
		case 1 :
			
				result = result + 8 ;
				
				break;
				
		case 0 :
		
				result = result + 0 ;
						
	}
		
			
	
	cout << " Binary : " << layer2v1 << layer2v2 << layer2v3 << layer2v4 << endl 
		 << " Resulting Decimal : " << result << endl  ; 
			
	
			
 return 0 ;			
			
}
