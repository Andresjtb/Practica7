
#include "device_config.h"
#include <xc.h>


void portInit(){
    ANSELB = 0; 
    ANSELD = 0;
    TRISB = 0b11110000; 
    TRISD = 0b00000000; 
}

void main(void) {
    portInit();
    unsigned short columnas = 0;
    
    while(1){
        if (columnas < 3){
            columnas++;
        } else{
            columnas = 0;
        }
        
        switch(columnas){
            case 0: LATB |= 0x0E; break;  
            case 1: LATB |= 0x0D; break; 
            case 2: LATB |= 0x0B; break; 
            case 3: LATB |= 0x07; break; 
            default : LATB &= 0x0; break; 
        }
        

        if (PORTB == 0xEE){
            LATD <<= 4;
            LATD |= 0x01;
        } else if (PORTB == 0xDE){
            LATD <<= 4;
            LATD |= 0x04;
        } else if (PORTB == 0xBE){
            LATD <<= 4;
            LATD |= 0x07;
        } else if (PORTB == 0x7E){
            LATD <<= 4;
            LATD |= 0x0F;
        } else if (PORTB == 0xED){
            LATD <<= 4;
            LATD |= 0x02;
        } else if (PORTB == 0xDD){
            LATD <<= 4;
            LATD |= 0x05;
        } else if (PORTB == 0xBD){
            LATD <<= 4;
            LATD |= 0x08;
        } else if (PORTB == 0x7D){
            LATD <<= 4;
            LATD |= 0x00;
        } else if (PORTB == 0xEB){
            LATD <<= 4;
            LATD |= 0x03;
        } else if (PORTB == 0xDB){
            LATD <<= 4;
            LATD |= 0x06;
        } else if (PORTB == 0xBB){
            LATD <<= 4;
            LATD |= 0x09;
        } else if (PORTB == 0x7B){
            LATD <<= 4;
            LATD |= 0x0E;
        } else if (PORTB == 0xE7){
            LATD <<= 4;
            LATD |= 0x0A;
        } else if (PORTB == 0xD7){
            LATD <<= 4;
            LATD |= 0x0B;
        } else if (PORTB == 0xB7){
            LATD <<= 4;
            LATD |= 0x0C;
        } else if (PORTB == 0x77){
            LATD <<= 4;
            LATD |= 0x0D;
        }    
        
    }
   
    
    return;
}