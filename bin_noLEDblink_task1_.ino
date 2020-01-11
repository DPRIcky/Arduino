int num;
int r1 = 8;
int w1 = 9;
int g = 10;
int b = 11;
int r2 = 12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(r1,OUTPUT);
  pinMode(w1,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(b,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Give the number: ");
  while(Serial.available() == 0){ }
  num  = Serial.parseInt();
  uint8_t bitsCount = sizeof(num)*8;
  char str[bitsCount+1];
  itoa(num,str,2);
  Serial.println(str);
  if(str[0] == '1'){
    digitalWrite(r1,HIGH);
    }
  else if(str[0] == '0'){
    digitalWrite(r1,LOW);    }
  delay(1000);
  
  if(str[1] == '1'){
    digitalWrite(w1,HIGH);
    }
  else if(str[1] == '0'){
    digitalWrite(w1,LOW);
    }
  delay(1000);

  
  if(str[2] == '1'){
    digitalWrite(g,HIGH);
    }
  else if(str[2] == '0'){
    digitalWrite(g,LOW);
    }
  delay(1000);

  
  if(str[3] == '1'){
    digitalWrite(b,HIGH);
    }
  else if(str[3] == '0'){
    digitalWrite(b,LOW); 
    }
  delay(1000);

  
  if(str[4] == '1'){
    digitalWrite(r2,HIGH);
    }
  else if(str[4] == '0'){
    digitalWrite(r2,LOW);
    }
  delay(1000);
  Serial.println("Give the number: ");
  while(Serial.available()==0){
    digitalWrite(r1,LOW);
    digitalWrite(w1,LOW);
    digitalWrite(g,LOW);
    digitalWrite(b,LOW);
    digitalWrite(r2,LOW);
    }
}
