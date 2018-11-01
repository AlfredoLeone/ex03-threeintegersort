//
// Created by alfredo on 11/1/18.
//

#include <iostream>
#include "threeintegersort.h"
#include <math.h>

using std:: cout;
using std:: cin;
using std:: endl;
using edu::vcccd::vc::csv13::sort;


int main(){
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "input 3 integers values with spaces between them\n";
    cin >> a >> b >> c;

    sort(a, b, c);

    cout << a << " " << b << " " << c << endl;

}