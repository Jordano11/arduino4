int Ledverde=11;
int Pushverde=12;
int Pushamarelo=7;
int Ledamarelo=6;
int Pushazul=3;
int Ledazul=2;
int Tempo=500;
void setup() {
  pinMode(Ledverde,OUTPUT);
  pinMode(Pushverde,INPUT);
  pinMode(Ledamarelo,OUTPUT);
  pinMode(Pushamarelo,INPUT);
  Serial.begin(9600);

}

void loop() {

  if (digitalRead(Pushverde)==HIGH){
    digitalWrite(Ledverde,HIGH);
    delay(Tempo);
    digitalWrite(Ledverde,LOW);
    delay(Tempo);
  }
  if (digitalRead(Pushamarelo)==HIGH){
    digitalWrite(Ledamarelo,HIGH);
    delay(Tempo);
    digitalWrite(Ledamarelo,LOW);
    delay(Tempo);
   } else {digitalWrite(Ledamarelo,LOW);}
   if (digitalRead(Pushazul)==HIGH){
    digitalWrite(Ledazul,HIGH);
    delay(Tempo);
    digitalWrite(Ledazul,LOW);
    delay(Tempo);
   } else {digitalWrite(Ledazul,LOW);}
}
