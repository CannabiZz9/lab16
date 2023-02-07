#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &w,int &x,int &y,int &z){
	int a[4]={w,x,y,z};
	int b[4] = {0,0,0,0};
	for(int i=0;i<4;i++){
		b[i] = rand()%4;
		for(int j = 0;j<i;j++){
			if(b[i] == b[j]){
				i--;
				break;
			}
		}
	}
	w = a[b[0]];
	x = a[b[1]];
	y = a[b[2]];
	z = a[b[3]];
}