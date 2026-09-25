#include <iostream>
#include <fstream> // always for read/write process with files



int main()
{

    std::ifstream fin;
    // Declaration input file(READ) stream name

    fin.open("data.txt"); // Open the file, this way we associate the stream with the data.txt

    // verify if it s open
    if (!fin.is_open())
    {
        std::cout << "Could not open the file. \n";
        return 1;
    }
    else
        std::cout << "yey. It's open! \n";

    int x;
    fin >> x;
    std::cout << " file_valueX1 = " << x << std::endl;
    fin >> x;
    std::cout << " file_valueX2 = " << x << std::endl;
    fin >> x;
    std::cout << " file_valueX3 = " << x << std::endl;

    fin.close();

    fin.open("data.txt");

    while (fin >> x) // We can actually put the read operation as a condition
    {
        std::cout << "in while: " << x << '\n';
        /*NOTE
        fin >> x

reușește citirea
 ↓
stream-ul este într-o stare bună
 ↓
în condiția lui while → true
 ↓
intrăm în while

fin >> x

nu mai există nimic de citit
 ↓
citirea eșuează
 ↓
stream-ul intră într-o stare de eroare/eof
 ↓
în condiția lui while → false
 ↓
while se oprește*/
    }
    fin.close();

    std::ofstream fout;
    // Declaration output file(WRITE) stream name
    fout.open("output.txt"); // Open for writing
    // if the output.txt dosen t exist, it will be created by ofstream
    fout << "Miaw2";
    fout.close();

    // Append Mode: write after the existing contents
    fout.open("output.txt", std::ios::app);
    fout << " Miaw3";
    fout.close();

    // IN and OUT + program combined
    fin.open("data.txt");
    fout.open("output.txt");

    while (fin >> x)
    {
        // fin >> x; - wrong bcs you are already reading
        fout << x << ' ';
    }
    fin.close();
    fout.close();

    // Operation
    //  FILE PROCESSING - write only even numbers

    fin.open("data.txt");
    fout.open("output.txt");

    while (fin >> x)
    {
        if (x % 2 == 0)
        {
            fout << x << ' ';
        }
    }

    fin.close();
    fout.close();
 /*
    
    fin.open("data.txt");
    fout.open("output.txt");

    
    
    fin.close();
    fout.close();
*/

    return 0;
}