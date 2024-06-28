// menu program //

#include<iostream>

#include<string>

#include<iomanip>

using namespace std ;

int main()
{
		// item name 
	int bread=1 , naan=2 , chicken_curry=3 , beef_curry=4 , russian_salad=5 , ceasar_salad=6 , normal_salad=7 ,
		chicken_burger=8 , beef_burger=9 ,	zinger_burger=10 , bbq_roll=11 , grill_roll=12 , zinger_roll=13,
	    bbq_pizza=14 , grill_pizza=15 , grill_sandwich=16 , club_sandwich=17 , 	pepsi=18 , sprite=19 , water=20 ,
	    
	    // quantity of items
	    bread_quant=0 , naan_quant=0 , chickencurry_quant=0 , beefcurry_quant=0 , russiansalad_quant=0 , ceasarsalad_quant=0 , normalsalad_quant=0 , 
		chickenburger_quant=0 , beefburger_quant=0 , zingerburger_quant=0 , bbqroll_quant=0 , grillroll_quant=0 , zingerroll_quant=0 ,
	    bbqpizza_quant=0 , grillpizza_quant=0 , grillsandwich_quant=0 , clubsandwich_quant=0 , 	pepsi_quant=0 , sprite_quant=0 , water_quant=0 ,
		
		// price of items
		bread_price=15 , naan_price=20 , chickencurry_price=180 , beefcurry_price=150 , russiansalad_price=80 , ceasarsalad_price=70 , normalsalad_price=50 , 
		chickenburger_price=120 , beefburger_price=100 , zingerburger_price=150 , bbqroll_price=80 , grillroll_price=90 , zingerroll_price=100 ,
	    bbqpizza_price=140 , grillpizza_price=150 , grillsandwich_price=160 , clubsandwich_price=120 , pepsi_price=60 , sprite_price=60 , water_price=40 ,
	    
		count = 0 , totalamount ,  choice , totalquant   ;
		
	float gst , total ;	
		
		// using bool for items to see wich are selected 
	bool bread_c=0 , naan_c=0 , chickencurry_c=0 , beefcurry_c=0 , russiansalad_c=0 , ceasarsalad_c=0 , normalsalad_c=0 , 
	   	 chickenburger_c=0 , beefburger_c=0 , zingerburger_c=0 , bbqroll_c=0 , grillroll_c=0 , zingerroll_c=0 ,
	     bbqpizza_c=0 , grillpizza_c=0 , grillsandwich_c=0 , clubsandwich_c=0 , pepsi_c=0 , sprite_c=0 , water_c=0 ;
	    	    
	
  string ans , name , cnumber ;
	
	
		// displaying menu 
		cout << " MENU \n\n"
			 
			 << " ******************************************************************** \n\n" 
		
		     << " FLAT BREAD \n"
			 << " 1. Bread                      -$15   \n" 
			 << " 2. Naan                       -$20 \n\n"
			 
			 << " CURRY \n"
			 << " 3. Chicken curry              -$180   \n"
			 << " 4. Beef curry                 -$150 \n\n"
			 
			 << " SALADS \n"
			 << " 5. Russian salad              -$80   \n"
			 << " 6. Ceasar salad               -$70   \n"
			 << " 7. Normal salad               -$50 \n\n" 
			 
			 << " BURGERS \n"
			 << " 8. Chicken burger             -$120   \n"
			 << " 9. Beef burger                -$100   \n"
			 << " 10. Zinger burger             -$150 \n\n"
			 
			 << " PARATHA ROLLS \n"
			 << " 11. BBQ paratha roll          -$80    \n"
			 << " 12. Grill paratha roll        -$90    \n"
			 << " 13. Zinger paratha roll       -$100 \n\n"
			 
			 << " PIZZAS \n"
			 << " 14. BBQ pizza                 -$140   \n"
			 << " 15. Grilled pizza             -$150 \n\n"
			 
			 << " SANDWICHES \n"
			 << " 16. Grilled sandwich          -$160  \n"
			 << " 17. Club sandwich             -$120 \n\n"
			 
			 << " DRINKS \n"
			 << " 18. Pepsi                     -$60 \n"
			 << " 19. Sprite                    -$60  \n"
			 << " 20. Water                     -$40  \n\n" 
			 
			 << " ***********************************************************************\n\n";
			 
			 
		cout << " Enter your name : " ;
		getline ( cin , name ) ;
		
		cout << " Enter your contact number : " ;
		cin  >> cnumber	 ;
	
				
	 do{
		
		cout << "\n Pick an item by entering the number corresponding to the item : " ;	 
		
		cin  >> choice ;
		
		
		// matching order with case 
		switch ( choice )
				{
				
					case 1 : 
					       {
				       	
				    	   	cout << "\n Bread \n" 
							     << " Enter the Quantity : " ;
						
							cin  >> bread_quant ;
						
							bread_price = bread_price * bread_quant ;
							
							bread_c = 1 ;
						
				       	
					       	break;
				       	
							} 
							
					case 2 : 
					       {
				       		
				    	   	cout << "\n Naan \n" 
							     << " Enter the Quantity : " ;
						
							cin  >> naan_quant ;
						
							naan_price = naan_price * naan_quant ;
							
							naan_c = 1 ;
				       	
					       	break;
				       	
							} 		
							
					case 3 : 
					       {
				       	
				    	   	cout << "\n Chicken curry \n" 
							     << " Enter the Quantity : " ;
						
							cin  >> chickencurry_quant ;
						
							chickencurry_price = chickencurry_price * chickencurry_quant ;
							
							chickencurry_c = 1 ;
				       	
					       	break;
				       	
							} 		
					
					case 4 : 
					       {
				       	
				    	   	cout << "\n Beef curry \n" 
							     << " Enter the Quantity : " ;
						
							cin  >> beefcurry_quant ;
						
							beefcurry_price = beefcurry_price * beefcurry_quant ;
							
							beefcurry_c = 1 ;
				       	
					       	break;
				       	
							}
							 		
					
					case 5 : 
					       {
				       	
				    	   	cout << "\n Russian salad \n" 
							     << " Enter the Quantity : " ;
						
							cin  >> russiansalad_quant ;
						
							russiansalad_price = russiansalad_price * russiansalad_quant ;
							
							russiansalad_c = 1 ;
				       	
					       	break;
				       	
							}
							
					case 6 : 
					       {
				       	
				    	   	cout << "\n Ceasar salad \n" 
							     << " Enter the Quantity : " ;
						
							cin  >> ceasarsalad_quant ;
						
							ceasarsalad_price = ceasarsalad_price * ceasarsalad_quant ;
							
							ceasarsalad_c = 1 ;
				       	
					       	break;
				       	
							} 			
							
					case 7 : 
					       {
				       	
				    	   	cout << "\n Normal salad \n" 
							     << " Enter the Quantity : " ;
						
							cin  >> normalsalad_quant ;
						
							normalsalad_price = normalsalad_price * normalsalad_quant ;
							
							normalsalad_c = 1 ;
				       	
					       	break;
				       	
							} 
							
							
					case 8 : 
					       {
				       	
				    	   	cout << "\n Chicken burger \n" 
							     << " Enter the Quantity : " ;
						
							cin  >> chickenburger_quant ;
						
							chickenburger_price = chickenburger_price * chickenburger_quant ;
							
							chickenburger_c = 1 ;
				       	
					       	break;
				       	
							}
							
					case 9 : 
					       {
				       	
				    	   	cout << "\n Beef burger \n" 
							     << " Enter the Quantity : " ;
						
							cin  >> beefburger_quant ;
						
							beefburger_price = beefburger_price * beefburger_quant ;
							
							beefburger_c = 1 ;
				       	
					       	break;
				       	
							}
							
					case 10 : 
					       {
				       	
				    	   	cout << "\n Zinger burger \n" 
							     << " Enter the Quantity : " ;
						
							cin  >> zingerburger_quant ;
						
							zingerburger_price = zingerburger_price * zingerburger_quant ;
							
							zingerburger_c = 1 ;
				       	
					       	break;
				       	
							}
							
					case 11 : 
					       {
				       	
				    	   	cout << "\n BBQ paratha roll \n" 
							     << " Enter the Quantity : " ;
						
							cin  >> bbqroll_quant ;
						
							bbqroll_price = bbqroll_price * bbqroll_quant ;
				       	
				       		bbqroll_c = 1 ;
				       	
					       	break;
				       	
							}
							
					case 12 : 
					       {
				       	
				    	   	cout << "\n Grilled paratha roll \n" 
							     << " Enter the Quantity : " ;
						
							cin  >> grillroll_quant ;
						
							grillroll_price = grillroll_price * grillroll_quant ;
							
							grillroll_c = 1 ;
				       	
					       	break;
				       	
							} 			 			 			 			 							
							 		
					case 13 : 
					       {
				       	
				    	   	cout << "\n Zinger paratha roll \n" 
							     << " Enter the Quantity : " ;
						
							cin  >> zingerroll_quant ;
						
							zingerroll_price = zingerroll_price * zingerroll_quant ;
							
							zingerroll_c = 1 ;
				       	
					       	break;
				       	
							} 		
							
					case 14 : 
					       {
				       	
				    	   	cout << "\n BBQ pizza \n" 
							     << " Enter the Quantity : " ;
						
							cin  >> bbqpizza_quant ;
						
							bbqpizza_price = bbqpizza_price * bbqpizza_quant ;
							
							bbqpizza_c = 1 ;
				       	
					       	break;
				       	
							} 		
							
					case 15 : 
					       {
				       	
				    	   	cout << "\n Grilled pizza \n" 
							     << " Enter the Quantity : " ;
						
							cin  >> grillpizza_quant ;
						
							grillpizza_price = grillpizza_price * grillpizza_quant ;
							
							grillpizza_c = 1 ;
				       	
					       	break;
				       	
							}
							
					case 16 : 
					       {
				       	
				    	   	cout << "\n Grilled sandwich \n" 
							     << " Enter the Quantity : " ;
						
							cin  >> grillsandwich_quant ;
						
							grillsandwich_price = grillsandwich_price * grillsandwich_quant ;
							
							grillsandwich_c = 1 ;
				       	
					       	break;
				       	
							} 			 
							
					case 17 : 
					       {
				       	
				    	   	cout << "\n Club sandwich \n" 
							     << " Enter the Quantity : " ;
						
							cin  >> clubsandwich_quant ;
						
							clubsandwich_price = clubsandwich_price * clubsandwich_quant ;
							
							clubsandwich_c = 1 ;
				       	
					       	break;
				       	
							} 	
							
					case 18 : 
					       {
				       	
				    	   	cout << "\n Pepsi \n" 
							     << " Enter the Quantity : " ;
						
							cin  >> pepsi_quant ;
						
							pepsi_price = pepsi_price * pepsi_quant ;
							
							pepsi_c = 1 ;
				       	
					       	break;
				       	
							} 	
							
					case 19 : 
					       {
				       	
				    	   	cout << "\n Sprite \n" 
							     << " Enter the Quantity : " ;
						
							cin  >> sprite_quant ;
						
							sprite_price = sprite_price * sprite_quant ;
							
							sprite_c = 1 ;
				       	
					       	break;
				       	
							} 				
							
					case 20 : 
					       {
				       	
				    	   	cout << "\n water \n" 
							     << " Enter the Quantity : " ;
						
							cin  >> water_quant ;
						
							water_price = water_price * water_quant ;
							
							water_c = 1 ;
				       	
					       	break;
				       	
							} 											 		
				
					default : 
							{	
							cout << "\n Invalid entry\n"
								<< " Enter number between 1 and 20 \n" ;
							}
				
				}
			 
			 
			// using while to see if the customer can enter more items or not 
			while ( count != 5 )
			{
			 
			cout << "\n Do you want to choose another item? \n"
				 << " Answer only with [y/n] \n " ;
			 
			cin  >> ans ; 
			
			break;
		
			}
			 
			// checking if the user entered invalid entry
			while (  (ans != "y") && (ans != "Y") && (ans != "n") && (ans != "N") )
			{
			
				cout << "\n Invalid Input \n"
					 << " Answer only with [y/n] \n" 
					 << " Do u want to choose another item? \n " ;
				 
				cin  >> ans ; 
			
			}
			
			count ++ ;
			 
		// checking to see if the customer wants to enter more items or not 
    	} while ( ( ans == "y"  || ans == "Y" ) && count < 6 ) ;
    	
    	
    	
    	
    	
    		
    // printing reciept 
    cout << "\n\n ******************************************************************** \n\n"
		 << " RECIEPT\n\n" ;

    
    cout << " Customer Name : " << name << "        " << " Customer number : " << cnumber << endl << endl
    
    	 << " Item " << setw(18) << " Qty " << setw(18) << " Total " << endl 
         << " name " << endl << endl ;
    
    // using bool to see which items have been picked 
    if ( bread_c == 1 )
    {
    	
    	cout << " Bread " << setw(15) << bread_quant << setw(18) << bread_price << "$" << endl ;
    	
    	totalquant = totalquant + bread_quant ;
    	
    	totalamount = totalamount + bread_price ;
    	
	}
	
	  if ( naan_c == 1 )
    {
    	
    	cout << " Naan " << setw(16) << naan_quant << setw(18) << naan_price << "$" << endl ;
    	
    	totalquant = totalquant + naan_quant ;
    	
    	totalamount = totalamount + naan_price ;
    	
	}
	
	 if ( chickencurry_c == 1 )
    {
    	
    	cout << " Chicken curry " << setw(7) << chickencurry_quant << setw(19) << chickencurry_price << "$" << endl ;
    	
    	totalquant = totalquant + chickencurry_quant ;
    	
    	totalamount = totalamount + chickencurry_price ;
    	
	}
	
	 if ( beefcurry_c == 1 )
    {
    	
    	cout << " Beef curry " << setw(10) << beefcurry_quant << setw(19) << beefcurry_price << "$" << endl ;
    	
    	totalquant = totalquant + beefcurry_quant ;
    	
    	totalamount = totalamount + beefcurry_price ;
	}
	
	
	 if ( russiansalad_c == 1 )
    {
    	
    	cout << " Russian salad " << setw(7) << russiansalad_quant << setw(18) << russiansalad_price << "$" << endl ;
    	
    	totalquant = totalquant + russiansalad_quant ;
    	
    	totalamount = totalamount + russiansalad_price ;
    	
	}
	
	
	 if ( ceasarsalad_c == 1 )
    {
    	
    	cout << " Ceasar salad " << setw(8) << ceasarsalad_quant << setw(18) << ceasarsalad_price << "$" << endl ;
    	
    	totalquant = totalquant + ceasarsalad_quant ;
    	
    	totalamount = totalamount + ceasarsalad_price ;
    	
	}
	
	
	 if ( normalsalad_c == 1 )
    {
    	
    	cout << " Normal salad " << setw(8) << normalsalad_quant << setw(18) << normalsalad_price << "$" << endl ;
    	
    	totalquant = totalquant + normalsalad_quant ;
    	
    	totalamount = totalamount + normalsalad_price ;
    	
	}
	
	
	 if ( chickenburger_c == 1 )
    {
    	
    	cout << " Chicken burger " << setw(6) << chickenburger_quant << setw(19) << chickenburger_price << "$" << endl ;
    	
    	totalquant = totalquant + chickenburger_quant ;
    	
    	totalamount = totalamount + chickenburger_price ;
    	
	}
	
	
	 if ( beefburger_c == 1 )
    {
    	
    	cout << " Beef burger " << setw(9) << beefburger_quant << setw(19) << beefburger_price << "$" << endl ;
    	
    	totalquant = totalquant + beefburger_quant ;
    	
    	totalamount = totalamount + beefburger_price ;
    	
	}
	
	
	 if ( zingerburger_c == 1 )
    {
    	
    	cout << " Zinger burger " << setw(7) << zingerburger_quant << setw(19) << zingerburger_price << "$" << endl ;
    	
    	totalquant = totalquant + zingerburger_quant ;
    	
    	totalamount = totalamount + zingerburger_price ;
    	
	}
	
	
	 if ( bbqroll_c == 1 )
    {
    	
    	cout << " BBQ p. roll " << setw(9) << bbqroll_quant << setw(18) << bbqroll_price << "$" << endl ;
    	
    	totalquant = totalquant + bbqroll_quant ;
    	
    	totalamount = totalamount + bbqroll_price ;
    	
	}
	
	
	 if ( grillroll_c == 1 )
    {
    	
    	cout << " Grill p. roll " << setw(7) << grillroll_quant << setw(18) << grillroll_price << "$" << endl ;
    	
    	totalquant = totalquant + grillroll_quant ;
    	
    	totalamount = totalamount + grillroll_price ;
    	
	}
	
	
	 if ( zingerroll_c == 1 )
    {
    	
    	cout << " Zinger p. roll " << setw(6) << zingerroll_quant << setw(19) << zingerroll_price << "$" << endl ;
    	
    	totalquant = totalquant + zingerroll_quant ;
    	
    	totalamount = totalamount + zingerroll_price ;
    	
	}
	
 	
	 if ( bbqpizza_c == 1 )
    {
    	
    	cout << " BBQ pizza " << setw(11) << bbqpizza_quant << setw(19) << bbqpizza_price << "$" << endl ;
    	
    	totalquant = totalquant + bbqpizza_quant ;
    	
    	totalamount = totalamount + bbqpizza_price ;
    	
	}
	
	
	 if ( grillpizza_c == 1 )
    {
    	
    	cout << " Grilled pizza " << setw(7) << grillpizza_quant << setw(19) << grillpizza_price << "$" << endl ;
    	
    	totalquant = totalquant + grillpizza_quant ;
    	
    	totalamount = totalamount + grillpizza_price ;
    	
	}
	
	
	 if ( grillsandwich_c == 1 )
    {
    	
    	cout << " Grilled sandwich " << setw(4) << grillsandwich_quant << setw(19) << clubsandwich_price << "$" << endl ;
    	
    	totalquant = totalquant + grillsandwich_quant ;
    	
    	totalamount = totalamount + grillsandwich_price ;
    	
	}
	
	
	 if ( clubsandwich_c == 1 )
    {
    	
    	cout << " Club sandwich " << setw(7) << clubsandwich_quant << setw(19) << clubsandwich_price << "$" << endl ;
    	
    	totalquant = totalquant + clubsandwich_quant ;
    	
    	totalamount = totalamount + clubsandwich_price ;
    	
	}
	
	
	 if ( pepsi_c == 1 )
    {
    	
    	cout << " Pepsi " << setw(15) << pepsi_quant << setw(18) << pepsi_price << "$" << endl ;
    	
    	totalquant = totalquant + pepsi_quant ;
    	
    	totalamount = totalamount + pepsi_price ;
    	
	}
	
	
	 if ( sprite_c == 1 )
    {
    	
    	cout << " sprite " << setw(14) << sprite_quant << setw(18) << sprite_price << "$" << endl ;
    	
    	totalquant = totalquant + sprite_quant ;
    	
    	totalamount = totalamount + sprite_price ;
    	
	}
	
	
	 if ( water_c == 1 )
    {
    	
    	cout << " Water " << setw(15) << water_quant << setw(18) << water_price << "$" << endl ;
    	
    	totalquant = totalquant + water_quant ;
    	
    	totalamount = totalamount + water_price ;
    	
	}
		
	// calculating gst and total
	gst = totalamount * 0.12 ;
	
	total = totalamount + gst ;
	
	cout << endl << endl << setw (25) << " Total Qty "    << setw(14) << totalquant          << endl 
	
						 << setw (25) << " Total Amount " << setw (15) << totalamount << "$" << endl
						 
						 << setw (25) <<     " GST "       << setw(16) <<    gst      << "$" << endl
						 
						 << setw (25) <<    " Total "      << setw(17) <<    total    << "$" << endl;

    cout << "\n\n *********************************************************************** " ;
    
	
	return 0 ;
}
