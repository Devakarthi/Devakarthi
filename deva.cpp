#include <iostream>
using namespace std;

int main() {
	int n,i,fact=0;
	cout<<"enter the value";
	cin>>n;
	for(i=1;i<=n;i++)
	fact=fact*i;
	cout<<"The factorial is"<<n;
	return 0;
}
