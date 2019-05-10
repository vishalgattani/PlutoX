/*
 PlutoX API V.0.2
 */


#pragma once

#include <stdint.h>
#include "Specifiers.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum UARTportMode_s {

    //Specifies whether the Receive or Transmit mode is enabled or disabled.
    RX = 1 << 0,
    TX = 1 << 1,
    RXTX = RX | TX
} UARTportMode_e;

typedef enum UARTportOptions_s {
    NOT_INVERTED = 0 << 0,    //!< 0 V represents 0 and 3.3 V represents 1.
    INVERTED = 1 << 0,        //!<  0 V represents 1 and 3.3 V represents 0
    STOPBITS_1 = 0 << 1,      //!<Stop bits sent at the end of every character allow the receiving
    STOPBITS_2 = 1 << 1,      //!< signal hardware to detect the end of a character and to
                              //!<resynchronize with the character stream.
    PARITY_NO = 0 << 2,       //!< no parity
    PARITY_EVEN = 1 << 2,     //!< even parity
    UNIDIR = 0 << 3,          //!< Unidirectional
    BIDIR = 1 << 3            //!< Bidirectional
} UARTportOptions_e;

class UARTClass {
public:


    void init(uint32_t baud_rate, UARTportMode_e mode,UARTportOptions_e options);

    uint8_t read8();

    uint16_t read16();

    uint32_t read32();

    void write(uint8_t data);

    void write(const char *str);

    void write(uint8_t* data, uint16_t length);

    bool rxBytesWaiting(void);

    bool txBytesFree(void);

};

extern UARTClass UART;

#ifdef __cplusplus
}
#endif

