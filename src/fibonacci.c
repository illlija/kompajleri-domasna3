#include "fibonacci.h"

int fibonacci(int n){
    for(int i=0; i<n; i++){
        if(n == 0){
            return 0;
        }
        else if(n == 1){
            return 1;
        }
        else
            return fibonacci(n - 1) + fibonacci(n - 2);
    }
    return 0;

}
