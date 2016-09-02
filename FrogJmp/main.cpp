#include <iostream>

using namespace std;

int solution(int X, int Y, int D) {
    // write your code in C++11 (g++ 4.8.2)

    int distance = Y-X;

    int result = distance / D;

    if((distance % D) != 0)
        result +=1;

    return result;
}

int main(int argc, char *argv[])
{
    //result and comment https://codility.com/demo/results/training3EPARM-VPE/
    cout<<solution(5,105,3)<<endl;

    return 0;
}
