#include "DHT.h"
#include <SoftwareSerial.h>

#define DHTPIN 7 
SoftwareSerial bt(9, 10);

#define DHTTYPE DHT11 
DHT dht(DHTPIN, DHTTYPE);

char gelen_karakter;
const int yesil=2,kirmizi=3;

void setup() {
  bt.begin(9600);
  pinMode(yesil,OUTPUT);
  pinMode(kirmizi,OUTPUT);
  digitalWrite(yesil,LOW);65
  digitalWrite(kirmizi,HIGH);
  dht.begin();
}

void loop() {
    
// Veri girilirse yesil isik surekli yanacak
  while(bt.available() > 0){
    
    float h = dht.readHumidity();
    float t = dht.readTemperature();
    //float f = dht.readTemperature(true);
    
    gelen_karakter = bt.read();
    digitalWrite(yesil,HIGH);
    digitalWrite(kirmizi,LOW);
    
    if(gelen_karakter == '0'){
      bt.print("Sıcaklık Ölçüldü: ");
      bt.print(t);
      bt.println(" C");
    } else if(gelen_karakter == '1'){
      bt.print("Nem Ölçüldü: % ");
      bt.println(h);
    } else if(gelen_karakter == '2'){
      bt.print("Sıcaklık ve Nem Ölçüldü: ");
      bt.print(t);
      bt.print(" C, % ");
      bt.println(h);
    } else {
      bt.println("Yanlış Girdi.");
    }
  }

 
}
