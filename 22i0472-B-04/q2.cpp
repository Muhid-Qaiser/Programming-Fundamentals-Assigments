#include<string>

#include<iomanip>
#include<iostream>

using namespace std ;

/*int checkname( int name , int name[] , int index )
{
	for(int i=0 ; i<index ; i++)
		if( name==name[i+1] )
		return true;
	return false;
	
}*/

int check( string arr[] , int index )
{
	
	for( int i=0 ; i<index ; i++ )
		if(arr[index]==arr[i])
		return false ;
	return true;
	
}
	
int Avgamount(string arr[] , int price[] , int smallindex , int index )
{
	int total=0,count=0;
	
	//cout << arr[index-1]<<endl;
	
	for(int i=0 ; i<index ; i++)
	{
		if(arr[smallindex]==arr[i])
		{
			total += price[i];
			count++;
		}
	}
	
	return total/count;
}

int getMedian( string arr[] , int median[] , int price[] , int smallindex , int index )
{
	static int count =0;
	for ( int i=0;i<index;i++ )
	{
	//	if( display[smallindex-1] == display[i] )
		if(arr[smallindex]==arr[i])
		{
			median[count] = price[i];
			count++;
		}
	}
	
	return count;
}

void bubblesort( int arr[] , const int size )
{
	int temp;
	
	for(int i=0 ; i<size ; i++)
		for(int j=0 ; j<size-1-i ; j++ )
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
}

