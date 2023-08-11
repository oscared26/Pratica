#include <xc.h>  // Inclui o arquivo de cabeçalho do PIC18F2550

// Configurações do compilador para o PIC18F2550
//#pragma config FOSC = HS   // Oscilador externo de alta velocidade
//#pragma config PLLEN = OFF // Desabilita o PLL
//#pragma config PCLKEN = OFF // Desabilita o Clock de Periféricos

#define _XTAL_FREQ 20000000  // Frequência do oscilador (20 MHz)

void main(void) {
    // Configura a direção da porta RB0 como saída (0)
    TRISBbits.TRISB0 = 0;

    while (1) {
        // Liga o LED conectado ao pino RB0
        LATBbits.LATB0 = 1;

        // Aguarda um curto período de tempo (aproximadamente 500 ms)
        __delay_ms(500);

        // Desliga o LED conectado ao pino RB0
        LATBbits.LATB0 = 0;

        // Aguarda novamente um curto período de tempo
        __delay_ms(500);
    }
}
