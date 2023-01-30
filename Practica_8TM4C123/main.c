#include "lib/include.h"

int main(void)
{
	 I2C3_Init();
	 OLED_Init();
	 OLED_Clear();
   Configurar_PLL(20000000);
   Configurar_GPIO();
    
    // variables for counting
    int count = 0;
    //float dec = 0.0;

        while ( 1 ) {
            
            /////////////////////
            // Strings
            ///////////////////
        
    
             /////////////////////
            // Strings
            ///////////////////
            
             OLED_YX(0, 5);
             //OLED_Write_String( "OLED SSD1306" );
             OLED_Write_String( "Micros" );
                             Delay_ms(1000);

             OLED_YX(1, 5);
             //OLED_Write_String ("TM4C123");
             OLED_Write_String ("Flores");
                         Delay_ms(1000);

             OLED_YX(2, 4);
             //OLED_Write_String ("TM4C123");
             OLED_Write_String ("Moreno");
                         Delay_ms(1000);

             OLED_YX(3, 6);
             //OLED_Write_String ("TM4C123");
             OLED_Write_String ("C:");
                         Delay_ms(1000);

            /////////////////////
            // Integer Count
            ////////////////////
            
            
                        
            //OLED_Clear();
            
            Delay_ms(100);
            
          
   }
}