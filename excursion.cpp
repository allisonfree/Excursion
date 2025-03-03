#include <iostream>
#include <fstream>
using namespace std;

//given numbers matrix and a labels matrix


int main(){
    int numbers;
    int A[3][3] = {0};
    int sourceNodes[3] = {1, 1, 2};
    int destinationNodes[3] = {0, 2, 0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << A[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < 3; i++){
        A[sourceNodes[i]][i] = 1; //is a source node
        A[destinationNodes[i]][i] = -1; // is a destination node
        //cout << i << ": " << sourceNodes[i] <<  ", " << destinationNodes[i] << endl;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << A[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}