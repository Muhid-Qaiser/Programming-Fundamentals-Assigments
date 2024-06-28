#include <string>
#include<iostream>

using namespace std;

int VectorAddition(int Arr1[], int Arr2[], int Res[], const int ResSize)
{
	int index;
	for (index=0; index < ResSize; index++)
		Res[index] = Arr1[index] + Arr2[index];

	return index;
}
void InitializeArray(int Array[], const int size)
{
	for (int i = 0; i < size; i++)
		Array[i] = 0;
}

int StrToNum(string str)
{
	int res = 0, StringLen;
	for (StringLen = 0; str[StringLen] != '\0'; StringLen++);

	for (int i = 0; i < StringLen; i++)
		res = (res * 10) + (str[i] - 48);
	str = "";
	return res;
}

int InputArray(int Array[] , const int size, const int ArrNo)
{
	int Index;
	string Input;
	cout << "\nInput Values of Vector " << ArrNo << endl
		<< "----------------------------" << endl;

	for (Index = 0; Index < size; Index++)
	{
		cout << "Value " << Index + 1 << " : ";
		cin>>Input;
	//	getline(cin, Input);

		if (Input[0] == 'Q')
			break;
		else  
		    Array[Index] = StrToNum(Input);
	}
	return Index;
}

void DisplayArray(int Res[] , int index)
{	
	for(int j=0 ; j<index ; j++)
	{
		cout << Res[j] << " " ;
	}
}

int main()
{
	const int size = 1000;
	int Arr1[size] , Arr2[size], Res[size], ResSize, temp;

	InitializeArray(Arr1, size);
	InitializeArray(Arr2, size);

	ResSize = InputArray(Arr1, size,1);
	temp = InputArray(Arr2, size,2);

	if (temp > ResSize)	
		ResSize = temp;

	VectorAddition(Arr1, Arr2, Res, ResSize);
	cout << "\nVector Sum : " << endl;
	
	DisplayArray(Res, ResSize);

	return 0;
}
