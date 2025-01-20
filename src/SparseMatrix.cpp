#include "SparseMatrix.h"
#include <iostream>

SparseMatrix::SparseMatrix() : head(nullptr) {}

void SparseMatrix::insert(int row, int col, int value) {
    Node* newNode = new Node(row, col, value);
    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void SparseMatrix::display(int rows, int cols) {
    Node* temp = head;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (temp && temp->row == i && temp->col == j) {
                std::cout << temp->value << " ";
                temp = temp->next;
            } else {
                std::cout << "0 ";
            }
        }
        std::cout << std::endl;
    }
} 
