#include <iostream>
#include <string>

struct Game{
    std::string home;
    std::string away;
};

int main(){

    int n;
    std::cout << "Enter the number of teams:";
    std::cin >> n;

    Game* teams = new Game[n];
//declare pointer wich has the address = have memory allocation for n objects and return the adress ofd the first object

    for(int i = 0; i < n; i++){
        std::cout << "Team nr" << i+1 <<" color." <<std::endl;
        std::cout << "Home game:";
        std::cin >> teams[i].home;
        std::cout << "Away game:";
        std::cin >> teams[i].away;
    }

    int cnt_conflicts =0;

    for(int i=0; i <n; i++){
        for(int j =0; j < n; j++){
            if (i != j && teams[i].home == teams[j].away)
                cnt_conflicts++;
        }
    }

    std::cout<< "Conflicts nr: "<< cnt_conflicts;
    delete[] teams;

    return 0;
}
