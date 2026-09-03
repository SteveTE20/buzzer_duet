#include <Tone.h>

// Generated using https://github.com/ShivamJoker/MIDI-to-Arduino
#define ARRAY_LEN(array) (sizeof(array) / sizeof(array[0]))

#define E5 659
#define D5 587
#define F5 698
#define G5 784
#define C5 523
#define Ab4 466
#define A4 440
#define Fb4 370
#define G4 392
#define Cb5 554
#define B4 494

#define A4 440
#define Ab4 466
#define G3 196
#define A3 220
#define Ab3 233
#define D4 294
#define C5 523
#define F3 175
#define C4 262
#define Fb3 185
#define E3 165

const int midi1[114][3] = {
 {E5, 500, 0},
 {E5, 500, 0},
 {D5, 500, 0},
 {D5, 500, 0},
 {E5, 333, 0},
 {F5, 167, 0},
 {E5, 333, 0},
 {D5, 500, 0},
 {D5, 500, 0},
 {D5, 167, 0},
 {F5, 500, 0},
 {F5, 500, 0},
 {E5, 333, 0},
 {E5, 500, 0},
 {E5, 1167, 1000},
 {E5, 500, 0},
 {E5, 500, 0},
 {D5, 500, 0},
 {D5, 500, 0},
 {E5, 333, 0},
 {F5, 500, 0},
 {G5, 167, 0},
 {D5, 333, 0},
 {C5, 167, 0},
 {D5, 500, 0},
 {D5, 500, 0},
 {D5, 333, 0},
 {D5, 167, 0},
 {E5, 333, 0},
 {E5, 667, 0},
 {F5, 333, 0},
 {E5, 167, 0},
 {D5, 333, 0},
 {E5, 667, 833},
 {C5, 167, 0},
 {Ab4, 333, 0},
 {A4, 167, 0},
 {C5, 333, 0},
 {Ab4, 500, 0},
 {Ab4, 500, 0},
 {Ab4, 500, 0},
 {C5, 167, 0},
 {Ab4, 333, 0},
 {A4, 667, 333},
 {Fb4, 167, 0},
 {G4, 333, 0},
 {A4, 167, 0},
 {Ab4, 333, 0},
 {D5, 500, 0},
 {D5, 500, 0},
 {D5, 500, 0},
 {E5, 167, 0},
 {D5, 333, 0},
 {Cb5, 667, 333},
 {D5, 167, 0},
 {C5, 333, 0},
 {B4, 167, 0},
 {D5, 333, 0},
 {C5, 500, 0},
 {D5, 167, 0},
 {D5, 333, 0},
 {C5, 167, 0},
 {Ab4, 333, 0},
 {D5, 1167, 333},
 {D5, 167, 0},
 {C5, 333, 0},
 {B4, 167, 0},
 {D5, 500, 0},
 {D5, 333, 0},
 {D5, 167, 0},
 {C5, 333, 0},
 {D5, 167, 0},
 {C5, 333, 0},
 {B4, 1167, 333},
 {C5, 167, 0},
 {Ab4, 333, 0},
 {A4, 167, 0},
 {C5, 333, 0},
 {Ab4, 500, 0},
 {Ab4, 500, 0},
 {Ab4, 500, 0},
 {C5, 167, 0},
 {Ab4, 333, 0},
 {A4, 667, 333},
 {Fb4, 167, 0},
 {G4, 333, 0},
 {A4, 167, 0},
 {Ab4, 333, 0},
 {D5, 500, 0},
 {D5, 500, 0},
 {D5, 500, 0},
 {E5, 167, 0},
 {D5, 333, 0},
 {Cb5, 667, 333},
 {D5, 167, 0},
 {C5, 333, 0},
 {B4, 167, 0},
 {D5, 333, 0},
 {C5, 500, 0},
 {D5, 167, 0},
 {D5, 333, 0},
 {C5, 167, 0},
 {Ab4, 333, 0},
 {D5, 1167, 333},
 {D5, 167, 0},
 {C5, 333, 0},
 {B4, 167, 0},
 {D5, 500, 0},
 {D5, 333, 0},
 {D5, 167, 0},
 {C5, 333, 0},
 {D5, 167, 0},
 {C5, 333, 0},
 {B4, 1167, 0},
};

