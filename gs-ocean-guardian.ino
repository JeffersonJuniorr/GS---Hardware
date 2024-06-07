#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <OneWire.h>
#include <DallasTemperature.h>

// Definindo o pino do sensor de nível de água
const int nivelAguaPin = 6;

// Definindo os pinos dos sensores
const int turbidezPin = A0;
const int phPin = A1;
const int tempPin = 7;

// Configurando o display LCD
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Configurando o sensor de temperatura
OneWire oneWire(tempPin);
DallasTemperature sensors(&oneWire);

void setup() {
  pinMode(nivelAguaPin, INPUT);
  lcd.begin(16, 2);
  lcd.backlight();
  sensors.begin();
  
  // Iniciando a comunicação serial
  Serial.begin(9600);
}

void loop() {
  // Lendo o sensor de nível de água
  int nivelAguaState = digitalRead(nivelAguaPin);

  // Lendo o sensor de turbidez
  int turbidezValue = analogRead(turbidezPin);

  // Lendo o sensor de pH
  int phValue = analogRead(phPin);

  // Lendo o sensor de temperatura
  sensors.requestTemperatures();
  float temperatura = sensors.getTempCByIndex(0);
  
  // Exibindo os valores no display LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Nivel: ");
  lcd.print(nivelAguaState == HIGH ? "Alto" : "Baixo");
  
  lcd.setCursor(0, 1);
  lcd.print("Turbidez: ");
  lcd.print(turbidezValue);

  delay(2000);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("pH: ");
  lcd.print(phValue);

  lcd.setCursor(0, 1);
  lcd.print("Temp: ");
  lcd.print(temperatura);
  lcd.print(" C");

  delay(2000);

  // Imprimindo os valores no serial monitor
  Serial.print("Nivel de Agua: ");
  Serial.println(nivelAguaState == HIGH ? "Alto" : "Baixo");
  Serial.print("Turbidez: ");
  Serial.println(turbidezValue);
  Serial.print("pH: ");
  Serial.println(phValue);
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" C");
}
