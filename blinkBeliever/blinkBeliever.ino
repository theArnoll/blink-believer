void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  for (uint8_t re = 0; re < 3; re++)
  { digitalWrite(LED_BUILTIN, LOW);
    delay(80);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(80);
  }
  for (uint8_t re = 0; re < 3; re++)
  { digitalWrite(LED_BUILTIN, LOW);
    delay(80); 
    digitalWrite(LED_BUILTIN, HIGH);
    delay(400);  
  }
}
