// C++ code
//
int botao = 7;
int led10 = 10;
int led11 = 11;

int estado = 0;
int ultimoBotao = 0;

void setup() {
  pinMode(botao, INPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
}

void loop() {

  int botaoAtual = digitalRead(botao);
  if (botaoAtual == HIGH && ultimoBotao == LOW) {

    estado = estado + 1;

    if (estado == 1) {
      digitalWrite(led10, HIGH);
      digitalWrite(led11, LOW);
       delay(200);
    }
    if (estado == 2) {
      digitalWrite(led10, LOW);
      digitalWrite(led11, HIGH);
       delay(200);
    }
    if (estado == 3) {
      digitalWrite(led10, LOW);
      digitalWrite(led11, LOW);
      estado = 0;
       delay(200);
    }
    delay(200);
  }
  ultimoBotao = botaoAtual;
}
