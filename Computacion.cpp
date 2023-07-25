#include <iostream>
#include <fstream>
using namespace std;
int main(){
string a;
ofstream fich("fichero.txt");
cout<<"ingrese una oracion";
getline (cin,a);
fich<<a;
}
