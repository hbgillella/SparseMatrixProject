#ifndef SPARSE_MATRIX_H
#define SPARSE_MATRIX_H

struct Node {
    int row;
    int col;
    int value;
    Node* next;

    Node(int r, int c, int v) : row(r), col(c), value(v), next(nullptr) {}
};

class SparseMatrix {
private:
    Node* head;

public:
    SparseMatrix();
    void insert(int row, int col, int value);
    void display(int rows, int cols);
};

#endif // SPARSE_MATRIX_H 
