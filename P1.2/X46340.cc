#include <iostream>
using namespace std;
int sum_min_max(int x,int y,int z){
    
    int max=0,min=0;
    
    if (x <= y and x <= z) {
                min = x;
                if (y <= z) max = z;
                else max = y;
    }else if (y <= x and y <= z) {
                min = y;
                if (x <= z) max = z;
                else max = x;
    }else {
                min = z;
                if (x <= y) max = y;
                else max = x;
    }
    
    return (max+min);

}
