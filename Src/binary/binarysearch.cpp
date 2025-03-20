//
// Created by User on 27.02.2025.
//

#include "binarysearch.h"
int binarysearchClass::binarySearch(int arr[], int eleman){
    int index = 0;
    int ort = 0;

    int min_deger = 0 ;
    int maks_deger = 30;

    ort = (min_deger + maks_deger) / 2;

    while (true) {
        if (arr[ort] < eleman){

            min_deger = ort + 1;
        }
        if (arr[ort] > eleman){

            maks_deger = ort - 1;
        }
        if (eleman == arr[ort]) {

            index = ort;
            break;
        }

        ort = (min_deger + maks_deger) / 2;

    }
    return index;

}