#include <iostream>
#include <cmath>
using namespace std;


int main(){
    const float pi = 3.1415f;
    float radius;
    cout << "radius = ";
    cin >> radius;
    
    float SurfaceArea = pow(radius,2)*4*pi;
    float Volume = (4 * pow(radius,3)*pi)/3;

    cout<< "Sarface area = "<< SurfaceArea << endl;
    cout<< "Volume = "<< Volume << endl;

    return 0;
}