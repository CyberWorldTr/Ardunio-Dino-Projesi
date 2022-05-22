#include <Servo.h>
#define threshold 250
#define basimyok_aci 0 //  Kendi Servonuza Göre Düzenleyebilirsiniz.. Butona Basmadan Önceki Açı
#define basimvar_aci 36 // Butona Basıldığındaki Açı


Servo myservo;  // Servo İçin Kotrol Oluştur
bool trig=true;

void setup() {          
  myservo.attach(9);  // Pin 9 İle Servo Bağlantısı
myservo.write(basimyok_aci);   
}

void loop() {

 myservo.write(basimyok_aci);              // Butona Basım Yok!
 delay(1);
 if(analogRead(A0)< threshold)
 {
  
      myservo.write(basimvar_aci);          // Butona Basım Var!
    delay(100 );                       // Pozisyona Dünmek İçin 100ms Bekle!
                      
 }                     
}