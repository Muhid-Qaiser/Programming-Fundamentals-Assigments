#include<iostream>
using namespace std;

bool IsRecurring(int Arr[], const int index , const int Val)
{
	for (int i = index; i >= 0; i--)
		if (Arr[i] == Val)											//Value Found = Duplicate(Is Recurring Value)
			return true;

	return false;													//Not Found
}
const int Greatest(int Arr1[], int Arr2[], int Arr3[], int IndexArr[])
{
	if (IndexArr[1] < 0 && IndexArr[2] < 0 && IndexArr[0] >= 0)
		return Arr1[IndexArr[0]--];
	else if (IndexArr[0] < 0 && IndexArr[2] < 0 && IndexArr[1] >= 0)
		return Arr2[IndexArr[1]--];
	else if (IndexArr[0] < 0 && IndexArr[1] < 0 && IndexArr[2] >= 0)
		return Arr3[IndexArr[2]--];

	if (IndexArr[0] < 0)
	{
		if (Arr2[IndexArr[1]] > Arr3[IndexArr[2]])
			return Arr2[IndexArr[1]--];
		else
			return Arr3[IndexArr[2]--];
	}
	else if(IndexArr[1] < 0)
	{
		if (Arr1[IndexArr[0]] > Arr3[IndexArr[2]])
			return Arr1[IndexArr[0]--];
		else
			return Arr3[IndexArr[2]--];
	}
	else if (IndexArr[2] < 0)
	{
		if (Arr1[IndexArr[0]] > Arr2[IndexArr[1]])
			return Arr1[IndexArr[0]--];
		else
			return Arr2[IndexArr[1]--];
	}

	if (Arr1[IndexArr[0]] >= Arr2[IndexArr[1]] && Arr1[IndexArr[0]] >= Arr3[IndexArr[2]])
		return Arr1[IndexArr[0]--];
	else if (Arr2[IndexArr[1]] >= Arr1[IndexArr[0]] && Arr2[IndexArr[1]] >= Arr3[IndexArr[2]])
		return Arr2[IndexArr[1]--];
	else if (Arr3[IndexArr[2]] >= Arr1[IndexArr[0]] && Arr3[IndexArr[2]] >= Arr2[IndexArr[1]])
		return Arr3[IndexArr[2]--];
}

int GetUnion(int Arr1[], int Arr2[], int Arr3[], const int size1, const int size2, const int size3, int Res[])
{
	int Maxtemp, ResIndex = 0;
	int IndexArr[3] = { size1 - 1, size2 - 1, size3 - 1 };

	while (IndexArr[0] >= 0 || IndexArr[1] >= 0 || IndexArr[2] >= 0)
	{
		Maxtemp = Greatest(Arr1, Arr2, Arr3, IndexArr);
		if (!IsRecurring(Res, ResIndex, Maxtemp))
			Res[ResIndex++] = Maxtemp;
	}
	return ResIndex;
}
void DisplayArray(int Arr[], const int size)
{
	for (int i = 0; i < size; cout << Arr[i] << " ", i++);
	cout << endl;
}
int main()
{
	int array1[10] = { 0,1,2,3,5,6,7,8,12,14},
		array2[5] = { 1,2,3,4,5 },
		array3[7] = { 3,7,8,9,12,14,19 },
		Union[10 + 5 + 7];

	const int size = GetUnion(array1, array2, array3, 10, 5, 7, Union);

	cout << "Array X : "; DisplayArray(array1, 10);
	cout << "Array Y : "; DisplayArray(array2, 5);
	cout << "Array Z : "; DisplayArray(array3, 7);
	cout << "Union : "; DisplayArray(Union, size);

	return 0;
}

//void GetIntersection(int Arr1[], int Arr2[], const int size1, const int size2, int Res[])
//{
//	int count = 0;
//	for (int i = 0; i < size2; i++)
//		if (IsRecurring(Arr1, size1, Arr2[i]))				//Value of Arr2[i] is in Arr1
//			if (!IsRecurring(Res, count, Arr2[i]))		//Value of Arr2[i] not already in Res
//				Res[count++] = Arr2[i];
//}
