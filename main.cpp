#include <iostream>
#include <cmath>
using namespace std;


int main(){
    const float pi = 3.1415f;
    unsigned int a;
    cin >> a;
    cout << a<<endl;
    
    float radius;
    cout << "radius = ";
    cin >> radius;
    
    float SurfaceArea = pow(radius,2)*4*pi;
    float Volume = (4 * pow(radius,3)*pi)/3;

    cout<< "Sarface area = "<< SurfaceArea << " type = float, bit = 32"<< endl;
    cout<< "Volume = "<< Volume << " type = float, bit = 32"<< endl;

    return 0;
}