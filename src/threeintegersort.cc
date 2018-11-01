//
// Created by alfredo on 11/1/18.
//
//
#include <threeintegersort.h>
#include<cfloat>
#include<math.h>
#include<iostream>

namespace edu{
    namespace vcccd{
        namespace vc{
            namespace csv13{



                using std::cout;
                using std::cin;

                int sort (int &a, int &b, int &c){
                    int bigger = 0;
                    int middle = 0;
                    int smallest = 0;

                    if(a >= b && a >= c) {
                        bigger = a;
                    }
                    if (a <= b && a <= c) {
                        smallest = a;
                    }
                    else {
                        middle = a;
                    }


                    if(b >= a && b >= c) {
                        bigger = b;
                    }
                    if (b <= a && b <= c) {
                        smallest = b;
                    }
                    else {
                        middle = b;
                    }


                    if(c >= a && c >= b) {
                        bigger = c;
                    }
                    if (c <= a && c <= b) {
                        smallest = c;
                    }
                    else {
                        middle = c;
                    }
                    a=smallest;
                            b=middle;
                            c=bigger;

                    return 0;


                }

            }
        }
    }
}