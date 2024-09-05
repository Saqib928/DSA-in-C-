#include <iostream>
using namespace std;
int main(){
    //integer datatype store 4 bytes
    int a = 123;
    cout<<"integer value : "<< a << endl;
    //float datatype store 8 bytes
    float b = 4.2;
    cout<<"Float value : " << b << endl;
    //Double datatype store 12 bytes
    double c = 3.2428;
    cout<<"double value : " << c << endl;
    //character datatype store 2 bytes
    char d = 65;
    cout<< "Character : " << d << endl;
    //Bool datatype store 0 or 1 means true and false value
    bool e = true;
    cout<<"boolean value : " << e << endl;
    //Size function used for finding size of datatype
    int size = sizeof(c);
    cout<<"size of  C is : "<< size << endl;
}