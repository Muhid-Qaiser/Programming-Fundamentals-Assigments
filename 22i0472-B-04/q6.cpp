#include<iostream>

using namespace std;

void DisplayArray(int Arr[], const int size)
{
	for (int i = 0; i < size; cout << Arr[i] << " ", i++);
	cout << endl;
}
void MergeArrays(int Arr1[], int Arr2[], const int size1, const int size2, int Res[])
{
	int index = 0;
	for (int i = 0; i < size1; i++)
		Res[index++] = Arr1[i];

	for (int i = 0; i < size2; i++)
		Res[index++] = Arr2[i];
}
void BubbleSort(int Array[], const int size)
{
	int temp;
	for (int i = 0; i < size; i++)
		for (int j = i; j < size; j++)
			if (Array[i] > Array[j])
			{
				temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
}
bool CheckArrayValue(int Array[], const int Value, const int Size)
{
	for (int i = 0; i < Size; i++)
		if (Array[i] == Value)
			return true;

	return false;
}

void EvaluateResult(int Result[] , int CheckArray1[] , int CheckArray2[], const int size, const int size1, const int size2)
{
	for (int i = 0; i < size; i++)
		if (CheckArrayValue(CheckArray1, Result[i], size1))
			cout << Result[i] << "-> Array 1" << endl;
		else if(CheckArrayValue(CheckArray2, Result[i], size2))
			cout << Result[i] << "-> Array 2" << endl;
}
int main()
{
//	const int size1 = 5, size2 = 2;
//	int Arr1[] = { 1,3,5,7,9 }, Arr2[] = { 2,4 }, Res[size1 + size2];
	
	int size1 , size2, size3;
	
	cout << "Enter size of first array : ";
	cin  >> size1;
	
	cout << "Enter size of second array : ";
	cin  >> size2;
	
	size3=size1+size2;
	
	int Arr1[size1], Arr2[size2], Res[size3];
	
	cout<<endl;
	
	for(int i=0;i<size1;i++)
	{
		cout << "Enter "<<i+1<<" element of first array : ";
		cin  >> Arr1[i];
		}	
		
	cout<<endl;
		
	for(int i=0;i<size2;i++)
	{
		cout << "Enter "<<i+1<<" element of second array : ";
		cin  >> Arr2[i];
		}	
	
	cout<<endl;
	
	cout << "Array 1 : ";
	DisplayArray(Arr1, size1);
	
	cout << "Array2 : ";
	DisplayArray(Arr2, size2);

	MergeArrays(Arr2, Arr1, size2, size1, Res);
	
	BubbleSort(Res, size3);

	cout << "\nMerged and Sorted Array" << endl;
	DisplayArray(Res, size3);

	cout << "\nOrigin Arrays of Values" << endl;
	EvaluateResult(Res, Arr1, Arr2, size3 ,size1, size2);

	return 0;
}
