// C++ code

void setup()
{
  pinMode (23, OUTPUT); //função de saída de pino 23
}

void loop()
{
  digitalWrite(23, HIGH); //acende o led
  delay(1000); //por 2 segundos
  digitalWrite(23, LOW); //apaga o led
  delay(1000); //por 2 segundos
}


