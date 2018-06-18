#ifndef GENERATORS_H
#define GENERATORS_H
#include <vector>
class Generators
{
public:
    Generators();
    long int mmq (const int x = 246);
    long int lcg (const int x = 42,const int a = 106, const int c = 1283, const int m = 6075);
    long int fib();
    long int lemer(const int x = 42, const int a = 106, const int m = 6075);
    long int comb (const int x, const int d = 21, const int a = 106, const int c = 1283, const int m = 6075);
    long int mult (const int x, const int c = 242, const int m = 6075);
    long int lin (const int m = 6075);
    long int * mersenne (const int n );
    long unsigned int xorshift32 (long long unsigned int);
    long unsigned int mwc ();



private:
    std::vector <long int> vec;

};

#endif // GENERATORS_H
