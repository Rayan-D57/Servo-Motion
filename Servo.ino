#include <Servo.h>

Servo servo1;  // إنشاء كائن لمحرك السيرفو

void setup() {
  servo1.attach(10);  // توصيل المحرك بالمنفذ 10
}

void loop() {
  // تحريك المحرك من 0 إلى 90 درجة
  for (int pos = 0; pos <= 90; pos += 1) { 
    servo1.write(pos);  
    delay(15);  
  }

  // تحريك المحرك من 90 إلى 0 درجة
  for (int pos = 90; pos >= 0; pos -= 1) { 
    servo1.write(pos);  
    delay(15);  
  }
}
