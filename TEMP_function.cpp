#include <iostream>

using namespace std;

template <class T1   ,class T2 >//custom data type

float avg(T1 a, T2 b){

float res = (a+b)/2.0 ; 

return res;
};

int main()
{
float res = avg<int ,float >(8,10.23);
   cout <<res <<endl;
    return 0;
}
