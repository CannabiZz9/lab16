#include <iostream>
using namespace std;

int main(){
    
    int a = 5, b = 'A', &c = b;
	int *x = &a , *y = &b , **z = &x;
	
    cout << a << " " << char(b) << " " << char(c) << " " << x << " " << y << " " << z << '\n';
	cout << &a << " " << &b << " " << &c << " " << &x << " " << &y << " " << &z <<'\n';
	c = 'F';
	cout << a << " " << char(b) << " " << char(c) << " " << x << " " << y << " " << z << '\n';
	*y = 'W';
	cout << a << " " << char(b) << " " << char(c) << " " << x << " " << y << " " << z << '\n';
	*x = 6;
	cout << a << " " << char(b) << " " << char(c) << " " << x << " " << y << " " << z << '\n';
	**z = 7;
	cout << a << " " << char(b) << " " << char(c) << " " << x << " " << y << " " << z << '\n';
	
	return 0;
}