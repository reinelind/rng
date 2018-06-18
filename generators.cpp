#include "generators.h"
#include <string>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <random>
Generators::Generators()
{
    srand(time(0));
    for (int i = 0; i < 10; i++){
        vec.push_back(rand()%9000+1000);
    }
}

long int Generators::mmq(const int x){
    long int  squared = pow(x,2);
    std::string xStr = std::to_string(x);
    std::string squaredStr = std::to_string(squared);
    int lenX = xStr.length();
    int lenSquared = squaredStr.length();
    long int res;


    if ((lenSquared - lenX)%2 == 1) {
        squaredStr.erase(0, (lenSquared - lenX) / 2 + 1);
        std::reverse(squaredStr.begin(), squaredStr.end());
        squaredStr.erase(0,(lenSquared - lenX) / 2  );
        std::reverse(squaredStr.begin(), squaredStr.end());
    }
    else {
        squaredStr.erase(0, (lenSquared - lenX) / 2 );
        std::reverse(squaredStr.begin(), squaredStr.end());
        squaredStr.erase(0,(lenSquared - lenX) / 2 );
        std::reverse(squaredStr.begin(), squaredStr.end());
    }



    res = std::stol(squaredStr,nullptr, 10);

    if (std::to_string(res).length() < lenX) {
        std::string squaredStr = std::to_string(squared);
        if ((lenSquared - lenX)%2 == 1) {
            squaredStr.erase(0, (lenSquared - lenX) / 2);
            std::reverse(squaredStr.begin(), squaredStr.end());
            squaredStr.erase(0,(lenSquared - lenX) / 2 + 1 );
            std::reverse(squaredStr.begin(), squaredStr.end());
        }
        else {
            squaredStr.erase(0, (lenSquared - lenX) / 2 );
            std::reverse(squaredStr.begin(), squaredStr.end());
            squaredStr.erase(0,(lenSquared - lenX) / 2 - 1 );
            std::reverse(squaredStr.begin(), squaredStr.end());
        }
        res = std::stol(squaredStr,nullptr, 10);
    }

    return res;
}

long int Generators::lcg(const int x,const int a, const int c, const int m)
{

    return (a * x + c ) % m;
}

long int Generators::lemer (const int x, const int a, const int m)
{
    return (a * x) % m;
}

long int Generators::fib(){
    int n = vec.size();
    vec.push_back((vec[n-6]+vec[n-9])%10000);
    long int a = vec[vec.size()-1];
    return a;
}

long int Generators::comb(const int x, const int d, const int a, const int c, const int m)
{
    return (d*static_cast <long int>(pow(x,2))+a*x+c) % m;
}

long int Generators :: lin (const int m) {
    long int sum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        sum += vec[i];
    }
    vec.push_back(sum % m);
    return sum % m;

}

long int Generators::mult(const int x, const int c, const int m) {
    return x * c % m;

}


long unsigned int Generators::xorshift32 (long long unsigned int x)
{

    x ^= x >> 12;
    x ^= x << 25;
    x ^= x >> 27;
    return (x*0x2545F4914F6CDD1D)%10000;
}

long unsigned int Generators::mwc(){

    static unsigned long x=123456789, y=362436069,
            z=77465321, c=13579;
    unsigned long long t;
    t=916905990LL*x+c;
    x=y; y=z;
    c=(t>>32);
    return z=(t&0xffffffff)%10000;

}




