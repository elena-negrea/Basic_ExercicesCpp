#include <iostream> 
#include <cstdint>

int main(){

    uint64_t board = 0; // occupied or free

    const int BOARD_SIZE = 64;
    const int BOARD_WIDTH = 8;

    /*
    int position = 1; // keep in mind that bits have index starting at 0, so 1 is actually bit 2
    board = board | (1ULL << position); // move the bit 1 on the position 

    
    if(board & (1ULL << position)) // verify if the bit at the position is 1 or not
        std::cout << "it s on the position\n";
    else 
        std::cout << "There's nothing\n";
    */

    enum Board_pos {
        A1, B1, C1, D1, E1, F1, G1, H1,
        A2, B2, C2, D2, E2, F2, G2, H2,
        A3, B3, C3, D3, E3, F3, G3, H3,
        A4, B4, C4, D4, E4, F4, G4, H4,
        A5, B5, C5, D5, E5, F5, G5, H5,
        A6, B6, C6, D6, E6, F6, G6, H6,
        A7, B7, C7, D7, E7, F7, G7, H7,
        A8, B8, C8, D8, E8, F8, G8, H8
    }; //digits = line, letter = collumn

    uint64_t blackSquares = 0;
    //uint64_t whiteSquares = 0; 

    /*NOTE: we know that the board starts with black square on the position 0. 
    so we have even nr = black and odd nr = white
    BUT at the nest row, it s the other way, inverse
    so we make the trick with row and col. 
    ex: row 1 col 3 => 1+3 = 4 % 2 == 0. And its black indeed*/

    for(int i = 0; i < BOARD_SIZE; i++){//mark the black squares
        int row = i / BOARD_WIDTH; 
        int col = i % BOARD_WIDTH;
        if((row + col) % 2 == 0){
            blackSquares |= (1ULL << i); // | here is used to can add the bit where we want withouth changing the others
        }

    }
/*NOTE: if you want to show the bits of a value, you have to write the bits from the bigger position to 0 */
    for(int i = (BOARD_SIZE - 1); i >= 0; i--){//showing the bits with the blacks
        if(blackSquares & (1ULL << i))
            std::cout << 1;
        else
            std::cout << 0;
       
            if(i % BOARD_WIDTH == 0)
                std::cout << std::endl;
    }

    
    return 0;
}