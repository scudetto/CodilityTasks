#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    int result = 0;

    for(int i=0; i<A.size();i++)
    {
        result ^= A[i];
    }

    return result;
}


int main(int argc, char *argv[])
{

    vector<int> myVec = {9,3,9,3,9,7,9};

    cout<<solution(myVec)<<endl;

    return 0;
}
