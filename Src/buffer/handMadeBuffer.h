//
// Created by User on 6.03.2025.
//

#ifndef HANDMADEBUFFER_H
#define HANDMADEBUFFER_H

#include <iostream>
#include <vector>


template <class T>
class HandMadeBufferClass {

    std::vector<T> v = {0,0,0,0,0};
    T* head = v.data();
    T* tail = v.data();
    int count_h = 0;
    int count_t = 0;
    int count = 0 ;


public:

    void bufread(){
        if (count > 0) {
            if (count_t>=v.size()) {
                tail = v.data();
                std::cout<< *tail <<std::endl;
                tail++;
            }
            else{
                std::cout<< *tail <<std::endl;
                tail++;
                count_t++;
                count--;
            }
        }
        else {
            std::cout<< "okuyamam buffer bos" <<std::endl;
        }


    }

    void bufwrite(T value){
        if (count_h>=v.size()) {

            head = v.data();
            *head = value;
            count_h = 0;
            // ?
        }
        else {
            *head = value;
            head++;
            count_h++;
            count++;
        }

    }

    void showbuf() {
        for (int j = 0; j < v.size() ;) {
            std::cout << v[j] << " ";
            j++;
        }
    }

};
#endif //HANDMADEBUFFER_H
