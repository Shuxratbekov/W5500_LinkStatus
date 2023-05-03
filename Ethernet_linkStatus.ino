#include "SPI.h"
#include "Ethernet.h"

void setup() {
  Serial.begin(9600);
}

void loop() {
  auto link = Ethernet.linkStatus();
  //  Вывод текста в монитор последовательного порта
  Serial.print("Link status: ");
  //  Проверяем значение переменной link
  switch (link) {
    //  Если "Статус: неизвестно", то
    case Unknown:
      //  выводим текст "Unknown" в монитор последовательного порта
      Serial.println("Unknown");
      break;
    //  Если "Статус: подключение есть", то
    case LinkON:
      //  выводим текст "ON" в монитор последовательного порта
      Serial.println("ON");
      break;
    //  Если "Статус: подключения нет", то
    case LinkOFF:
      //  выводим текст "OFF" в монитор последовательного порта
      Serial.println("OFF");
      break;
  }
  //  Задержка в 1 секунду
  delay(1000);
}
