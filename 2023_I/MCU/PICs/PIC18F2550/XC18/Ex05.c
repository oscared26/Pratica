#include <xc.h>
#include <stdint.h>

#define _XTAL_FREQ 20000000

#pragma config PLLDIV   = 4
#pragma config CPUDIV   = 3
#pragma config FOSC     = HSPLL_HS

#pragma config WDT      = OFF
#pragma config LVP      = OFF
#pragma config BOR      = OFF
#pragma config MCLRE    = OFF
#pragma config PWRT     = OFF
#pragma config PBADEN   = OFF
#pragma config WDT = OFF


void numero_to_display(uint8_t);

void main() {
    OSCCONbits.SCS=0b00;
    OSCCONbits.IRCF=0b111;
    uint8_t unidades=0,dezenas=0,contador=0;
    TRISB = 0b00000000;   
    TRISA = 0b00000000;
    while(1) {

    
      dezenas=contador/10;
      unidades=contador%10;
      
      for(int i=0;i<=49;i++){
          
      
      PORTA=0b000010; 
      numero_to_display(dezenas); 
      __delay_ms(10); 
        PORTA=0b000001;        
      numero_to_display(unidades);        
      __delay_ms(10);   
            
      }

    if(contador>=99){
      contador=0;
    }
    else{
      contador=contador+1;
    }        
        
       
        
    }
}

void numero_to_display(uint8_t numero)
{
   switch(numero){
     case 0:   
	       PORTB=0b01000000;
	       break;
     case 1:   
	       PORTB=0b01111001;
	       break;
     case 2:   
	       PORTB=0b00100100;
	       break;
     case 3:   
	       PORTB=0b00110000;
	       break;
     case 4:   
	       PORTB=0b00011001;
	       break;

     case 5:   
	       PORTB=0b00010010;
	       break;
     case 6:   
	       PORTB=0b00000011;
	       break;
     case 7:   
	       PORTB=0b01111000;
	       break;
     case 8:   
	       PORTB=0b00000000;
	       break;
     case 9:   
	       PORTB=0b00011000;
	       break;
     default:  
	       PORTB=0b00000000;
   }

}
