#include<iostream>
using namespace std;
float min(float a, float b);

main()
{
float num1, num2, minNum;
cout<<"Enter the first number: ";
cin>> num1;
cout<<"Enter the second number: ";
cin>>num2;
minNum = min(num1, num2);
}

float min(float a, float b)
{
float min;
if(a>b)
{
    min=b;
    cout<<"The minimum of " << a << " and " << b << " is: "<<b;
}
else 
{ 
    min=a;
    cout<<"The minimum of " << a << " and " << b <<" is: "<<a;
}
return min;
}

