//code for bot running on two wheels

double ch2=2;
int a=4; int b=5;
double ch4=3;
int c=9; int d=10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(4,OUTPUT); pinMode(5,OUTPUT);
  pinMode(3,INPUT);
  pinMode(3,INPUT);
  pinMode(9,OUTPUT); pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
ch2=pulseIn(2,HIGH);
ch4=pulseIn(3,HIGH);

// Serial.println(ch2);
// delay(1000);
// Serial.println(ch4);
// delay(1000);
if((ch2==0)&&(ch4==0))
{    
  Serial.println("base") ;
}
else if((ch4>1700))
{    Serial.println("right");  
digitalWrite(a,HIGH); digitalWrite(b,LOW);
 digitalWrite(c,LOW);digitalWrite(d,HIGH);
}

else if((ch4<1300) && (ch4>900))
{     Serial.println("left"); 
digitalWrite(a,LOW); digitalWrite(b,HIGH);
 digitalWrite(c,HIGH);digitalWrite(d,LOW);
}
else if((ch2<1400) &&  (ch2>900))
{     Serial.println("back");
digitalWrite(a,LOW); digitalWrite(b,HIGH);
 digitalWrite(c,LOW);digitalWrite(d,HIGH);
}
else if((ch2>1750))
{     Serial.println("front");
digitalWrite(a,HIGH); digitalWrite(b,LOW);
 digitalWrite(c,HIGH);digitalWrite(d,LOW);
}
else
{     Serial.println("OK");
digitalWrite(a,LOW); digitalWrite(b,LOW);
 digitalWrite(c,LOW);digitalWrite(d,LOW);
}

}
