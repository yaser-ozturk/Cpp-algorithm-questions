#include <iostream>
#include <vector>

void foo(std::vector<int>& arr)
{
    std::vector<int> mux_result ;

    auto l_arr = arr.size();


    int mux = 1;


    for (int j = 0; j < arr.size() ;j++) {

        mux = arr[j] * mux;
    }

    mux_result.resize(l_arr);
    for (int j = 0; j < arr.size() ;j++) {

        mux_result.push_back((mux/arr[j]));
    }

    for (int j = 0; j < mux_result.size() ;) {
        std::cout << mux_result[j] << " ";
        j++;
    }


}


int main()
{
    std::vector<int> hell { 1,2,3,4,5};
    foo(hell);
    return 0;


}
