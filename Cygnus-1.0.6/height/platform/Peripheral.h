/*
 PlutoX API V.0.2
 */


#pragma once

#include <stdint.h>
#include "Specifiers.h"

#ifdef __cplusplus
extern "C" {
#endif

extern bool gpioReset;
extern bool changeAdress;


typedef enum{
    AIN,              //!< analog Input
    IN_FLOATING,      //!<input floating
    IPD,              //!<input pulled down
    IPU,              //!<Input with pull-up resistor
    Out_OD,           //!<output open drain
    Out_PP,           //!<output push-pull
    AF_OD,            //!<alternate function open drain
    AF_PP,            //!<alternate function push pull
    AF_PP_PD,         //!<alternate function push pull with pull down register
    AF_PP_PU          //!<alternate function push pull with pull up register
} GPIO_Mode_e;

typedef enum {
    SP_10MHz = 1,
    SP_2MHz=2,
    SP_50MHz =3
} GPIO_Speed_e;

typedef enum GPIOAF_s {
    AF0, //!<AF0:JTCK-SWCLK, JTDI, JTDO/TRACESW0, JTMS-SWDAT, MCO, NJTRST,TRACED, TRACECK.
    AF1, //!<AF1:OUT, TIM2, TIM15, TIM16, TIM17.
    AF2, //!<AF2:COMP1_OUT, TIM1, TIM2, TIM3, TIM4, TIM8, TIM15, TIM16.
    AF3, //!<AF3:COMP7_OUT, TIM8, TIM15, Touch, HRTIM.
    AF4, //!<AF4:I2C1, I2C2, TIM1, TIM8, TIM16, TIM17.
    AF5, //!<AF5:IR_OUT, I2S2, I2S3, SPI1, SPI2, TIM8, USART4, USART5
    AF6, //!<AF6:IR_OUT, I2S2, I2S3, SPI2, SPI3, TIM1, TIM8
    AF7, //!< AF7:AOP2_OUT, CAN, COMP3_OUT, COMP5_OUT, COMP6_OUT, USART1,USART2, USART3.
    AF8, //!< AF8:COMP1_OUT, COMP2_OUT, COMP3_OUT, COMP4_OUT, COMP5_OUT,COMP6_OUT.
    AF9, //!<AF9:AOP4_OUT, CAN, TIM1, TIM8, TIM15.
    AF10, //!<AF10:AOP1_OUT, AOP3_OUT, TIM2, TIM3, TIM4, TIM8, TIM17.
    AF11, //!<AF11:TIM1, TIM8.
    AF12, //!<AF12:TIM1, HRTIM.
    AF13, //!< AF13:HRTIM, AOP2_OUT.
    AF14, //!<AF14:USBDM, USBDP.
    AF15 //!<AF15:OUT.

} GPIOAF_e;


class GPIOClass {
public:

    void Init(unibus_e pin_number, GPIO_Mode_e mode, GPIO_Speed_e speed);


    void AFConfig(unibus_e pin_number, GPIOAF_e AF);


    void setHigh(unibus_e pin_number);


    void setLow(unibus_e pin_number);


    bool read(unibus_e pin_number);

};


class TimerClass {
public:

    TimerClass();

    void init(unibus_e pin_number, uint16_t hz);

    void setPWM(uint16_t value);

private:

    class TimerImpl;
    TimerImpl* timerimpl_;

};


class ADCClass {
public:

    void Init(unibus_e pin_number);

   uint16_t Read(unibus_e pin_number);
};

extern GPIOClass GPIO;
extern ADCClass ADC;

#ifdef __cplusplus
}
#endif

