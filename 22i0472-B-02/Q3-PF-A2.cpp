#include<iostream>

using namespace std;

// Program to see how many complete toys you can make with a certain amount of parts //

int main ()
{
	int body, wheel, ppl, total ;
	
	cout << " Enter number of parts of body , wheels and people you have " << endl  
		 << " and I will tell you how many complete toys you can make \n\n" ;
	
	// asking the user to input the number of parts //
	cout<<" Enter Body \n ";
	cin>>body;
	
	cout<<" Enter Wheels \n ";
	cin>>wheel;
	
	cout<<" Enter People \n ";
	cin>>ppl;
	
	// dividing them by their minimum parts required to make a complete toy to get a value // 
	body = body/1;
	
	wheel = wheel/4;
	
	ppl = ppl/2;
	
	// calculating which part is the least in quantity as it will decide how many toys can be made //
	if(body < wheel )
	{
		if ( body < ppl )
		{
			total = body;
		}
		
		else 
		{
			total = ppl;
		}
	}
	
	else if ( wheel < ppl ) 
	    {
		    total = wheel ;
     	}
     	
     	else 
     	{
     		total = ppl;
		 }
	
	//checking if the number of parts are enough to make atleast 1 toy or not //
	
	if( (wheel >= 1) && ( body >=1) && (ppl >= 1) )
	{
		
		cout<<"\n You can make total of " << total << " toys\n ";
		
	}
	
	// if parts are less than the minimum required parts to make one toy //
	else 
	{
		cout << "\n Insufficient parts to even make 1 toy \n" ;
	}
	
	return 0;
}
