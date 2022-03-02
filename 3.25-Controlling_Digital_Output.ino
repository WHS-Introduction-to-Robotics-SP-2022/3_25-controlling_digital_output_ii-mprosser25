/*

*/

void setup() {
     pinMode(10,OUTPUT);
    digitalWrite(10,HIGH);
    delay(500);
    digitalWrite(10,LOW);
    delay(500);
    digitalWrite(10,HIGH);
    delay(500);
    digitalWrite(10,LOW);
    delay(1000);
    pinMode(3,OUTPUT);
    digitalWrite(3,HIGH);
    delay(250);
    digitalWrite(3,LOW);
    delay(1000);
    digitalWrite(3,HIGH);
    delay(250);
    digitalWrite(3,LOW);
    delay(2000);
}

void loop() {
    pinMode(3,OUTPUT);
    pinMode(10,OUTPUT);
    delay(500);
    digitalWrite(3,OUTPUT);
    digitalWrite(10,OUTPUT);
    delay(500);
    digitalWrite(3,LOW);
    digitalWrite(10,LOW);
    delay(200);
    digitalWrite(3,OUTPUT);
    digitalWrite(10,OUTPUT);
    delay(200);
}
