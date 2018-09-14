#include <iostream>
using namespace std ; 
int main () 
{

	int x ; 
	cout << " enter your number : " ; 
	cin >> x ; 
	switch (x) 
	{
		case 10 : 
			cout << "you are in the first case \n " ; 
			break ; 
		case 20 : 
			cout << "you are in the second case \n " ; 
			break ; 
		case 30 : 
			cout << "you are in the third case \n " ;
			break ; 
		case 40 : 
			cout << " you are in the fourth case \n " ; 
			break ;
		case 50 :
			cout << " you are in the fifth case \n ";
			break ;
		default : 
			cout << " you are in the default case \n " ; 
			break ; 
	}
	return 0 ;
}