const int midi2[85][3] = {
 {A4, 500, 0},
 {A4, 500, 0},
 {A4, 500, 0},
 {A4, 500, 0},
 {A4, 500, 0},
 {A4, 500, 0},
 {A4, 500, 0},
 {A4, 500, 0},
 {Ab4, 500, 0},
 {Ab4, 500, 0},
 {Ab4, 500, 0},
 {Ab4, 500, 0},
 {G3, 500, 0},
 {A3, 500, 0},
 {Ab3, 333, 0},
 {D4, 500, 0},
 {D4, 167, 0},
 {A4, 500, 0},
 {A4, 500, 0},
 {A4, 500, 0},
 {A4, 500, 0},
 {A4, 333, 0},
 {A4, 500, 0},
 {A4, 167, 0},
 {A4, 500, 0},
 {A4, 500, 0},
 {Ab4, 500, 0},
 {Ab4, 500, 0},
 {Ab4, 333, 0},
 {Ab4, 667, 0},
 {Ab4, 333, 0},
 {C5, 167, 0},
 {Ab4, 333, 0},
 {A4, 500, 0},
 {F3, 167, 0},
 {F3, 333, 0},
 {F3, 167, 0},
 {F3, 500, 500},
 {C4, 500, 500},
 {F3, 500, 500},
 {C4, 500, 500},
 {Fb3, 500, 500},
 {D4, 500, 500},
 {Fb3, 500, 500},
 {D4, 500, 500},
 {G3, 500, 500},
 {D4, 500, 500},
 {G3, 500, 500},
 {D4, 500, 500},
 {E3, 500, 500},
 {C4, 500, 500},
 {E3, 500, 500},
 {C4, 500, 500},
 {F3, 500, 0},
 {C4, 500, 0},
 {F3, 500, 0},
 {C4, 500, 0},
 {F3, 500, 0},
 {C4, 500, 0},
 {F3, 500, 0},
 {C4, 500, 0},
 {Fb3, 500, 0},
 {D4, 500, 0},
 {Fb3, 500, 0},
 {D4, 500, 0},
 {Fb3, 500, 0},
 {D4, 500, 0},
 {Fb3, 500, 0},
 {D4, 500, 0},
 {G3, 500, 0},
 {D4, 500, 0},
 {G3, 500, 0},
 {D4, 500, 0},
 {G3, 500, 0},
 {D4, 500, 0},
 {G3, 500, 0},
 {D4, 500, 0},
 {E3, 500, 0},
 {C4, 500, 0},
 {E3, 500, 0},
 {C4, 500, 0},
 {E3, 500, 0},
 {C4, 500, 0},
 {E3, 500, 0},
 {C4, 500, 0},
};

#define midi1arrlen ARRAY_LEN(midi1)
#define midi2arrlen ARRAY_LEN(midi2)

#define midi1pin 8
#define midi2pin 9

unsigned long currmillis;

unsigned long midi1prevmillis;
unsigned long midi2prevmillis;

int midi1idx;
int midi2idx;

Tone midi1Toneobj;
Tone midi2Toneobj;

/*
void playMidi(int pin, const int notes[][3], size_t len){
 for (int i = 0; i < len; i++) {
    tone(pin, notes[i][0]);
    delay(notes[i][1]);
    noTone(pin);
    delay(notes[i][2]);
  }
}
*/

void updateState(unsigned long& midiprevmillis, int& midiidx, Tone& Toneobj, const int midiarr[][3], int midiarrlen) {
  
  unsigned long playtime = midiarr[midiidx][1];
  unsigned long resttime = midiarr[midiidx][2];

  if (resttime == 0) {
    resttime += playtime/10;
    playtime -= playtime/10;
  }

  if (currmillis >= midiprevmillis + playtime + resttime) {
    midiprevmillis += playtime + resttime;
    midiidx = (midiidx + 1) % midiarrlen;
    Toneobj.play(midiarr[midiidx][0]);
  }

  else if (currmillis >= midiprevmillis + playtime) { // && currmillis < midiprevmillis + playtime + resttime
    Toneobj.stop();
  }

}

// main.ino or main.cpp
void setup() {
  // put your setup code here, to run once:
  // play midi by passing pin no., midi, midi len
  // playMidi(11, midi1, ARRAY_LEN(midi1));

  currmillis = millis();

  midi1prevmillis = currmillis;
  midi1idx = 0;
  midi1Toneobj.begin(midi1pin);
  if (midi1arrlen >= 1) midi1Toneobj.play(midi1[0][0]);
  
  midi2prevmillis = currmillis;
  midi2idx = 0;
  midi2Toneobj.begin(midi2pin);
  if (midi2arrlen >= 1) midi2Toneobj.play(midi2[0][0]);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  currmillis = millis();

  updateState(midi1prevmillis, midi1idx, midi1Toneobj, midi1, midi1arrlen);
  updateState(midi2prevmillis, midi2idx, midi2Toneobj, midi2, midi2arrlen);

}
