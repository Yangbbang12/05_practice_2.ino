void setup() {
  // GPIO 7번 핀을 출력 모드로 설정
  pinMode(7, OUTPUT);
}

void loop() {
  digitalWrite(7, 0);
  delay(1000);  // 1초 대기
  for (int i = 0; i < 5; i++) {
    digitalWrite(7, HIGH );  // LED 끄기
    delay(100);            // 0.1초 대기
    digitalWrite(7, LOW); // LED 켜기
    delay(100);            // 0.1초 대기
     }
    digitalWrite(7, 1);
    while(1){}
    
   
}
