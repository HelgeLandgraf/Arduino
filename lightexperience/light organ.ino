void setup(){
   pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
}

int a = 2;
int delay_time_on = 500;
int delay_time_off = 0;

void loop(){
  for(a=2; a <= 6; a = a + 1){
   digitalWrite(a, HIGH);
   delay(delay_time_on);
   digitalWrite(a, LOW);
   delay(delay_time_off);
   }
}
