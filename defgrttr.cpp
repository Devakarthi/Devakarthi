#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<string>cars={"volvo","BMW","Ford","Mazda"};
	for(string car: cars) {
		cout<<car<<"\n";
	}
	return 0;
}
