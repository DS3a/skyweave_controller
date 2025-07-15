#include "crtp.h"
#include "Crazyflie.h"

#include <iostream>

int main(int argc, char** argv) {
    // Initialize the CRTP connection

    crtpPacket_t thrusts_packet;
    std::cout << "CRTP Packet Size: " << sizeof(thrusts_packet) << std::endl;
   return 0;
}