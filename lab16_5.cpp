#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *w,int *x,int *y,int *z){
	int f[4]={*w,*x,*y,*z};
	int g[4] = {0,0,0,0};
	for(int i=0;i<4;i++){
		g[i] = rand()%4;
		for(int j = 0;j<i;j++){
			if(g[i] == g[j]){
				i--;
				break;
			}
		}
	}
	*w = f[g[0]];
	*x = f[g[1]];
	*y = f[g[2]];
	*z = f[g[3]];
}
