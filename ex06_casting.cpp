#include <iostream>
using namespace std;

int main() 
{
   /*
    int a = 'A';
    cout << a << endl; //conversie implicita char la int

    int n = 5; 
    double x = 5.75;
   
    //x = n; //int la double
    //cout << x << ' ' << n << endl; => output: 5 5 adica 5.0 5.0


    n = x; //double la int
    cout << x << ' ' << n << endl; // output: 5.75 5 */

    /* //MEDIA ARITMETICA
    int a, b, c; 
    cin >> a >> b >> c ;
    int S = a + b + c;

    //cout << S/3.0; /// 2 3 5 -> 3.33333 bcs of 3.o
    //cout << 1.0*S/3;//  2 3 5 -> 3.33333 bcs of 1.0
    cout << (double)S/3; // 2 3 5 -> 3.33333 bcs of explicit conversion */

    /*
    int n = 1000000;
    cout <<  n * n << endl; // -727379968
    cout << 1LL * n * n << endl; // 1000000000000 */

    int num_int = 10;
    float num_float = static_cast <float>(um_int);
    cout << num_it << ' ' << um_float;









    return 0;

}