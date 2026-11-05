#include <iostream> 

int main(){
    int n, x, x_copy;
    //reading how many numbers 
    std::cin >> n;

    int s = 0;
    for(int i = 1; i<=n; i++)
    {
        std::cin >> x;
        x_copy = x;
        int ogl = 0;

        while(x_copy != 0){
            ogl = ogl * 10 + (x_copy % 10);
            x_copy /= 10;
        }
        for(int j = 1; j*j <=ogl; j++){

            if(ogl%j == 0){
                int d = ogl/j;
                if(d==j){
                    s+= j;
                }
                else if(j == 1)
                {
                    s+= j + ogl;
                }
                else
                    s+= j + d;
            }
        }
    }
    std::cout << "The total sum of the divizors of the mirrored numbers is: " << s;

    return 0;
}