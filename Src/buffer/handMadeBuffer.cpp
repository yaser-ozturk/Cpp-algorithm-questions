//
// Created by User on 6.03.2025.
//

#include <iostream>
#include <vector>
// #include "handMadeBuffer.h"
template <typename  T>
void HandMadeBufferClass<T>::showbuf(){
    for (int j = 0; j < v.size() ;) {
        std::cout << v[j] << " ";
        j++;
    }

}


/*
int main() {

    bufbuf<float> buf;

    buf.bufwrite(1.2);
    buf.bufwrite(2);
    buf.bufwrite(3);
    buf.bufwrite(4);
    buf.bufwrite(5);


    buf.bufread();
    buf.bufread();
    buf.bufread();
    buf.bufread();
    buf.bufread();
    buf.bufread();

    buf.showbuf();
}

*/




