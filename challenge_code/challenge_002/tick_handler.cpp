#include "tick_handler.h"
#include "print_out.h"

#include <chrono>
#include <vector>
#include <string>


void tickHandler::beginTicking(){

    auto Snapshot = std::chrono::high_resolution_clock::now();

    while(true) {
        auto CurrentTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<float> elapsed = CurrentTime - Snapshot;

        if (elapsed.count() >= TickDuration){
            prepareOutput();
            Snapshot = CurrentTime;
        }
    }
}

void tickHandler::prepareOutput(){
    std::vector<std::string> PrintVector{"Tick: "};
    
    TickCount++;
    std::string Tick = std::to_string(TickCount);
    PrintVector.insert(PrintVector.begin() + 1, Tick);

    printOut PrintOut;
    PrintOut.printString(PrintVector);
}