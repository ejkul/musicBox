//
//  organ.h
//  BuzzerOrgan
//
//  Created by Andrzej_Nartowski on 09/08/14.
//
//

#ifndef BuzzerOrgan_organ_h
#define BuzzerOrgan_organ_h


// Plays inputted wavelength for a duration, calculation relative to TIMEBASE
void playNote(uint16_t wavelength, uint16_t duration);

// Do nothing for the inputted duration
void rest(uint16_t duration);

#endif
