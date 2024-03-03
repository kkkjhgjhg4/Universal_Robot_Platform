#include "lib_can.h"

int main(){
    LibCAN can0();

    while (1)
    {
        can0.can_send(buffer);

    }
    

    return 0;
}