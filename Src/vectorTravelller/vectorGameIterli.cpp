#include <iostream>
#include <vector>

int muxVector(std::vector<int>& v) {

    int mux = 0;
    int muxElapsed = 1;
    std::vector<int>::iterator i = v.begin();

    while (i != v.end() ) {
        mux = (*i) * muxElapsed;
        muxElapsed = mux;
        std::cout << *i++ << " ";
    }

    std::cout << std::endl;
    std::cout << mux << " ";

    return mux;

}

void foo(std::vector<int>& arr)
{
    std::vector<int> mux_result ;


    int l_arr = arr.size();


    int tmp_value = 0;
    int mux = 0;
    int muxElapsed = 1;

    for (int index = 0; index < l_arr ; index++) {
        tmp_value = arr[0];
        arr.erase(arr.begin());
        std::cout << "bu indestle islem yapıyoz : " << index << std::endl;



        mux = muxVector(arr);


        std::cout << index << "icinhesaplanan carpım" << mux << std::endl;
        arr.push_back(tmp_value);
        mux_result.push_back(mux);

        std::cout << "array en son hal " << " ";
        for (int j = 0; j < arr.size() ;) {
            std::cout << arr[j] << " ";
            j++;
        }
        std::cout << std::endl;
        std::cout << "---------------"  << std::endl;



    }
    for (int j = 0; j < mux_result.size() ;) {
        std::cout << mux_result[j] << " ";
        j++;
    }


}


int main()
{
    std::vector<int> hell {1,2,3,4,5};
    foo(hell);
    return 0;
}
