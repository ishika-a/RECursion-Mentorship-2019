#include<iostream>
#include<math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,pos,p,d=0,c=0,e=0,mi;

cin >> n;int a[n],b[n];
for(int i=0;i<n;i++)

	cin >>a[i];
	for(int i=0;i<n;i+=3)

{	
	c=c+a[i];
	if(i+1<n)
	
	d=d+a[i+1];
	if(i+2<n)
	e=e+a[i+2];

}
if(c>d && c>e)
cout<<"chest";
if(c<d && d>e)
cout<<"biceps";
if(e>d && c<e)
cout<<"back";
return 0;
}
