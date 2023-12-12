#include <iostream>
#include <cstdlib>

using namespace std;

struct node {
    int info;
    node *next;
};

node *create_new_node(int);
void push(node *&, node *);
void display(node *);

node *top = NULL; // Deklarasi variabel top

int main() {
    char ch = 'y';

    while (ch == 'y' || ch == 'Y') {
        int value;
        cout << "Masukkan nilai untuk ditambahkan ke dalam stack: ";
        cin >> value;

        node *newNode = create_new_node(value);
        push(top, newNode);

        cout << "\nAntrian tumpukan saat ini:\n";
        display(top);

        cout << "\nIngin menambah antrian? (y/n): ";
        cin >> ch;
    }

    cout << "Tekan tombol apa saja untuk keluar..\n";
    getchar(); 

    exit(1);
}

node *create_new_node(int x) {
    node *ptr = new node;
    ptr->info = x;
    ptr->next = NULL;
    return ptr;
}

void push(node *&top, node *n) {
    if (top == NULL) {
        top = n;
    } else {
        n->next = top;
        top = n;
    }
}

void display(node *n) {
    while (n != NULL) {
        cout << n->info << " -> ";
        n = n->next;
    }
    cout << "!!\n";
}

