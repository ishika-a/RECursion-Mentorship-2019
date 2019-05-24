#include<iostream>
#include<math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,k,c=0,w=0;

cin >> n;
if(n%2!=0){
	cout <<-1;
	return 0;
}
int a[n];
for(int i=0;i<n;i+=2)
{
	
	a[i]=i+2;
	a[i+1]=i+1;
	
}
for(int i=0;i<n;i++)
cout << a[i]<< " ";
return 0;
}
