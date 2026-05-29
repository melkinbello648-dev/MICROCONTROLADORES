// C++ code
//

int d4 = 32;
int d3 = 33;
int d2 = 25;
int d1 = 26; 

int L1 = 16;
int L2 = 4;
int L3 = 2;
int L4 = 15;

int WT = 200;

int pot = 14;

int valorleido = 0;

void setup()
{
  Serial.begin(9600);
  
  pinMode(d1, INPUT);
  pinMode(d2, INPUT);
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
  
  valorleido = analogRead (pot);
  Serial.println(valorleido);
  
  int est_d1 = digitalRead (d1);
  int est_d2 = digitalRead (d2);
  int est_d3 = digitalRead (d3);
  int est_d4 = digitalRead (d4);
  
  int dipsw = (est_d1*1) + (est_d2*2) + (est_d3*4)+ (est_d4*8);
  
  int valorpot = analogRead (pot);
  
int condicion = 0;


  
if(valorpot > 30 && dipsw <= 7)
{
  condicion = 1;	
}
else if(valorpot > 30 && dipsw > 7)
{
  condicion = 2;
}
else if(valorpot <= 30 && dipsw <= 7)
{
  condicion = 3;
}
else if(valorpot <= 30 && dipsw > 7)
{
  condicion = 4;
}

switch(condicion)
{
  case 1:

   
    digitalWrite(L1, HIGH);
    digitalWrite(L2, HIGH);
    digitalWrite(L3, LOW);
    digitalWrite(L4, LOW);

  break;

  case 2:

    
    digitalWrite(L1, LOW);
    digitalWrite(L2, LOW);
    digitalWrite(L3, HIGH);
    digitalWrite(L4, HIGH);

  break;

  case 3:

  
  digitalWrite(L1, HIGH);
    digitalWrite(L2,HIGH);
    digitalWrite(L3,HIGH);
    digitalWrite(L4, HIGH);
                 
    delay(WT);

    digitalWrite(L1, LOW);
    digitalWrite(L2, LOW);
    digitalWrite(L3, LOW);
    digitalWrite(L4, LOW);
   
   delay(WT);

    
  
  break;

  case 4:

  digitalWrite(L1, HIGH);
    digitalWrite(L2, LOW);
    digitalWrite(L3, LOW);
    digitalWrite(L4, LOW);
    delay(WT);

    digitalWrite(L1, LOW);
    digitalWrite(L2, HIGH);
    digitalWrite(L3, LOW);
    digitalWrite(L4, LOW);
    delay(WT);

    digitalWrite(L1, LOW);
    digitalWrite(L2, LOW);
    digitalWrite(L3, HIGH);
    digitalWrite(L4, LOW);
    delay(WT);

    digitalWrite(L1, LOW);
    digitalWrite(L2, LOW);
    digitalWrite(L3, LOW);
    digitalWrite(L4, HIGH);
    delay(WT);
  break;
}
    
   
}


  
  
  
  
  
  
  