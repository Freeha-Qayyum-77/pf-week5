#include<iostream>
using namespace std;
void IsSymmetrical(int num);

main()
{
	int num;
	cout<<"Enter a three-digit number: ";
	cin>> num;
	IsSymmetrical(num);
}

void IsSymmetrical(int num)
{
	int a, b;
	a= num/100;
	b= num%10;
	if(a==b){
		cout<<"The number is symmetrical.";}
	else {
		cout<<"The number is not symmetrical.";}
		




}