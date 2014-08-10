/* Name: main.c
 * Author: <Andrzej Nartowski>
 * Copyright: <insert your copyright message here>
 * License: <insert your license reference here>
 */

#include <avr/io.h>
#include <util/delay.h>
#include "organ.h"
#include "pinDefines.h"
#include "scale16.h"
#include "songs.h"

#define SONG starwars
#define SONG_LENGTH  (sizeof(SONG) / sizeof(uint16_t))



int main(void)
{
   

    uint8_t whichNote = SONG_LENGTH - 1;
    uint8_t wasButtonPressed = 0;
    
    /* insert your hardware initialization here */
    BUZZER_DDR |= (1 << BUZZER); // set buzzer pin for output
    BUTTON_PORT |= (1 << PLAY); // activate pull-up resistor
    
    for(;;){
        /* insert your main loop code here */
        if ((BUTTON_PIN & (1 << PLAY)) == 0){
            if (!wasButtonPressed) {
                whichNote ++; 
                if (whichNote == SONG_LENGTH) whichNote = 0;
                wasButtonPressed = 1;
            }
            playNote(SONG[whichNote], 1600);
        }
        else wasButtonPressed = 0;
    }
    return 0;   /* never reached */
}
