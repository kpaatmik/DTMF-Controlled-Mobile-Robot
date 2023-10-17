int ml1 = 2;
int ml2 = 3;
int mr1 = 10;
int mr2 = 11;
int q1 = 6;
int q2 = 7;
int q3 = 8;
int q4 = 9;
int a,b,c,d;

void setup() {
  // put your setup code here, to run once:
  pinMode(ml1,OUTPUT);
  pinMode(ml2,OUTPUT);
  pinMode(mr1,OUTPUT);
  pinMode(mr2,OUTPUT);
  pinMode(q1,INPUT);
  pinMode(q2,INPUT);
  pinMode(q3,INPUT);
  pinMode(q4,INPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  a = digitalRead(q4);
  b = digitalRead(q3);
  c = digitalRead(q2);
  d = digitalRead(q1);

  if(a==LOW && b==LOW && c==HIGH && d==LOW){
  digitalWrite(ml1,HIGH);
  
        digitalWrite(ml2,LOW);  
        digitalWrite(mr1,LOW);   
        digitalWrite(mr2,HIGH);
    Serial.println("forward");
  }
  else if(a==LOW && b==HIGH && c==LOW && d==LOW){
  digitalWrite(ml1,LOW);
        digitalWrite(ml2,LOW);  
        digitalWrite(mr1,HIGH);   
        digitalWrite(mr2,LOW);
    Serial.println("LEFT");
  }
  else if(a==LOW && b==HIGH && c==HIGH && d==LOW){
  digitalWrite(ml1,HIGH);
        digitalWrite(ml2,LOW);  
        digitalWrite(mr1,LOW);   
        digitalWrite(mr2,LOW);
    Serial.println("RIGHT");
  }
  else if(a==HIGH && b==LOW && c==LOW && d==LOW){
  digitalWrite(ml1,LOW);
        digitalWrite(ml2,HIGH);  
        digitalWrite(mr1,LOW);   
        digitalWrite(mr2,HIGH);
    Serial.println("backward");
  }
  else if(a==LOW && b==HIGH && c==LOW && d==HIGH){
  digitalWrite(ml1,LOW);
        digitalWrite(ml2,LOW);  
        digitalWrite(mr1,LOW);   
        digitalWrite(mr2,LOW);
    Serial.println("STOP");
   
  }
   

  }
