#include <xc.h>  // Inclui o arquivo de cabeçalho do PIC18F2550

// Configurações do compilador para o PIC18F2550
//#pragma config FOSC = HS   // Oscilador externo de alta velocidade
//#pragma config PLLEN = OFF // Desabilita o PLL
//#pragma config PCLKEN = OFF // Desabilita o Clock de Periféricos

#define _XTAL_FREQ 20000000  // Frequência do oscilador (20 MHz)

void main(void) {
    // Configura a direção das portas D como entrada (1) e da porta B como saída (0)
    TRISCbits.RC0 = 1;
    TRISB = 0x00;

    while (1) {
        // Lê o valor da porta D0 (entrada)
        unsigned char entrada = PORTCbits.RC0;

        // Escreve o valor lido na porta B (saída)
        LATB = entrada;
    }
}
