#define Relay1 12
#define Relay2 13

#define pinSensorA A1
#define pinSensorD 2

const int potenciometro = 0;
int valor = 0;
int sensorD;



configuração nula () {
  pinMode (pinSensorD, INPUT); // Sensor Umidade Solo
  pinMode (pinSensorA, INPUT); // Sensor Umidade Solo
  pinMode (Relé1, SAÍDA); // Valvula Solenoide
  pinMode (relé2, saída); // Bomba de Água
  pinMode (5, SAÍDA); // Led Verde
  pinMode (6, SAÍDA); // Led Amarelo
  pinMode (7, SAÍDA); // Led Vermelho
  Serial.begin (9600);

}

loop vazio () {

  Serial.print ("Valor Tanque:"); // Tanque
  valor = leitura analógica (potenciômetro);
  Serial.println (valor);

  Serial.print ("Valor Sensor Digital:"); // Sensor Digital
  sensorD = leitura digital (pinSensorD);
  Serial.println (sensorD);
  atraso (700);



  if (valor <= 0) {
    digitalWrite (7, ALTO);
  }
  outro
    digitalWrite (7, BAIXO);


  if (valor> = 1 && valor <= 10) {
    digitalWrite (6, ALTO);
  }
  outro
    digitalWrite (6, BAIXO);


  if (valor> 10) {
    digitalWrite (5, ALTO);
  }
  outro
    digitalWrite (5, BAIXO);




  if ((sensorD> = 1) && (valor <= 0)) {
    digitalWrite (12, ALTO);
  }
  outro {
    digitalWrite (12, BAIXO);
  }
  if (sensorD> = 1 && valor> = 1 && valor <= 10)
    digitalWrite (13, ALTO);
outro {
  digitalWrite (13, BAIXO);

if ((sensorD> = 1) && (valor> = 10)) {
  digitalWrite (13, ALTO);
}
outro {
  digitalWrite (13, BAIXO);
  
  }
 }
}
