#pragma once

// Resources and inspired from:
// https://pe2bz.philpem.me.uk/Comm01/-%20Digital/-%20MagneticCards/Info-900-MagCardDecode/magcard.html
// https://github.com/miaoski/magspoof/
// https://github.com/samyk/magspoof/
// https://github.com/joshlf/magspoof/

#include <stdint.h>

class MagSpoof
{
public:
    enum BPC
    {
        BPC7 = 7,
        BPC6 = 6,
        BPC5 = 5,
        BPC4 = 4,
    };

    enum Parity
    {
        Odd,
        Even
    };

    MagSpoof(uint8_t pinA, uint8_t pinB, uint8_t pinEnable, uint8_t clock, BPC bpc, Parity parity);

    void setup();

    char convertChar(char c);

    void playBit(int sendBit, uint8_t& dir);

    void playTrack(const char* track);

private:
    const uint8_t m_pinA;
    const uint8_t m_pinB;
    const uint8_t m_pinEnable;
    const uint32_t m_clock;
    const BPC m_bpc;
    const Parity m_parity;
};
