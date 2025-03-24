#include <iostream>
#include <vector>
#include "binarysearch.h"
#include "vectorGame.h"
#include "handMadeBuffer.h"
#include "linked.h"

int main() {

    /* Binary Search

    int index = 0 ;
    int eleman = 10;
    int array[30] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29};
    binarysearchClass a;

    index = a.binarySearch(array, eleman);

    // index = b.binaryserach(array, eleman);

    std::cout << index << std::endl;
    */

    /* BUFFER SORUSU
    std::vector<int> hell {1,2,3,4,5};
    vectorGameClass a;
    a.foo(hell);
    return 0;
    */

    /* Hand made buffer
    HandMadeBufferClass<int> a;

    a.bufwrite(3);
    a.showbuf();
    */

    /* //NODE TEST
    Node<int>* root = new Node<int>(3);
    std::cout << root->data << std::endl;

    Node<int>* temp = new Node<int>(5);
    root->next = temp;

    Node<int>* n = new Node<int>(2);
    temp->next = n;

    Node<int>* pp = root;
    while (pp != nullptr) {
        std::cout << pp->data << std::endl;
        pp = pp->next;
    }
    */

    /*
    // LİNKED LİST TEST
    LinkedList<int> L;
    L.pushback(5);
    L.pushback(2);
    L.pushback(3);
    L.pushback(2);
    L.pushback(5);

    L.print();
    std::cout << std::endl;

    L.DualEleminater();
    L.print();

     */






    return 0;
}

