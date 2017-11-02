#include "msg.h"
#include <stdlib.h>
#include <time.h>

int msg(){
    srand(time(NULL));
    int r = rand(); 
    return r;
}
