#include <iostream>
#include <fstream>

void readNumbers(std::ifstream& fin)
{
    int x;
    while(fin >> x)
    {
        std::cout << x << ' ';
    }
}
void writeNumbers(std::ofstream& fout)
{
    fout << 10 << ' ';
    fout << 20 << ' ';
}
int main(){

    std::ifstream fin;
    fin.open("data.txt");

    std::ofstream fout;
    fout.open("output.txt");
    
    readNumbers(fin);
    writeNumbers(fout);

    return 0;
}