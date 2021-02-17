#define d6 6
#define d7 7
long duration,cm;
void setup() {
pinMode(d6,OUTPUT);
pinMode(2,INPUT);
pinMode(7,OUTPUT);
pinMode(4,OUTPUT);
Serial.begin(9600);
}

void loop() {
analogWrite(d6,cm);
digitalWrite(4,HIGH);
delayMicroseconds(10);
duration = pulseIn(2,HIGH);
cm=duration/29/2;
Serial.print(cm);
Serial.print("cm");
Serial.println();
delay(1000);
digitalWrite(4,LOW);
delayMicroseconds(2);
if(cm>100){digitalWrite(d7,LOW);}
if(cm<100){digitalWrite(d7,HIGH);}
}
