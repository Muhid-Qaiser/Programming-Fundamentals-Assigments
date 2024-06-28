#include<iostream>

using namespace std;

void PrintLine(const int times, const char ch)
{
	if (times < 0)
		return;

	cout << ch;
	
	PrintLine(times - 1, ch);
}

void RecursivePattern(int curr, int actual)
{
	if (curr <= 0)
		return;
	else
	{
		PrintLine(actual - curr, ' ');
		
		PrintLine(actual - curr, '*');
		
		cout << endl;
		
		RecursivePattern(curr - 1, actual); 
	} 

	PrintLine(actual - curr - 1, ' ');

	PrintLine(actual - curr - 1, '*');

	cout << endl; 

}

int main()
{
	int Height;
	
	cout << "Enter Arrow Height : ";
	cin >> Height;
	
	cout << endl;

	RecursivePattern(Height, Height);
	
	return 0;
}
