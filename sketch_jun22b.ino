int red=2;
int green=3;
int blue=4;

void setup () {
  pinMode (red,OUTPUT);
  pinMode (green,OUTPUT);
  pinMode (blue,OUTPUT);
  Serial.begin (9600);}
 
void loop() {
  // read the input on analog pin A0:
  int value = analogRead(A0);
  Serial.println(value);
  
  if (value > 90 ) {
    Serial.println("Very heavy Rain");
    digitalWrite (red,HIGH);
    digitalWrite(green,LOW);
    digitalWrite(blue,LOW);}
  else if ((value > 60) && (value <= 89)) {
    Serial.println("AVERAGE Rain");
     digitalWrite(blue,LOW);}
    digitalWrite (green,HIGH);
    digitalWrite (red,LOW);
    }
  else{
    Serial.println("Dry Weather");
    digitalWrite (blue,HIGH);
    digitalWrite (red,LOW);
    digitalWrite (green,LOW);
    }
  delay(1000);
}
