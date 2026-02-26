# Atividade: LED Blink com ESP32

Este repositório contém o projeto de um sistema **LED Blink** (Pisca-LED) desenvolvido para a plataforma **ESP32**. Este é o projeto fundamental para validar o funcionamento do hardware e a comunicação com a **Arduino IDE**.

---

## Descrição do Projeto
O objetivo desta atividade é configurar um ciclo de repetição onde um LED alterna entre os estados ligado e desligado em intervalos de 1 segundo. É o primeiro passo para entender o controle de portas digitais (GPIOs) no ESP32.

## Hardware Necessário
| Componente | Quantidade |
| :--- | :---: |
| Placa ESP32 (ex: DevKit V1) | 1 |
| LED VEERMELHO | 1 |
| Resistor (220Ω ou 330Ω) | 1 |
| Protoboard | 1 |
| Jumpers | 2 |

## Esquema de Ligação
1. **LED (Anodo - perna longa):** Conectado ao pino **GPIO 2**.
2. **Resistor:** Conectado entre o **Catodo (perna curta)** e o **GND**.
3. **GND:** Conectado ao pino de aterramento da placa.

> **Dica:** A maioria das placas ESP32 já possui um LED azul integrado (Built-in LED) conectado à **GPIO 2**, permitindo testar o código sem componentes externos.

## Configuração do Ambiente (Arduino IDE)
1. Instale a **Arduino IDE**.
2. Adicione a URL das placas ESP32 em `Preferências`:
   `https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json`
3. No `Gerenciador de Placas`, instale o pacote **esp32 by Espressif Systems**.
4. Selecione o modelo da sua placa em `Ferramentas > Placa`.

## Código Fonte
```cpp
/*
 * Projeto: LED Blink
 * Autor: Vitor Miguel
 */

// C++ code

void setup()
{
  pinMode (23, OUTPUT); //função de saída de pino 23
}

void loop()
{
  digitalWrite(23, HIGH); //acende o led
  delay(200); //por 2 segundos
  digitalWrite(23, LOW); //apaga o led
  delay(200); //por 2 segundos
}

