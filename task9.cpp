#include<iostream>
using namespace std;

void time(int hrs, int mins);
main()
{
	int hr, min;
	cout<<"Enter Hours: ";
	cin>>hr;

	cout<<"Enter Minutes: ";
	cin>>min;

	time(hr,min);
}
void time(int hrs, int mins)
{
	int h, m, result;
	result = hrs*60 + mins + 15;
	h = result/60;
	m = result%60;
	cout<< h <<":"<< m ;
}