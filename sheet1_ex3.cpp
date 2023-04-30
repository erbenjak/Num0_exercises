// Programm to test the zero addition problem
#include <iostream>
#include <limits>


template<typename T> T do_zero_addition(T &x, T y){
    return x + y;
}

template<typename T> T perform_zero_addition_test(){
    //configure input and output specitifity according to the tested datatype
    std::cout.precision(std::numeric_limits<T>::digits10);
    
    //read input, which is to test
    std::cout << std::endl << "Please enter the "<< typeid(T).name() \
    <<" you want to test for zero-addition" << std::endl;
    T test;
    std::cin >> test;
    
    //calculate and display result
    T result = do_zero_addition<T>(test, 1.0);
    std::cout<<"The result is: "<< result << std::endl;
}


int main() {
    std::cout << "If you want to use this script type: "<< \ 
    "-for floats type f -for double type d" << std::endl;
    char indicator = 'e';
    std::cin >> indicator;
    
    //calling the methode with the wanted datatype
    if(indicator=='d'){
        perform_zero_addition_test<double>();
    }else if(indicator=='f'){
        perform_zero_addition_test<float>();
    }else{
        std::cout<< "Unsupported input." << std::endl;
    }

    return 0;
}