
# Ortamın Sıcaklık ve Nemini Ölçme (Mikroişlemciler Projesi)

Bu kod, bir DHT11 sensöründen sıcaklık ve nem verilerini okur ve bu verileri "Ardunio Bluetooth" uygulaması ya da "Bluetooth Terminal" adlı uygulamlardan görebiliriz. Arduino ayrıca bir Bluetooth modülüne bağlıdır ve bu modül sayesinde kullanıcı, seri bir bağlantı üzerinden Arduino'ya komut gönderebilir. Eğer kullanıcı '0' karakterini gönderirse, Arduino sıcaklık verisini ölçer ve seri portuna gönderir. Eğer kullanıcı '1' karakterini gönderirse, Arduino nem verisini ölçer ve seri portuna gönderir. Eğer kullanıcı '2' karakterini gönderirse, Arduino hem sıcaklık hem de nem verilerini ölçer ve seri portuna gönderir. Eğer kullanıcı başka bir karakter gönderirse, Arduino "Yanlış Girdi." mesajını seri portuna gönderir. Arduino'ya iki adet LED bağlıdır, biri yeşil ve diğeri kırmızıdır. Arduino kullanıcıdan girdi beklerken, kırmızı LED açık ve yeşil LED kapalıdır. Arduino kullanıcıdan girdi alırken, yeşil LED açık ve kırmızı LED kapalıdır.

## Kullanılan Malzemeler

- 1 Adet Arduino Uno
- 1 Adet HC06 Bluetooth Modülü
- 1 Adet DHT11 Sıcaklık ve Nem Sensörü
- 1 Adet Orta Boy Breadboard
- 2 Adet Led (Yeşil ve Kırmızı)
- 4 Adet 330 Ohm Direnç
- Gerekli Bağlantıları Sağlayacak Kadar Erkek-Erkek Jumper Kablo


  
## Proje Resmi

![Uygulama Ekran Görüntüsü](https://github.com/kadironer/Ortamin-Sicaklik-Nemini-Olcme/blob/master/project_images/1.jpg?raw=true)
![Uygulama Ekran Görüntüsü](https://github.com/kadironer/Ortamin-Sicaklik-Nemini-Olcme/blob/master/project_images/2.jpg?raw=true)
![Uygulama Ekran Görüntüsü](https://github.com/kadironer/Ortamin-Sicaklik-Nemini-Olcme/blob/master/project_images/3.jpg?raw=true)
![Uygulama Ekran Görüntüsü](https://github.com/kadironer/Ortamin-Sicaklik-Nemini-Olcme/blob/master/project_images/4.jpg?raw=true)
![Uygulama Ekran Görüntüsü](https://github.com/kadironer/Ortamin-Sicaklik-Nemini-Olcme/blob/master/project_images/5.jpg?raw=true)

  
