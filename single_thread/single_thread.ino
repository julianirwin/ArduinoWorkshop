int led = 13;
int i;
int j;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Its time to turn this LED light ON!");
  Serial.println("Okay I'm totally gonna turn it on now");
  Serial.println("Wait for it...");
  Serial.println("Wait for it...");
  digitalWrite(led , HIGH);
  Serial.println("Okay its on now"); 
  delay (500);
  Serial.println("Its time to turn this LED light OFF!"); 
  Serial.println("Okay I'm totally gonna turn it off now"); 
  Serial.println("Wait i'm afraid of the dark"); 
  Serial.println("Seriously it'll make me sad");
  digitalWrite(led , LOW);
  Serial.println("NOOOOOOOOO!"); 
  delay (500);
}
