#include <Servo.h>

Servo servo1, servo2, servo3, servo4, servo5, servo6;

void setup() {
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  servo5.attach(6);
  servo6.attach(7);
}

void loop() {
  // رفع الساق اليمنى وتحريكها للأمام
  servo2.write(30);  // رفع الساق اليمنى
  delay(500);
  servo1.write(120); // تحريكها للأمام
  delay(500);
  
  // تحريك مركز الثقل للأمام
  servo5.write(100);
  delay(500);

  // إنزال القدم اليمنى
  servo2.write(90);
  delay(500);

  // رفع القدم اليسرى وتحريكها للأمام
  servo4.write(30);
  delay(500);
  servo3.write(120);
  delay(500);

  // تحريك مركز الثقل للأمام
  servo5.write(80);
  delay(500);

  // إنزال القدم اليسرى
  servo4.write(90);
  delay(500);
}
