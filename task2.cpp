#include<iostream>
#include<cmath>
using namespace std;
main()
{
	float base, expo, result;
	cout<<"Enter the base number: ";
	cin>>base;
	cout<<"Enter the exponent: ";
	cin>>expo;
	result= pow(base, expo);
	cout<<base <<" raised to the power "<<expo <<" is: " <<result;
	return 0;
}