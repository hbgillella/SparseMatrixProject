#include "SparseMatrix.h"
#include <iostream>

int main() {
    SparseMatrix sm;
    sm.insert(0, 1, 5);
    sm.insert(1, 2, 8);
    sm.insert(2, 0, 3);

    std::cout << "Sparse Matrix:" << std::endl;
    sm.display(3, 3);

    return 0;
} 
