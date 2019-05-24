#include<iostream>
#include<math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,k,l=0,d=0,w=0;

cin >> n >>k;
for(int i=1;i<=6;i++)
{
	int a=(int)abs(n-i);

int b=(int)abs(k-i);

if(a<b)
l++;
else if(a==b)
d++;
else
w++;	
	
}
cout <<l << " "<< d << " "<<w;
return 0;
}
