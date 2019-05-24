#include<iostream>
#include<math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n=8,c=0,w=0;

int a[n];
for(int i=0;i<n;i++)

	cin >>a[i];
	int d=a[1]*a[2]/a[6];
	int m=a[3]*a[4];
	int gs=a[5]/a[7];
	int mn=(int)min(d,m);
	int t=(int)min(mn,gs)/a[0];
	cout << t;
	return 0;
}
