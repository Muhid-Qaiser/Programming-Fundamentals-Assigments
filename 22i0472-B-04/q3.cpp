#include<iostream>
using namespace std;


int great(int arr[] , int index ) 
{
	int max = arr[0] ;
	
	for(int i = 0 ; i<index ; i++)
	{
		
		if (max < arr[i])
			max=arr[i];
	}
	
	return max ;
}

void displayarr( int res[] , int size , int windw , int arr[] )
{
	cout << "\nThe Greatest number from the array { ";
	for ( int i=0 ; i < size ; i++ )
	{
		 cout << arr[i] << " " ;
	}
	cout << "} with window size (" << windw << ") are : \n" ;
	
	for ( int i=0 ; i < size-windw+1  ; i++ )
		cout<< i+1 << ". " << res[i] << endl ;
	
}


int main(){
	int size,windw , ch1,ch2,ch3 , j;
	
	cout << "Enter size of array : " ;
	cin >> size;
	
	int arr[size] ;
	
	for(int i=0; i<size;i++)
		{
			cout<<"Enter " << i+1 << " number of array : " ;
			cin >> arr[i] ;
		}
	
	cout<<"Enter window : " ;
	cin >> windw;
	
	int check[windw] , res[size-windw+1];
	
	for ( int i = 0 ; windw+i<=size ; i++)
	{
		int count = 0 ;
		
		for ( j=0+i ;j<windw+i;j++ )
		{
			check[count++]=arr[j];
		//	cout << check[count++] << " " ;
		}
	//	cout << endl;
		res[i] = great(check, windw) ;
	}
	
	displayarr(res , size , windw, arr) ;

	return 0 ;
}


