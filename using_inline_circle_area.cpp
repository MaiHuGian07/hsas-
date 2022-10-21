#include <iostream>
#define PI 3.14
using namespace std;
inline float area_circle(float r);
int main() {
	float r;
	cout<<"Enter radius of circle : ";
	cin>>r;
	cout<<"Area : "<<area_circle(r)<<" sq. units"<<endl;
	return 0;
}
inline float area_circle(float r){
 return PI*r*r;
}
