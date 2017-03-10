//This code does not contain any arrays.
//But it has used for loops
void setup() {
  for(int i=3;i<14;i++){
     pinMode(i,OUTPUT);
  }
Serial.begin(9600);
}

void loop() {
  int del = 100;
  for(int i= 1;i<del;i++){
 del--;

  for(int i= 1;i<14;i++){
  digitalWrite(i,HIGH);
 delay(del);
 Serial.println(del);
 digitalWrite(i,LOW);
 delay(1);
  }
    }


}
