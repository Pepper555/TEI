#define fon 6
#define luz 3
#define pisca 4
#define botao 2
volatile bool estado = false;
//1. Projete um alarme usando um buzzer, que inicie com frequencia de 1500hz e decremente a frequencia em 100hz a cada delay 100 até a frequencia atingir 0

 //2. Acione um led ligado constantemente. Ao apertar um botão usado como interrupção outro led acenderá e piscará por um delay 500.
void setup() {
  pinMode(fon, OUTPUT);
  pinMode(luz, OUTPUT);
  pinMode(pisca, OUTPUT);
  pinMode(botao, INPUT);
  attachInterrupt(digitalPinToInterrupt(botao), pisca_pisca, CHANGE);
}

void loop() {
  digitalWrite(luz, HIGH);
}
void pisca_pisca(){
    if(estado){
    digitalWrite(luz, LOW);
    while(true){
      
      int i=1500;
      while(i > 0){
        tone(fon, i);
        digitalWrite(pisca, HIGH);
        noTone(fon);
        digitalWrite(pisca, LOW);
        i=i-100;
        }
    }
    estado = false;
  }
  else{
    digitalWrite(luz, HIGH);
    estado = true;
  }
}
