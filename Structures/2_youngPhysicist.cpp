#include <iostream>

struct Force{
	int x;
	int y;
	int z;
}vect[100];//arr[0]==x, y, z // vect[0] is a Force object with members x, y, z.

int main(){

	int n =3;
    vect[0] = {4, 1, 7};
    vect[1] = {-2, 4, -3};
    vect[2] = {-2, -5, -4};

	int sumX =0;
    int sumY =0;
    int sumZ =0;
    for(int i =0; i < n; i++){
       sumX += vect[i].x;
       sumY += vect[i].y;
       sumZ += vect[i].z;
    }

    if (sumX == 0 && sumY ==0 && sumZ ==0)
        std::cout <<"YES";
    else
        std::cout << "NO";

	return 0;
}