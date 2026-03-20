/**
  Arduino WEB Server
  @author Reginaldo, Ryan e Anderson
*/

#include <SPI.h>
#include <Ethernet.h>

byte mac[6] = { 0x90, 0xA2, 0xDA, 0x62, 0xBA, 0x4B };
EthernetServer server(80);

// Armazenamento do código HTML na memória flash do Arduino
const char pagina[] PROGMEM = R"HTML(
  <!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Arduino WEB Server</title>
    <style>
        body {
            font-family: sans-serif;
            text-align: center;
        }
    </style>
</head>
<body>
    <h1>Hello Arduino</h1>
</body>
</html>
)HTML";

void setup() {
  Serial.begin(9600);
  Ethernet.begin(mac);
  server.begin();
  Serial.println("Servidor WEB");
  Serial.print("IP do Servidor: ");
  Serial.println(Ethernet.localIP());
}

void loop() {
  // Tem alguém tentando se conectar comigo? (requisição navegador)
  EthernetClient client = server.available();
  // Navegador de internet faz uma requisição
  if (client) {
    // Ler a requisição
    if (client.available()) {
      client.read();
    }

    // Disponibilizar o código HTML para o client (navevegador)
    // Passo 1: Iniciar o protocolo de tranferência HTTP
    client.println("HTTP/1.1 200 OK");
    client.println("Content-Type: text/html");
    client.println("Connection: close");
    client.println("");  //importante (pausa)
    // Passo 2: Entregar (resposta a requisição) o HTML
    client.print((__FlashStringHelper*)pagina);
    // Passo 3: Encerrar a conexão
    delay(1);  //pequeno tempo para limpar o buffer
    client.stop();
  }
}
