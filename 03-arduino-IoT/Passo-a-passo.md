# Servidor Web com Interação do Arduino

Implementamos a interação entre o usuário e o Arduino através de uma interface web. Foi possível controlar LEDs utilizando botões em uma página HTML acessada pelo navegador.

---

## Objetivo
- Criar uma interface interativa com HTML  
- Permitir controle de LEDs via navegador  
- Demonstrar comunicação entre usuário e hardware  
- Aplicar conceitos de IoT e automação  

---

## Materiais Utilizados
- Arduino  
- Ethernet Shield  
- Cabo RJ45  
- Roteador  
- LEDs  
- Resistores  
- Jumpers  
- Celular (para testes)  
- Arduino IDE
- VS Code  

---

## Montagem

1. Conectar o Ethernet Shield ao Arduino  
2. Conectar o Arduino ao roteador via cabo RJ45  
3. Conectar os LEDs aos pinos digitais do Arduino  
4. Utilizar resistores para proteção dos LEDs  
5. Ligar o Arduino na energia  

---

## Configuração no Código

1. Criar uma página HTML com botões de controle  
2. Inserir o HTML dentro do código Arduino  
3. Configurar os pinos dos LEDs como saída  
4. Programar o Arduino para interpretar os comandos do navegador  
5. Associar os botões a ações (ligar/desligar LEDs)  
6. Fazer upload do código para o Arduino  

---

## Funcionamento

- O Arduino atua como servidor web  
- O usuário acessa o IP pelo navegador  
- A página HTML é carregada com botões de controle  
- Ao clicar nos botões, o navegador envia comandos  
- O Arduino processa os comandos e controla os LEDs  

---

## Testes Realizados

- Acesso ao sistema via celular ✓  
- Interface carregada com sucesso ✓  
- LEDs respondendo aos comandos ✓  
- Teste de ligar e desligar LEDs ✓
