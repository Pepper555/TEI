//First Octave

#define Red1 131      
#define DOrange1 277
#define Orange1 294
#define LOrange1 311
#define Yellow1 330
#define LGreen1 349
#define Green1 370
#define DGreen1 392
#define LBlue1 415
#define Blue1 440
#define Purple1 466
#define Pink1 494

//Second Octave

#define Red2 523
#define DOrange2 554
#define Orange2 587
#define LOrange2 622
#define Yellow2 659
#define LGreen2 698
#define Green2 740
#define DGreen2 784
#define LBlue2 831
#define Blue2 880
#define Purple2 932
#define Pink2 988

//Third Octave

#define Red3 1047
#define DOrange3 1109
#define Orange3 1175
#define LOrange3 1245
#define Yellow3 1319
#define LGreen3 1397
#define Green3 1480
#define DGreen3 1568
#define LBlue3 1661
#define Blue3 1760
#define Purple3 1865
#define Pink3 1976

int S[] = {
  Pink1, 0, Pink1, 0, Pink1, Blue1, 0, Pink1, 0, Orange2, 0, Pink1, 0, Green1, Blue1, 0, Pink1, 0, Pink1, 0, Pink1, Blue1, 0, Pink1, 0, LGreen2, 0, Yellow2, 0, Orange2, Blue1, 0, Pink1, 0, Pink1, 0, Pink1, Blue1, 0, Pink1, 0, Orange2, 0, Pink1, 0, Green1, Blue1, 0, Pink1, 0, Pink1, 0, Pink1, Blue1, Pink1, Orange2, 0, LGreen2, 0, Yellow2, 0, Orange2, Blue1, 0, Pink1, 0, Pink1, 0, Pink1, Blue1, 0, Pink1, 0, Orange2, 0, Pink1, 0, Green1, Blue1, 0, Pink1, 0, Pink1, 0, Pink1, Blue1, 0, Pink1, 0, LGreen2, 0, Yellow2, 0, Orange2, Blue1, 0, Pink1, 0, Pink1, 0, Pink1, Blue1, 0, Pink1, 0, Orange2, 0, Pink1, 0, Green1, Blue1, 0, Pink1, 0, Pink1, 0, Pink1, 0, Blue1, Pink1, 0, 0, 0, 0, Pink1, 0,
  Orange2, 0, Yellow2, LGreen2, 0, Green2, 0, Blue2, 0, Green2, 0, Blue2, Purple2, 0, Pink2, 0, Purple2, 0, Blue2, Green2, 0, Yellow2, 0, Orange2, LBlue1, 0, Blue1, 0, Purple1, 0, Pink1, 0, Orange2, 0, Yellow2, LGreen2, 0, Green2, 0, Blue2, 0, Green2, 0, Blue2, Purple2, 0, Pink2, 0, Blue2, Pink2, Blue2, 0, Purple2, Pink2, 0, LBlue1, 0, LBlue1, Blue1, Blue1, Purple1, 0, Pink1, 0, Orange2, 0, Yellow2, LGreen2, 0, Green2, 0, Blue2, 0, Green2, 0, Blue2, Purple2, 0, Pink2, 0, Purple2, 0, Blue2, Green2, 0, Yellow2, 0, Orange2, LBlue1, 0, Blue1, 0, Purple1, 0, Pink1, 0, Orange2, 0, Yellow2, LGreen2, 0, Green2, 0, Blue2, 0, Green2, 0, Blue2, Purple2, 0, Pink2, 0, Blue2, Pink2, Blue2, 0, Purple2, Pink2, 0, LBlue1, 0, LBlue1, Blue1, Blue1, Purple1, 0,
  Orange2, DOrange2, Pink1, 0, Blue1, 0, 0, Pink1, 0, 0, Pink1, 0, 0, 0, Green1, 0, Blue1, 0, Pink1, 0, DOrange2, 0, 0, Blue1, 0, 0, Pink1, 0, 0, 0, 0, 0, Orange2, DOrange2, Pink1, 0, Blue1, 0, 0, Pink1, 0, 0, Pink1, 0, 0, Green1, 0, 0, DOrange2, 0, Orange2, 0, DOrange2, 0, 0, Blue1, 0, DOrange1, Yellow1, Green1, DOrange1, Green1, LBlue1, Pink1, Orange2, DOrange2, Pink1, 0, Blue1, 0, 0, Pink1, 0, 0, Pink1, 0, 0, 0, Green1, 0, Blue1, 0, Pink1, 0, DOrange2, 0, 0, Blue1, 0, 0, Pink1, 0, 0, 0, 0, 0, Orange2, DOrange2, Pink1, 0, Blue1, Orange2, 0, Green2, Yellow2, Orange2, Pink1, 0, Blue2, LBlue2, 0, Green2, Orange2, DOrange2, 0, Pink1, Blue1, Pink1, 0, Blue1, Pink1, 0, Blue1, Pink1, 0, Blue1, Pink1, 0, Blue1, Pink1, Orange2, 0,
  Green2, 0, 0, 0, 0, 0, Orange2, 0, 0, 0, 0, 0, 0, Orange2, Yellow2, LGreen2, 0, 0, Yellow2, 0, 0, Orange2, 0, DOrange2, 0, 0, Orange2, 0, 0, Yellow2, 0, Green2, 0, 0, 0, 0, 0, Pink2, 0, 0, 0, 0, 0, Pink1, 0, DOrange2, 0, Orange2, 0, 0, Yellow2, 0, 0, Orange2, 0, DOrange2, 0, 0, Blue2, 0, 0, DGreen2, 0, Green2, 0, 0, 0, 0, 0, Orange2, 0, 0, 0, 0, 0, 0, Orange2, Yellow2, LGreen2, 0, 0, Yellow2, 0, 0, Orange2, 0, DOrange2, 0, 0, Orange2, 0, 0, Yellow2, 0, Green2, 0, 0, 0, 0, 0, Pink2, 0, 0, 0, 0, 0, Green2, 0, Purple2, 0, Pink2, 0, 0, DGreen2, 0, 0, Green2, 0, LGreen2, 0, 0, Pink2, 0, 0, Green2, 0, Green2
};
int L = sizeof(S);
int nds = 10;

void setup() {  
  Serial.begin(115200);
  pinMode(2, OUTPUT);
  L = L / 2;
  Serial.println(L);
  Tone();
}

void loop() {
}

void Tone() {
  digitalWrite(2, HIGH);
  for (int n = 0; n < L; n++) {
    int nd = 1000 / nds;
    tone(6, S[n], nd);
    int d = nd * 1.2;
    delay(d);
    noTone(6);
  }
}
