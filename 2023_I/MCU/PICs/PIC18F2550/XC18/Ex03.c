#include <xc.h>

// Configurações do compilador

#define _XTAL_FREQ 20000000
#pragma config PLLDIV   = 4
#pragma config CPUDIV   = 0
#pragma config FOSC     = HS
#pragma config WDT      = OFF
#pragma config LVP      = OFF
#pragma config BOR      = OFF
#pragma config MCLRE    = OFF
#pragma config PWRT     = OFF
#pragma config PBADEN   = OFF
#pragma config WDT = OFF


void main() {
    OSCCONbits.SCS=0b00;
    TRISAbits.TRISA0 = 0;     // Define RA0 como saída
    
    while(1) {
        PORTAbits.RA0 = 1;    // Liga o LED em RA0
        __delay_ms(1000);     // Aguarda 1 segundo
        
        PORTAbits.RA0 = 0;    // Desliga o LED em RA0
        __delay_ms(1000);     // Aguarda 1 segundo
    }
}
