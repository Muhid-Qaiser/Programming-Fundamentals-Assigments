#include<iostream>

#include<string>

using namespace std;

// Program which inputs a persons cnic and name and outputs their relevant details //

int main()
{
	// we use long long int to store very large value //
	long long int cnic , var1;
	
	int prov , division, district , tehsil , UC  , gender ,
         fam1 , fam2 , fam3 , fam4 , fam5 , fam6 , fam7 , famnum ;
     
	string name1 , name2 ;     
        
	
	cout << " Enter the student's CNIC number \n " ;
	cin  >> cnic;


	// to check it the cnic entered is within valid range or not //	
	if ( ( cnic >= 1000000000000 ) && ( cnic < 8000000000000 ) )
	{
	
	
	 	gender = cnic % 10 ;  // calculating the number for gender
		
		// calculating the family number //
		var1 = cnic / 10 ;    
		fam1 = var1 % 10 ;
		
		var1 = var1 / 10 ;
		fam2 = var1 % 10 ;
		
		var1 = var1 / 10 ;
		fam3 = var1 % 10 ;
		
		var1 = var1 / 10 ;
		fam4 = var1 % 10 ;
		
		var1 = var1 / 10 ;
		fam5 = var1 % 10 ;
		
		var1 = var1 / 10 ;
		fam6 = var1 % 10 ;
		
		var1 = var1 / 10 ;
		fam7 = var1 % 10 ;
		
		// concatenating family number into a single variable
		famnum = ( fam7 * 1000000 ) + ( fam6 * 100000 ) + ( fam5 * 10000 ) + ( fam4 * 1000 ) + ( fam3 * 100 ) + ( fam2 * 10 ) + fam1 ;
		
		var1 = var1 / 10 ;
		UC   = var1 % 10 ; // calculating the Union Council number //
		
		var1 = var1 / 10 ;
		tehsil = var1 % 10 ; // calculating the Tehsil number //
		
		var1 = var1 / 10 ;
		district = var1 % 10 ; // calculating the district number //
		
		var1 = var1 / 10 ;
		division = var1 % 10 ; // calculating the division number //
		
		
		var1 = var1 / 10 ;
		prov = var1 % 10 ; // calculating the province number //
		
		
		
	  // checking to see if the inputs of the cnic are valid //
	  if ( ( prov >= 1 && prov <= 7) && ( division >= 1 && division <= 5) && ( district >= 1 && district <= 5) &&
	   ( tehsil >= 1 && tehsil <= 5) && ( UC >= 1 && UC <= 5) )	     
	  {
	  	
	  	cout << " Enter the student's First Name \n " ;
		cin  >> name1 ;
		
		cout << " Enter the student's Second Name \n " ;
		cin  >> name2 ;
	  	
	    cout << "\n\n Name : " << name1 << " " << name2 << endl ;
		  	
		// corresponding province with their number //  	
		switch( prov )
		{
			case 1 : 
			{
			
				
				cout << " Province : Khyber Pakhtunkhwa \n" ; 
			
				
				// corresponding division with their number //
		 		switch ( division )
				{
					case 1 :
					
						cout << " Division : Peshawar\n" ;
					
						break;
				
					case 2 :
					
						cout << " Division : Dere Ismail Khan \n" ;
				
						break;
				
					case 3 : 
				
						cout << " Division : Hazara \n" ;
				
						break;
				
					case 4 :
					
						cout << " Division : Kohat \n" ;	
				
						break;
				
					case 5 : 
				
						cout << " Division : Malakand \n" ;
				
				}	
				
				// corresponding district with their number //
				switch ( district )
				{
				
					case 1 : 
				 
						cout << " District : Abbottabad\n" ;
					
						break ;
				
					case 2 :
						
						cout << " District : Nowshera District\n" ;
					
						break ;
				
					case 3 : 
					
						cout << " District : Peshawar District\n" ;
						
						break;
						
					case 4 : 
					
						cout << " District : Khyber District\n" ;
						
						break;
						
					case 5 :
						
						cout << " District : Mohmand District\n" ;
							
				
				}
			
			
				// corresponding tehsil with their number //
				switch ( tehsil )
				{
				
					case 1 : 
				
						cout << " Tehsil : Tehsil Charsadda\n" ;
				
						break ;
					
					case 2 : 
				
						cout << " Tehsil : Tehsil Tangi\n" ;
					
						break ;
					
					case 3 :
				
						cout << " Tehsil : Tehsil Shabqadar\n" ;
					
						break ;			
					
					case 4 : 
				
						cout << " Tehsil : Tehsil Mula Gori\n" ;
					
						break ;
					
					case 5 :
				
						cout << " Tehsil : Tehsil Kotal Tehsil\n" ;
					
				
				}
			
			
				// corresponding Union council with their number //
				switch ( UC )
				{
					
						case 1 : 
					
						cout << " Union Council : Aloch\n" ;
					
						break;
										
						case 2 : 
						
							cout << " Union council : Balambat\n" ;
		
							break;
										
						case 3 : 
					
							cout << " Union council : Chakianan\n" ;
					
							break;									
											
						case 4 : 
					
							cout << " Union Council : Dabara\n" ;
										
							break;
										
						case 5 : cout << " Union Council : Ellai\n" ;
				
				}
				
			}
		
				break;
			
	
			// corresponding province with their number //
			case 2 : 
			{
			
				cout << " Province : FATA \n" ;
			
			
			// corresponding division with their number //
				switch ( division )
				{
					case 1 :
					
						cout << " Division : Lakki Marwat \n" ;
					
						break;
				
					case 2 :
					
						cout << " Division : Bannu \n" ;
				
						break;
				
					case 3 : 
				
						cout << " Division : Tank \n" ;
				
						break;
				
					case 4 :
					
						cout << " Division : DI Khan \n" ;	
				
						break;
				
					case 5 : 
				
						cout << " Division : FR Peshawar \n" ;
				
				}	
			
			
			// corresponding district with their number //
				switch ( district )
				{
				
					case 1 : 
				 
						cout << " District : Bajaur District \n" ;
					
						break ;
				
					case 2 :
						
						cout << " District : Kurram District \n" ;
					
						break ;
				
					case 3 : 
					
						cout << " District : Orakzai District \n" ;
						
						break;
						
					case 4 : 
					
						cout << " District : North Waziristan District \n" ;
						
						break;
						
					case 5 :
						
						cout << " District : South waziristan District \n" ;
							
				
				}
			
		
			// corresponding tehsil with their number //	
				switch ( tehsil )
				{
				
					case 1 : 
				
						cout << " Tehsil : Tehsil Charmang \n" ;
				
						break ;
					
					case 2 : 
				
						cout << " Tehsil : Tehsil Khar Bajaur \n" ;
					
						break ;
					
					case 3 :
				
						cout << " Tehsil : Tehsil Mamund \n" ;
					
						break ;			
					
					case 4 : 
				
						cout << " Tehsil : Tehsil Nawagai \n" ;
					
						break ;
					
					case 5 :
				
						cout << " Tehsil : Tehsil Salarzai \n" ;
					
				
				}
		
	
				// corresponding union counil with their number //	
				switch ( UC )
				{
					
						case 1 : 
					
						cout << " Union Council : Khalsa \n" ;
					
						break;
										
						case 2 : 
						
							cout << " Union council : Gulbahar \n" ;
		
							break;
										
						case 3 : 
					
							cout << " Union council : Faqairabad \n" ;
					
							break;									
											
						case 4 : 
					
							cout << " Union Council : Andar Sheher \n" ;
										
							break;
										
						case 5 : cout << " Union Council : Wazir Bagh \n" ;
				
				}
				
			}
			
				break;
				
		
			// corresponding province with their number //
			case 3 :
			{
			
				cout << " Province : Punjab \n" ;
			
			
				// corresponding diivision with their number //
					switch ( division )
				{
					case 1 :
					
						cout << " Division : Bahawal Pur \n" ;
					
						break;
				
					case 2 :
					
						cout << " Division : Dera Ghazi Khan \n" ;
				
						break;
				
					case 3 : 
				
						cout << " Division : Faisalabad \n" ;
				
						break;
				
					case 4 :
					
						cout << " Division : Lahore \n" ;	
				
						break;
				
					case 5 : 
				
						cout << " Division : Multan \n" ;
				
				}	
			
	
			// corresponding district with their number //		
				switch ( district )
				{
				
					case 1 : 
				 
						cout << " District : Bahawalnagar \n" ;
					
						break ;
				
					case 2 :
						
						cout << " District : Rahim Yar Khan \n" ;
					
						break ;
				
					case 3 : 
					
						cout << " District : Layyah \n" ;
						
						break;
						
					case 4 : 
					
						cout << " District : Muzaffargarh \n" ;
						
						break;
						
					case 5 :
						
						cout << " District : Rajanpur \n" ;
							
				
				}
			
			
			// corresponding tehsil with their number //
				switch ( tehsil )
				{
				
					case 1 : 
				
						cout << " Tehsil : Shalimar Tehsil \n" ;
				
						break ;
					
					case 2 : 
				
						cout << " Tehsil : Raiwind Tehsil \n" ;
					
						break ;
					
					case 3 :
				
						cout << " Tehsil : Pattoki Tehsil \n" ;
					
						break ;			
					
					case 4 : 
				
						cout << " Tehsil : Nankana Sahib Tehsil \n" ;
					
						break ;
					
					case 5 :
				
						cout << " Tehsil : Shah Kot Tehsil \n" ;
					
				
				}
			
			
				// corresponding union council with their number //
				switch ( UC )
				{
					
						case 1 : 
					
						cout << " Union Council : Sheukhupura \n" ;
					
						break;
										
						case 2 : 
						
							cout << " Union council : Bahadur Garh \n" ;
		
							break;
										
						case 3 : 
					
							cout << " Union council : Chotibala \n" ;
					
							break;									
											
						case 4 : 
					
							cout << " Union Council : Drahma \n" ;
										
							break;
										
						case 5 : cout << " Union Council : Fazal Katchh \n" ;
				
				}
				
			}
			
			
				break; 
		
			// corresponding province with their number //
			case 4 : 
			{
			
				cout << " Province : Sindh \n" ;
	
	
					// corresponding division with their number //		
					switch ( division )
				{
					case 1 :
					
						cout << " Division : Karachi \n" ;
					
						break;
				
					case 2 :
					
						cout << " Division : Hyderabad \n" ;
				
						break;
				
					case 3 : 
				
						cout << " Division : Sukkur \n" ;
				
						break;
				
					case 4 :
					
						cout << " Division : Mirpurkhas \n" ;	
				
						break;
				
					case 5 : 
				
						cout << " Division : Larkana \n" ;
				
				}	
			
			
				// corresponding district with their number //
				switch ( district )
				{
				
					case 1 : 
				 
						cout << " District : Badin \n" ;
					
						break ;
				
					case 2 :
						
						cout << " District : Thatta \n" ;
					
						break ;
				
					case 3 : 
					
						cout << " District : Ghotki \n" ;
						
						break;
						
					case 4 : 
					
						cout << " District : Jamshoro \n" ;
						
						break;
						
					case 5 :
						
						cout << " District : Matiari \n" ;
							
				
				}
		
			// corresponding district with their number //	
				switch ( tehsil )
				{
				
					case 1 : 
				
						cout << " Tehsil : Badin Tehsil \n" ;
				
						break ;
					
					case 2 : 
				
						cout << " Tehsil : Khoski Tehsil \n" ;
					
						break ;
					
					case 3 :
					
						cout << " Tehsil : Matli Tehsil \n" ;
					
						break ;			
					
					case 4 : 
				
						cout << " Tehsil : Shaheed Fazil Rahu Tehsil \n" ;
					
						break ;
					
					case 5 :
				
						cout << " Tehsil : Talhar Tehsil\n" ;
					
				
				}
			
			
				// corresponding union council with their number //
				switch ( UC )
				{
					
						case 1 : 
					
						cout << " Union Council : Bago \n" ;
					
						break;
										
						case 2 : 
						
							cout << " Union council : Began , Jarwar \n" ;
		
							break;
										
						case 3 : 
					
							cout << " Union council : Bubak , Sindh \n" ;
					
							break;									
											
						case 4 : 
					
							cout << " Union Council : Bukera , Sharif \n" ;
										
							break;
										
						case 5 : cout << " Union Council : Darbelo \n" ;
				
				}
				
			}
			
			
				break;	
				
			
			// corresponding province with their number //
			case 5 :
			{
			
				 cout << " Province : Balochistan \n" ;
		
		
				// corresponding division with their number //	
				switch ( division )
				{
					case 1 :
					
						cout << " Division : Kalat \n" ;
					
						break;
				
					case 2 :
					
						cout << " Division : Makran \n" ;
				
						break;
				
					case 3 : 
				
						cout << " Division : Naseerabad \n" ;
				
						break;
				
					case 4 :
					
						cout << " Division : Quetta \n" ;	
				
						break;
				
					case 5 : 
				
						cout << " Division : Sibi \n" ;
				
				}	
			
			    	
				// corresponding district with their number //
				switch ( district )
				{
				
					case 1 : 
				 
						cout << " District : Awaran \n" ;
					
						break ;
				
					case 2 :
						
						cout << " District : Barkhan \n" ;
					
						break ;
				
					case 3 : 
					
						cout << " District : Chagai \n" ;
						
						break;
						
					case 4 : 
					
						cout << " District : Duki \n" ;
						
						break;
						
					case 5 :
						
						cout << " District : Harnai \n" ;
							
				
				}
			
			
				// corresponding tehsil with their number //
				switch ( tehsil )
				{
				
					case 1 : 
				
						cout << " Tehsil : Dhadar Tehsil \n" ;
				
						break ;
					
					case 2 : 
				
						cout << " Tehsil : Balanari Tehsil \n" ;
					
						break ;
					
					case 3 :
					
						cout << " Tehsil : Mach Tehsil \n" ;
					
						break ;			
					
					case 4 : 
				
						cout << " Tehsil : Sani Tehsil \n" ;
					
						break ;
					
					case 5 :
				
						cout << " Tehsil : Gandawa Tehsil\n" ;
					
				
				}
			
				
				// corresponding union council with their number //
				switch ( UC )
				{
					
						case 1 : 
					
						cout << " Union Council : Aab-e-Gum \n" ;
					
						break;
										
						case 2 : 
						
							cout << " Union council : Babihan \n" ;
		
							break;
										
						case 3 : 
					
							cout << " Union council : Baiker \n" ;
					
							break;									
											
						case 4 : 
					
							cout << " Union Council : Chalgari \n" ;
										
							break;
										
						case 5 : cout << " Union Council : Eshani \n" ;
				
				}
				
			}
			
				break;
				
				
			// corresponding province with their number //
			case 6 :
			{
			
			
			 cout << " Province : Islamabad \n" ;	
			
						
				// corresponding division with their number //
				switch ( division )
				{
					case 1 :
					
						cout << " Division : Zone 1 \n" ;
					
						break;
				
					case 2 :
					
						cout << " Division : Zone 2 \n" ;
				
						break;
				
					case 3 : 
				
						cout << " Division : Zone 3 \n" ;
				
						break;
				
					case 4 :
					
						cout << " Division : Zone 4 \n" ;	
				
						break;
				
					case 5 : 
				
						cout << " Division : Zone 5 \n" ;
				
				}	
			
			
				// corresponding district with their number //
				switch ( district )
				{
				
					case 1 : 
				 
						cout << " District : Administrative Zone \n" ;
					
						break ;
				
					case 2 :
						
						cout << " District : Commercial District \n" ;
					
						break ;
				
					case 3 : 
					
						cout << " District : Rural Area \n" ;
						
						break;
						
					case 4 : 
					
						cout << " District : Green Area \n" ;
						
						break;
						
					case 5 :
						
						cout << " District : Residential Area \n" ;
							
				
				}
						
				// corresponding tehsil with their number //
				switch ( tehsil )
				{
				
					case 1 : 
				
						cout << " Tehsil : Abohar Tehsil \n" ;
				
						break ;
					
					case 2 : 
				
						cout << " Tehsil : Fazilka Tehsil \n" ;
					
						break ;
					
					case 3 :
					
						cout << " Tehsil : Sito Guno Tehsil \n" ;
					
						break ;			
					
					case 4 : 
				
						cout << " Tehsil : Firozpur Tehsil \n" ;
					
						break ;
					
					case 5 :
				
						cout << " Tehsil : Makhu Tehsil\n" ;
					
				
				}
				
				// corresponding union council with their number //
				switch ( UC )
				{
					
						case 1 : 
					
						cout << " Union Council : Badhana Kalan \n" ;
					
						break;
										
						case 2 : 
						
							cout << " Union council : Baggonal Mohra \n" ;
		
							break;
										
						case 3 : 
					
							cout << " Union council : Barli Na \n" ;
					
							break;									
											
						case 4 : 
					
							cout << " Union Council : Burki Budhai \n" ;
										
							break;
										
						case 5 : cout << " Union Council : Chak Mirza \n" ;
				
				}
				
			}
			
			break;	
			
			
			// corresponding province with their number //
			case 7 :
			{
			
				 cout << " Province : Gilgit-Baltistan \n" ;
			
			
				// corresponding division with their number //
				switch ( division )
				{
					case 1 :
					
						cout << " Division : Baltistan \n" ;
					
						break;
				
					case 2 :
					
						cout << " Division : Gilgit \n" ;
				
						break;
				
					case 3 : 
				
						cout << " Division : Diamer \n" ;
				
						break;
				
					case 4 :
					
						cout << " Division : Astore \n" ;	
				
						break;
				
					case 5 : 
				
						cout << " Division : Ghanche \n" ;
				
				}	
			
			
				// corresponding district with their number //
				switch ( district )
				{
				
					case 1 : 
				 
						cout << " District : Gilgit \n" ;
					
						break ;
				
					case 2 :
						
						cout << " District : Ghizer \n" ;
					
						break ;
				
					case 3 : 
					
						cout << " District : Hunza \n" ;
						
						break;
						
					case 4 : 
					
						cout << " District : Nagar \n" ;
						
						break;
						
					case 5 :
						
						cout << " District : Shigar \n" ;
							
				
				}
			
			
				// corresponding tehsil with their number //
				switch ( tehsil )
				{
				
					case 1 : 
				
						cout << " Tehsil : Danyor Tehsil \n" ;
				
						break ;
					
					case 2 : 
				
						cout << " Tehsil : Gilgit Tehsil \n" ;
					
						break ;
					
					case 3 :
					
						cout << " Tehsil : Juglot Tehsil \n" ;
					
						break ;			
					
					case 4 : 
				
						cout << " Tehsil : Khaplu Tehsil \n" ;
					
						break ;
					
					case 5 :
				
						cout << " Tehsil : Chorbut Tehsil\n" ;
					
				
				}
			
			
				// corresponding union council with their number //
				switch ( UC )
				{
					
						case 1 : 
					
						cout << " Union Council : Gojal 1 \n" ;
					
						break;
										
						case 2 : 
						
							cout << " Union council : Gojal 2 \n" ;
		
							break;
										
						case 3 : 
					
							cout << " Union council : Phander \n" ;
					
							break;									
											
						case 4 : 
					
							cout << " Union Council : Teru \n" ;
										
							break;
										
						case 5 : cout << " Union Council : Sakowar Minawar \n" ;
				
				}
				
			}
			
			
		
	}
	
	
	cout << " Family Number : "<<famnum ;
	
	// assigning gender //
	if ( gender%2 == 0 )
	{
		cout << "\n Gender : Female\n " ;
	}
	
	else 
	{
		cout << "\n Gender : Male\n " ;
	}
	

  
}
  
	// corresponding province with their number //   
	else 
   {
   	
  	cout << "\n Invalid input \n"
  	     << " Input for Province should be between 1-7 \n"
		 << " and \n"   
		 << " Input for Division / District / Tehsil / Union Council shouldnt be between 1-5 \n" ;
		 
   }
  	
}


// corresponding province with their number //  
else
{
	cout << "\n Invalid CNIC number \n"
	     << " Please enter a 13 digit CNIC number \n" ;
} 
	

	return 0;
}
