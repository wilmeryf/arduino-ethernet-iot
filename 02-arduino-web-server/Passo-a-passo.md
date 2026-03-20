# Servidor Web com Arduino

Implementamos um servidor web no Arduino, permitindo o acesso a uma página HTML através do navegador utilizando o endereço IP do dispositivo na rede local.

---

## Objetivo
- Criar uma página HTML simples  
- Integrar o HTML ao código do Arduino  
- Permitir acesso via navegador utilizando o IP  
- Demonstrar comunicação entre hardware e rede  

---

## Materiais Utilizados
- Arduino  
- Ethernet Shield  
- Cabo RJ45  
- Roteador  
- Celular (para testes)  
- Arduino IDE  
- Visual Code  

---

## Montagem

1. Conectar o Ethernet Shield ao Arduino  
2. Conectar o cabo RJ45 ao módulo Ethernet  
3. Conectar a outra ponta do cabo ao roteador  
4. Ligar o Arduino na energia  

---

## Configuração no Código

1. Criar uma página HTML simples  
2. Inserir o código HTML dentro do código Arduino  
3. Configurar o endereço MAC  
4. Configurar o IP (ou utilizar DHCP)  
5. Programar o Arduino para atuar como servidor web  
6. Fazer upload do código para o Arduino  

---

## Funcionamento

- O Arduino atua como um servidor web  
- Ao acessar o endereço IP no navegador, o Arduino responde enviando a página HTML  
- O navegador interpreta o HTML e exibe a página ao usuário  

---

## Testes Realizados

- Acesso ao IP do Arduino via navegador ✓ 
- Teste realizado via celular ✓ 
- Página HTML carregada com sucesso ✓ 
