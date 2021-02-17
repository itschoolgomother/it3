#define d6  6
#define d7  7
#define d8  8
#define d9 9
long duration,cm;
void setup() {
pinMode(d6,OUTPUT);
pinMode(d7,OUTPUT);
pinMode(d8,OUTPUT);
pinMode(d9,OUTPUT);
pinMode(4,OUTPUT);
pinMode(2,INPUT);
Serial.begin(9600);
}

void loop() {
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

if(cm>0&&cm<10){digitalWrite(d6,HIGH);digitalWrite(d7,LOW); digitalWrite(d8,LOW); digitalWrite(d9,LOW);}
if(cm>10&&cm<20){digitalWrite(d7,HIGH);digitalWrite(d6,LOW);digitalWrite(d8,LOW); digitalWrite(d9,LOW);}
if(cm>20&&cm<30){digitalWrite(d8,HIGH);digitalWrite(d6,LOW);digitalWrite(d7,LOW); digitalWrite(d9,LOW);}
if(cm>30&&cm<40){digitalWrite(d9,HIGH);digitalWrite(d6,LOW);digitalWrite(d7,LOW); digitalWrite(d8,LOW);}
}
