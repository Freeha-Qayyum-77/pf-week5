#include<iostream>
using namespace std;
void OddishOrEvenish(int a);

main()
{
	int num;
	cout<<"Enter a five-digit number: ";
	cin>>num;
	OddishOrEvenish(num);
	
}
void OddishOrEvenish(int a)
{
	if (a%2==1)
		cout<<"Oddish";
 
	if(a%2==0)
		cout<<"Evenish";
}