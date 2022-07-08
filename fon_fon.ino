#define fon 6
#define luz 3
#define pisca 5
#define botao 10

//1. Projete um alarme usando um buzzer, que inicie com frequencia de 1500hz e decremente a frequencia em 100hz a cada delay 100 até a frequencia atingir 0

 //2. Acione um led ligado constantemente. Ao apertar um botão usado como interrupção outro led acenderá e piscará por um delay 500.
void setup() {
  pinMode(fon, OUTPUT);
  pinMode(luz, OUTPUT);
  pinMode(pisca, OUTPUT);
  pinMode(botao, INPUT);
}

void loop() {
  digitalWrite(luz, HIGH);
  if(botao == HIGH){
    digitalWrite(luz, LOW);
    delay(100);
    while(true){
      if(botao == HIGH){
        break;
      }
      digitalWrite(pisca, HIGH);
      delay(500);
      digitalWrite(pisca, LOW);
    }
  }

int i=1500;
  while(i >= 0){
    tone(fon, i);
    
    delay(100);
    noTone(fon);
    delay(100);
    i=i-100;
  }
  
}
