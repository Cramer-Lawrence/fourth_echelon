#include "tick_handler.h"


int main () {

    tickHandler TickHandler{};
    TickHandler.beginTicking(); // just tick until the program is closed
    
    return 0;
}