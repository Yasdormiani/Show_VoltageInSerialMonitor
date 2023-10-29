int LED = 6;

int pt = 3;

float val=0.0; 

void setup(){

// put your setup code here, to run once:
 pinMode (LED, OUTPUT) ;

 pinMode (pt, INPUT);

Serial.begin (9600) ;
}
void loop(){

// put your main code here, to run repeatedly:

val=analogRead (pt) ;

float B = val*5/1023;

Serial.print ("PUT voltage is: ");
Serial.println (B) ; 

analogWrite (LED, B);
}