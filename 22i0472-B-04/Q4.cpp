#include<iostream>

using namespace std;

string ShiftLeft(string str, const int size, const int index, const int ShiftFactor = 1)
{
	string res = str;
		cout<<"eval : "<<ShiftFactor<<endl<<"i : "<<index<<endl<<"size : "<<size<<endl;
	for (int i = index; i < size-ShiftFactor; i++)
	{
		cout<<"\nin";
		res[i] = str[i + ShiftFactor];
		cout<<"\nres : "<<res;
	}
	res[size - ShiftFactor] = '\0';
		cout<<"\ninnstr : "<<res<<endl;
	return res;
}
bool IsValid(const char ch)
{
	return (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'z') || (ch == ' ');
}
int StringSize(string str)
{
	int size;
	for (size = 0; str[size] != '\0'; size++);
//	cout<<size;
	return size;
}
string RemovePunctuationMarks(string str)
{
	int size = StringSize(str);

	for (int i = 0; i < size; i++)
		while (!IsValid(str[i]))
		{
			str = ShiftLeft(str, size--, i);
			if (str[i] == '\0') break;
		}
	return str;
}
bool IsWordEnd(const char ch)
{
	return (ch == '\0' || ch == ' ' || ch == ',');
}
string ExtractWord(string str, int index = 0)
{
	string res;
	while (IsWordEnd(str[index]))
	{
	//	cout<<str[index];
	 index++;
	}
//	cout<<endl;
	while(!IsWordEnd(str[index]))
	{
//		cout<<str[index];
		res += str[index++];
	}

	return res;
}
bool CompareStr(string str1, string str2)
{
	int size1 = StringSize(str1), size2 = StringSize(str2);
	if (size1 != size2) return false;

	for (int i = 0; i < size1; i++)
		if (str1[i] != str2[i])
			return false;
	return true;
}
int IsStopWord(string word, string StopWords)
{
	int size = StringSize(StopWords), tempSize=0;
	string CheckWord;
	
	for (int i = 0; i < size; i+= tempSize)
	{
		CheckWord = ExtractWord(StopWords, i);
	//	cout<<"hi ; " << endl;
		tempSize = StringSize(CheckWord)+1;

		if (CompareStr(word, CheckWord))
			return tempSize;
	}

	return (-1);
}
string ResizeStr(string str)
{
	string res;
//	cout<<"\nstr : "<<str<<endl;
	for (int i = 0; str[i] != '\0'; i++)
		{
		res += str[i];
//		cout<<"i in resize : "<<i<<endl;
		}

	res += '\0';
//	cout<<"\nres : "<<res<<endl;
	return res;
}
string RemoveStopWords(string str, string StopWords)
{
	string word, res;
	int size = StringSize(str), Eval;

	for (int i = 0; i < size; i+=Eval)
	{
		word = ExtractWord(str, i);
		Eval = IsStopWord(word, StopWords);
	//	cout<<"eval : "<<Eval<<endl<<"i : "<<i<<endl<<"size : "<<size<<endl;
		if (Eval == -1)
			Eval = StringSize(word)+1;
		else {
	//cout<<"i : "<<i<<endl;
//			cout<<"before str : "<<str<<endl;
			str = ShiftLeft(str, size, i, Eval);
//			cout<<"after str : "<<str<<endl;
			size -= Eval;
			i -= Eval;
		}
	}
	return ResizeStr(str);
}
int main()
{
	
/*	 string str = "Remo?ve,pu<nctu>atio*ns/from'sent;tence" ,
	
		str2 = "i see my reflection in the window",
		
		StopWords = "i,my,in,the";
	*/
	
	string str , str2 , 	StopWords = "i,my,in,the";
	 
	cout<<"Enter First string to remove punctuations : ";
	getline(cin , str);
	
	cout << "\nOriginal String : " << str << endl;
	str = RemovePunctuationMarks(str);
	
	cout << "Edited String : " << str << endl<<endl;
	
	cout<<"\nEnter second string to remove stopwords : ";
	getline(cin , str2);
	

	cout << "\nOriginal String : " << str2 << endl;
	str2 = RemoveStopWords(str2,StopWords);
	
	cout << "Edited String : " << str2 << endl;

	return 0;
}