int main()
{
		// item name 
	const int bread=1 , naan=2 , chicken_curry=3 , beef_curry=4 , russian_salad=5 , ceasar_salad=6 , normal_salad=7 ,
		chicken_burger=8 , beef_burger=9 ,	zinger_burger=10 , bbq_roll=11 , grill_roll=12 , zinger_roll=13,
	    bbq_pizza=14 , grill_pizza=15 , grill_sandwich=16 , club_sandwich=17 , 	pepsi=18 , sprite=19 , water=20,
	    //item price
	    bread_price=15 , naan_price=20 , chickencurry_price=180 , beefcurry_price=150 , russiansalad_price=80 , ceasarsalad_price=70 , normalsalad_price=50 , 
		chickenburger_price=120 , beefburger_price=100 , zingerburger_price=150 , bbqroll_price=80 , grillroll_price=90 , zingerroll_price=100 ,
	    bbqpizza_price=140 , grillpizza_price=150 , grillsandwich_price=160 , clubsandwich_price=120 , pepsi_price=60 , sprite_price=60 , water_price=40;
	    
	    int choice , begin_or_end , i=0 , food[100], price[100]={0}, quantity[100] , total[100]={0} , avg[100]={0} , median[i],count, medianvalue ,  mediancount , countitem ;
	    
		char ans;
	    
	    string name[100] , displayfood[100];
	    
	    
	    
	    
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
			 
	    
	    
	    
	do{
	
	cout << "\nEnter Name : ";
	cin >> name[i];
	    
	do {

		cout << "Enter ur order : ";
		cin >> food[i];
		
		cout<<endl;

		switch (food[i])
		{
		case 1: cout << "Bread\n";
			cout << "Enter quantity : ";
			cin >> quantity[i];
			price[i] = bread_price * quantity[i];
			displayfood[i]="Bread";
			break;


		case 2: cout << "Naan\n";
			cout << "Enter quantity : ";
			cin >> quantity[i];
			price[i] = naan_price * quantity[i];
			displayfood[i]="Naan";
			break;
			
			case 3 :       	
				cout << "\nChicken Curry \n" 
				<< "Enter the Quantity : " ;
				
				cin>>quantity[i];
				
				price[i] = chickencurry_price * quantity[i];
				displayfood[i]="Chicken Curry";
							
					       	break;
				       	
									
					
					case 4 : 
					       {
				       	
				    	   	cout << "\nBeef Curry \n" 
							     << "Enter the Quantity : " ;
						
							cin  >> quantity[i] ;
		
				       	price[i] = beefcurry_price * quantity[i];
						displayfood[i]="Beef Curry";
								       	
					       	break;
				       	
							}
							 		
					
					case 5 : 
					       {
				       	
				    	   	cout << "\nRussian salad \n" 
							     << "Enter the Quantity : " ;
						
							cin  >> quantity[i] ;
						
							
							 	price[i] = russiansalad_price * quantity[i];
						displayfood[i]="Russian Salad";
				       	
					       	break;
				       	
							}
							
					case 6 : 
					       {
				       	
				    	   	cout << "\nCeasar salad \n" 
							     << "Enter the Quantity : " ;
				       	
				       	cin  >> quantity[i] ;
						
						price[i] = ceasarsalad_price * quantity[i];
						displayfood[i]="Ceasar Salad";
				       	
					       	break;
				       	
							} 			
							
					case 7 : 
					       {
				       	
				    	   	cout << "\nNormal salad \n" 
							     << "Enter the Quantity : " ;
							
							cin  >> quantity[i] ;
						
							
							 	price[i] = normalsalad_price * quantity[i];
						displayfood[i]="Normal Salad";
				       	
					       	break;
				       	
							} 
							
							
					case 8 : 
					       {
				       	
				    	   	cout << "\nChicken burger \n" 
							     << "Enter the Quantity : " ;
						
							cin  >> quantity[i] ;
						
							 	price[i] = chickenburger_price * quantity[i];
						displayfood[i]="Chicken Burger";
				       	
					       	break;
				       	
							}
							
					case 9 : 
					       {
				       	
				    	   	cout << "\nBeef burger \n" 
							     << "Enter the Quantity : " ;
							
							cin  >> quantity[i] ;
						
							 	price[i] = beefburger_price * quantity[i];
						displayfood[i]="Beef Burger";
				       	
					       	break;
				       	
							}
							
					case 10 : 
					       {
				       	
				    	   	cout << "\nZinger burger \n" 
							     << "Enter the Quantity : " ;
						
				       	cin  >> quantity[i] ;
						
							 	price[i] = zingerburger_price * quantity[i];
						displayfood[i]="Zinger Burger";
				       	
					       	break;
				       	
							}
							
					case 11 : 
					       {
				       	
				    	   	cout << "\nBBQ paratha roll \n" 
							     << "Enter the Quantity : " ;
													     		
				       		cin  >> quantity[i] ;
						
							
							 	price[i] = bbqroll_price * quantity[i];
						displayfood[i]="BBQ Roll Paratha";
				       	
					       	break;
				       	
							}
							
					case 12 : 
					       {
				       	
				    	   	cout << "\nGrilled paratha roll \n" 
							     << "Enter the Quantity : " ;
						
							cin  >> quantity[i] ;
					
							 	price[i] = grillroll_price * quantity[i];
						displayfood[i]="Grill Paratha Roll";
				       	
					       	break;
				       	
							} 			 			 			 			 							
							 		
					case 13 : 
					       {
				       	
				    	   	cout << "\nZinger paratha roll \n" 
							     << "Enter the Quantity : " ;
							
							cin  >> quantity[i] ;
					
							 	price[i] = zingerroll_price * quantity[i];
						displayfood[i]="Zinger Paratha Roll";
				       	
					       	break;
				       	
							} 		
							
					case 14 : 
					       {
				       	
				    	   	cout << "\nBBQ Pizza \n" 
							     << "Enter the Quantity : " ;
						
							cin  >> quantity[i] ;
					
							 	price[i] = bbqpizza_price * quantity[i];
						displayfood[i]="BBQ Pizza";
				       	
					       	break;
				       	
							} 		
							
					case 15 : 
					       {
				       	
				    	   	cout << "\nGrilled Pizza \n" 
							     << "Enter the Quantity : " ;
						
							cin  >> quantity[i] ;
					
							 	price[i] = grillpizza_price * quantity[i];
						displayfood[i]="Grilled Pizza";
				       	
					       	break;
				       	
							}
							
					case 16 : 
					       {
				       	
				    	   	cout << "\nGrilled Sandwich \n" 
							     << "Enter the Quantity : " ;
							
							cin  >> quantity[i] ;
					
							 	price[i] = grillsandwich_price * quantity[i];
						displayfood[i]="Grill Sandwich";
				       	
					       	break;
				       	
							} 			 
							
					case 17 : 
					       
				       	
				    	   	cout << "\nClub Sandwich \n" 
							     << "Enter the Quantity : " ;
							
							cin  >> quantity[i] ;
					
							 	price[i] = clubsandwich_price * quantity[i];
						displayfood[i]="Club sanwdwich";
				       	
					       	break;
				       	
								
							
					case 18 : 
					       
				       	
				    	   	cout << "\nPepsi \n" 
							     << "Enter the Quantity : " ;
						
							cin  >> quantity[i] ;
					
							 	price[i] = pepsi_price * quantity[i];
						displayfood[i]="Pepsi";
				       	
					       	break;
				       	
								
							
					case 19 : 
					       
				       	
				    	   	cout << "\nSprite \n" 
							     << "Enter the Quantity : " ;
						
							cin  >> quantity[i] ;
					
							 	price[i] = sprite_price * quantity[i];
						displayfood[i]="Sprite";
				       	
					       	break;
				       	
											
							
					case 20 : 
					       
				       	
				    	   	cout << "\nwater \n" 
							     << "Enter the Quantity : " ;
								
							cin  >> quantity[i] ;
					
							 	price[i] = water_price * quantity[i];
						displayfood[i]="Water";
				       	
					       	break;
				       	

		default: cout << "\ninvalid input\nstart again\n";
	}

		cout << "\nDo you want to choose another item [y/n] : ";
		cin >> ans; 
		
		while (  (ans != 'y') && (ans != 'Y') && (ans != 'n') && (ans != 'N') )
			{
			
				cout << "\nInvalid Input \n"
					 << "Answer only with [y/n] \n" 
					 << "Do u want to choose another item? \n " ;
				 
				cin  >> ans ; 
			
			}

		i++;

		if (ans == 'y' || ans == 'Y')
		{
			name[i] = name[i-1];

		}
		

    	} while (ans == 'y' || ans == 'Y');
	
		cout << "\n\nChoose \n1. Begin from start\n2. End \n";
		cin >> begin_or_end;
		
			while (  begin_or_end != 1 && begin_or_end != 2 )
			{
			
				cout << "\n Invalid Input \n"
					 << "Answer only with [1/2] \n" 
					 << "\nChoose \n1. Begin from start\n2. End \n" ;
				 
				cin  >> begin_or_end ; 
			
			}

	
	}while(begin_or_end==1);
	
	 
	cout <<"\n\n ***********************************************************************\n\n"
		 <<"RECIEPT\n\n"
		 <<"Customer Name" <<setw(15)<<"Item"<<setw(25)<<"Quantity"<<setw(15)<<"Price"<<endl;
	
	for(int j =0 ; j<i;j++)
		cout<<name[j]<<setw(30)<<displayfood[j]<<setw(15)<<quantity[j]<<setw(19)<<price[j] << endl;
		
	int counttotal=0 , countavg=0 , totalprice=0;	
		
	// calculating average costs
	for( int j=0 ; j<i ; j++)
	{
		if( check ( displayfood , j ) )
		{
			totalprice = Avgamount( displayfood, price , j , i );
			cout<<"\nAverage cost of " << displayfood[j] <<" is : " << totalprice;
		}
	}
	
		cout<<endl<<endl;
		
		
	// calculating total sales
	for(int j=0;j<i;j++)
	{
		
		if( name[j]==name[j+1] )
		{
			total[counttotal]+=price[j]+price[j+1];
		}
		
		else if ( name[j]==name[j-1] )
		{
			cout<<endl<<"Total sales for " << name[j] << " are : " << total[counttotal++] ;
			//counttotal++;
		
		}
		else
		{
			cout<<endl<<"Total sales for " << name[j] << " are : " << price[j];
		}
	
	}
	
	cout<<endl<<endl;
	
	
	
	
	
	
	
	//calculating mean of item
	for(int j=0 ; j<i ; j++)
	{
		if ( check(displayfood , j ) )
		{
			count =	getMedian( displayfood , median , price , j , i) ;	
		
			bubblesort(median , count);
	
	 		mediancount= count/2;
	
			if(count%2==0)
				medianvalue= ( median[mediancount+1] + median[mediancount] ) /2 ; 
	
			else
			{
				medianvalue=median[count/2];
			}

			cout<<"\nMedian quantity of " << displayfood[j]<<" is : " << medianvalue;
	
			
		}
	}
	
/*	cout<<endl<<endl;
	for(int k =0 ; k<i;k++)
	for(int j=0 ; j<i ; j++)
	{
		if ( name[k]==name[j] )
		{
			if ( check(displayfood , j ) )
			{
				countitem++;
			}
	
		}
		
		cout<<"Item count of " <<displayfood[j] << " for "<<name[k]<<" is : "<<countitem << endl;
	}*/
	
	return 0 ;
}
	    
	    
	    
	    
	    
	    
	    
	    
