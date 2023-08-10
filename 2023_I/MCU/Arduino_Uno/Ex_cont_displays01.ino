
#include <stdint.h>

uint8_t numeroBinario = 0b00000000;
uint8_t unidades=0,dezenas=0,contador=0;

void setup() {
  // Configura os pinos de 0 a 7 como saídas (PORTD)
  DDRD = 0b11111111;
  // Configura os pinos de 8 a 13 como saídas (PORTB)
  DDRB = 0b11111111;
  // Configura os pinos de 8 a 13 como saídas (PORTC)
  DDRC = 0b011111;
}

void loop() {
  // put your main code here, to run repeatedly:

  if(contador<10)
  {
      unidades=contador%10;
      numero_to_display(unidades);  
      PORTC=0b000001;
      delay(10); 
  }
  else
   {
      PORTC=0b000001;
      unidades=contador%10;
      numero_to_display(unidades);  
       
      delay(10);    
      dezenas=contador/10;
      numero_to_display(dezenas);  
      PORTC=0b000010;    
      delay(10);
   }
  
    if(contador>=100){
      contador=0;
    }
    else{
      contador=contador+1;
    }
  delay(1000);
}
void numero_to_display(uint8_t numero)
{
   switch(numero){
     case 0:   
          PORTD=0b00000000;
	        PORTB=0b00001000;
	       break;
     case 1:   
         PORTD=0b00000100;
	       PORTB=0b00001111;
	       break;
     case 2:   
         PORTD=0b00010000;
	       PORTB=0b00000100;
	       break;
     case 3:   
         PORTD=0b00000000;
	       PORTB=0b00000110;
	       break;
     case 4:   
         PORTD=0b00000100;
	       PORTB=0b00000011;
	       break;
     case 5:   
         PORTD=0b00001000;
	       PORTB=0b00000010;
	       break;
     case 6:   
         PORTD=0b00001100;
	       PORTB=0b00000000;
	       break;
     case 7:   
         PORTD=0b00000000;
	       PORTB=0b00001111;
	       break;
     case 8:   
         PORTD=0b00000000;
	       PORTB=0b00000000;
	       break;
     case 9:   
         PORTD=0b00000000;
	       PORTB=0b00000011;
	       break;
     default:  
         PORTD=0b00000000;
	       PORTB=0b00000000;
   }

}
