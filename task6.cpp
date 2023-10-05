#include<iostream>
using namespace std;
char checkAlphabetCase(char a);

main()
{
	char alphabet,result;
	cout<<"Enter a character (A/a): ";
	cin>>alphabet;
	result= checkAlphabetCase(alphabet);
	
}
char checkAlphabetCase(char a)
{
	char result;
 	if(a=='A')
	{
	
		cout<<"You have entered Capital "<< a;
	}
	if(a=='a')
	{
		
		cout<<"You have entered small "<< a;
	}
	return result;


}