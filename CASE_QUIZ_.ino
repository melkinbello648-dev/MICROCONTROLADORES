// C++ code
//

int d4 = 25;
int d3 = 26;


int L1 = 16;
int L2 = 4;
int L3 = 2;
int L4 = 15;


int pot = 14;

int myValue = 0;

void setup()
{
  Serial.begin(9600);
  
  pinMode(d3, INPUT);
  pinMode(d4, INPUT);
  
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  
  pinMode(pot, INPUT);
  
}

void loop()
{
  
  int condicion = 0;
  
  int est_d3= digitalRead (d3);
  int est_d4= digitalRead (d4);
  int dipsw = (est_d3*1)+ (est_d4*2);
  
    int valorpot = analogRead (pot);

  
  
  
  switch(dipsw){
    case 0:
    digitalWrite(L1, LOW);
    digitalWrite(L2,LOW);
    digitalWrite(L3, LOW);
    digitalWrite(L4,LOW);
   break;
    
    case 1:
    digitalWrite(L1, LOW);
    digitalWrite(L2,LOW);
    digitalWrite(L3, LOW);
    digitalWrite(L4,LOW);
    
    delay(valorpot *2);
    
      digitalWrite(L1, HIGH);
    digitalWrite(L2,HIGH);
    digitalWrite(L3, HIGH);
    digitalWrite(L4,HIGH);
    
  delay(valorpot *2);

    
   break;
    
    case 2:
    
    digitalWrite(L1, HIGH);
    digitalWrite(L2,LOW);
    digitalWrite(L3,LOW);
    digitalWrite(L4,LOW);
    delay(1000);
       digitalWrite(L2, HIGH);
    digitalWrite(L1,LOW);
    digitalWrite(L3,LOW);
    digitalWrite(L4,LOW);
    delay(1000);
      digitalWrite(L1, LOW);
    digitalWrite(L2,LOW);
    digitalWrite(L3,HIGH);
    digitalWrite(L4,LOW);
    delay(1000);
       digitalWrite(L1, LOW);
    digitalWrite(L2,LOW);
    digitalWrite(L3,LOW);
    digitalWrite(L4,HIGH);
    delay(1000);
    break;

    case 3:
    
    digitalWrite(L1, HIGH);
    delay(500);
    digitalWrite(L1,LOW);
    delay(valorpot *1);
    digitalWrite(L2, HIGH);
    delay(500);
    digitalWrite(L2,LOW);
    delay(valorpot *1);
    digitalWrite(L3, HIGH);
    delay(500);
    digitalWrite(L3,LOW);
    delay(valorpot * 1);
    digitalWrite(L4, HIGH);
    delay(500);
    digitalWrite(L4,LOW);
    delay(valorpot * 1);
    break;

 

  }
   
}


  
  
  
  
  
  
  