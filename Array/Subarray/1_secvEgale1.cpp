/*Se dă un vector cu n elemente, numere naturale. Determinați cea mai lungă secvență de elemente din vector care începe și se termină cu aceeași valoare. 
Dacă în vector există mai multe secvențe corecte de lungime maximă se va determina cea mai din stânga.*/
#include <iostream> 
#include <vector>

int main(){
    int n; //number of values
    int x; //the values

    std::cin >> n; //ex: 12
    std::vector<int> v(n+1);

    for(int i = 1; i<=n; i++){
        std::cin >> x;
        v[i] = x; //ex: 6 6 8 3 6 6 3 8 4 3 3 4
    }

    int stg = 0, dr = 0;
    int max_length = 1; // with j-i+1 = subarray length

    for(int i = 1; i <= n; i++){// i = starting point
        for(int j = i+1; j<=n; j++){// j = end point

            if(v[i] == v[j] && (j - i + 1)> max_length){

                max_length = j-i+1;
                stg = i;
                dr = j;
            }
        }
    }
    std::cout << "stg: " << stg << " ;" << "dr: " << dr << " ;"<< "with the length: " << max_length;

    return 0;
}