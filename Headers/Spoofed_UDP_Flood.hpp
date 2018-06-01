#ifndef XERXES_SPOOFED_UDP_FLOOD_H
#define XERXES_SPOOFED_UDP_FLOOD_H

#include "Spoofed_Flood.hpp"

class Spoofed_UDP_Flood : public Spoofed_Flood {
public:
    explicit Spoofed_UDP_Flood(std::shared_ptr<Config> conf);

private:
    void attack() override;
    void init_headers(iphdr *ip, udphdr *udp, char *buf);
    void override_headers(udphdr *udp, iphdr *ip);
};


#endif //XERXES_SPOOFED_UDP_FLOOD_H
