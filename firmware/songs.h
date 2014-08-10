//
//  songs.h
//  BuzzerOrgan
//
//  Created by Andrzej_Nartowski on 10/08/14.
//
//

#ifndef BuzzerOrgan_songs_h
#define BuzzerOrgan_songs_h



const uint16_t mario[] = {
    E6, E6, E6, C6, E6, G6, G5,
    C6, G5, E5, A5, B5, Ax5, A5,
    G5, E6, G6, A6, F6, G6, E6, C6, D6, B5,
    C6, G5, E5, A5, B5, Ax5, A5,
    G5, E6, G6, A6, F6, G6, E6, C6, D6, B5,
};

const uint16_t oneFourFive[] = {
    E6, E6, E6, E6,
    A6, A6, A6, A6,
    E6, E6, E6, E6,
    B6, B6, A6, A6,
    E6, E6, B6, E6
};

const uint16_t *songs[] = {mario, oneFourFive};


#endif
