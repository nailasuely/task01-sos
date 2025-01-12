#include <stdio.h>
#include "pico/stdlib.h"


const uint LED_PIN = 12;

// Função que simula os três pontos do código Morse
void morse_pontos() {
    for (int ponto = 0; ponto < 3; ponto++) {
        gpio_put(LED_PIN, true);   
        sleep_ms(200);            //  LED aceso por 0,2 segundos
        gpio_put(LED_PIN, false); // Desliga 
        sleep_ms(125);            // Pausa de 0,125
    }
}

// Simula os três traços do código Morse
void morse_traco() {
    for (int traco = 0; traco < 3; traco++) {
        gpio_put(LED_PIN, true);  
        sleep_ms(800);            // LED aceso por 0,8 segundos
        gpio_put(LED_PIN, false);
        sleep_ms(125);           
    }
}

int main() {
 
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);


    stdio_init_all();

    // Loop principal
    while (true) {
     
        morse_pontos();
        sleep_ms(250);  

    
        morse_traco();
        sleep_ms(250); 

   
        morse_pontos();
        sleep_ms(3000); 
    }
}
