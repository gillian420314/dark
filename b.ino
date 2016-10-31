#include "pitches.h"
// notes in the melody:
int melody[] = {
659, 659, 659, 523, 659, 784, 0, 392, 0,
523, 0, 392, 0, 330, 0, 440, 494, 0, 464, 440,
392, 659, 784, 880, 698, 784, 659, 523, 587, 494, 0,
523, 0, 392, 0, 330, 0, 440, 494, 0, 464, 440,
392, 659, 784, 880, 698, 784, 659, 523, 587, 494, 0,
0, 784, 740, 698, 622, 659, 0, 415, 440, 523, 0, 440, 523, 587,
0, 784, 740, 698, 622, 659, 0, 1046, 1046, 1046, 0,
0, 784, 740, 698, 622, 659, 0, 415, 440, 523, 0, 440, 523, 587,
0, 622, 0, 587, 0, 523, 0, 0,
0, 784, 740, 698, 622, 659, 0, 415, 440, 523, 0, 440, 523, 587,
0, 784, 740, 698, 622, 659, 0, 1046, 1046, 1046, 0,
0, 784, 740, 698, 622, 659, 0, 415, 440, 523, 0, 440, 523, 587,
0, 622, 0, 587, 0, 523, 0, 0,
523, 523, 523, 0, 523, 587, 659, 523, 440, 392, 0,
523, 523, 523, 0, 523, 587, 659, 0,
523, 523, 523, 0, 523, 587, 659, 523, 440, 392, 0,
659, 659, 659, 523, 659, 784, 0, 392, 0 
};
// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
8, 4 ,4 ,8 ,4 ,4 ,4 ,4 ,4, 
4, 8, 4, 8, 4, 8, 4, 8, 8, 8, 4,
6, 6, 6, 4, 8, 4, 4, 8, 8, 4, 8,
4, 8, 4, 8, 4, 8, 4, 8, 8, 8, 4,
6, 6, 6, 4, 8, 4, 4, 8, 8, 4, 8,
4, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 8, 8, 8,
4, 8, 8, 8, 4, 8, 8, 4, 8, 4, 4,
4, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 8, 8, 8,
4, 4, 8, 4, 8, 2, 2, 8,
4, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 8, 8, 8,
4, 8, 8, 8, 4, 8, 8, 4, 8, 4, 4,
4, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 8, 8, 8,
4, 4, 8, 4, 8, 2, 2, 8,
8, 4, 8, 8, 8, 4, 8, 4, 8, 4, 4,
8, 4, 8, 8, 8, 8, 8, 1,
8, 4, 8, 8, 8, 4, 8, 4, 8, 4, 4,
8, 4 ,4 ,8 ,4 ,4 ,4 ,4 ,4
};
void setup() {
// iterate over the notes of the melody:
for (int thisNote = 0; thisNote < 185; thisNote++) {
// to calculate the note duration, take one second
// divided by the note type.
//e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
int noteDuration = 800 / noteDurations[thisNote];
tone(8, melody[thisNote], noteDuration);
// to distinguish the notes, set a minimum time between them.
// the note's duration + 30% seems to work well:
int pauseBetweenNotes = noteDuration * 1.30;
delay(pauseBetweenNotes);
// stop the tone playing:
noTone(8);
}
}
void loop() {
// no need to repeat the melody.
}
