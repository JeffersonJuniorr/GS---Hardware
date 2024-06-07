# GS---Hardware
Arthur Galvão Alves rm554462 | Felipe Braunstein e Silva rm554483 | Jefferson Junior Alvarez rm558497

Projeto de Controle de Nível de Água com Motor de Passo e Sensor Ultrassônico
Descrição
Este projeto utiliza um motor de passo e um sensor ultrassônico HC-SR04 para simular a subida e descida do nível da água com base na distância medida pelo sensor. O motor de passo ajusta o nível da água conforme a distância medida pelo sensor.

Componentes
Arduino Uno (ou qualquer outra placa compatível)
Motor de passo
Driver do motor de passo
Sensor ultrassônico HC-SR04
Protoboard e jumpers
Fonte de alimentação (se necessário)
Conexões
Motor de Passo
MotorPin1 -> Pino 8 do Arduino
MotorPin2 -> Pino 9 do Arduino
MotorPin3 -> Pino 10 do Arduino
MotorPin4 -> Pino 11 do Arduino
Sensor Ultrassônico
VCC -> 5V do Arduino
GND -> GND do Arduino
TrigPin -> Pino 12 do Arduino
EchoPin -> Pino 13 do Arduino

Instruções
Monte o circuito conforme as conexões descritas acima.
Conecte o Arduino ao seu computador.
Abra o Arduino IDE e copie o código fornecido.
Verifique se a biblioteca Stepper está instalada. Caso contrário, instale-a através do Gerenciador de Bibliotecas.
Carregue o código no Arduino.
Abra o Monitor Serial para visualizar a distância medida pelo sensor ultrassônico.
O motor de passo ajustará o nível da água com base na distância medida.
Funcionamento
O sensor ultrassônico mede a distância até a superfície da água.
Se a distância medida for menor que 10 cm, o motor de passo gira para subir o nível da água.
Se a distância medida for maior que 20 cm, o motor de passo gira para descer o nível da água.
A distância medida é exibida no Monitor Serial.
Licença
Este projeto é de código aberto e pode ser utilizado livremente para fins educacionais e pessoais.

https://wokwi.com/projects/399908950401531905
