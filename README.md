# Motores elétricos
> Status: Desenvolvimento do relatório ⚠️
### Existe uma infinidade de motores no mercado da eletridade e da eletrônica. A escolha do tipo está diretamente realicionada a necessidade do projeto.

# Motores CC

# Motores AC

# Motores Brushless

## Qual a diferença desse tipo para os motores CC convencionais?

### Os motores brushless oferecem maior eficiência, maior controle de velocidade e torque, menor necessidade de manutenção, mas também tendem a ser mais complexos e mais caros do que os motores CC convencionais. A escolha entre esses dois tipos de motores depende das necessidades específicas da aplicação e das restrições de custo.

### Vantagens

+ Menor ruído
+ Melhor precisão
+ Capacidade para altas velocidades

### Como usar esse tipo de motor com um arduino?

![Uno](https://github.com/Gustavo-Guilherme-Wanderley/MotorBrushless/assets/77367556/8c2e90bb-4a35-4c05-84dd-093604007c7f)

# Speed Control ESC 25 A 30A

![ESC 30A](https://github.com/Gustavo-Guilherme-Wanderley/MotorBrushless/assets/132305741/19542791-15f0-4bb4-b663-839dae5f46e4)

### É um dispositivo eletrônico usado para controlar a velocidade de motores elétricos em aplicações como aeromodelismo, drones, carros RC (controle remoto) e outras formas de veículos ou dispositivos movidos a motor elétrico.

# Código para utilizar o ESC 
![Código ESC 30A](https://github.com/Gustavo-Guilherme-Wanderley/MotorBrushless/assets/77367556/fd313833-440d-429d-814f-e2d8a3fc4576) 
### Este é um código simples para mostrar a capacidade do arduino junto do ESC para controlar a velocidade do motor Brushless.
# Início do código
![Parte inicial código](https://github.com/Gustavo-Guilherme-Wanderley/MotorBrushless/assets/77367556/f50318a8-201b-425b-92d9-1bbdc79dd85f)
### Aqui, é declarada uma variável ValorPOT do tipo inteiro, que será usada para armazenar o valor lido do potenciômetro.
# Void setup
![Void setup](https://github.com/Gustavo-Guilherme-Wanderley/MotorBrushless/assets/77367556/29024623-67fa-40a5-9ec3-a9afc4f0be46)
### No bloco setup(), o ESC é inicializado. O método attach() é usado para vincular o objeto ESC ao pino 9 do Arduino. Além disso, são especificados os valores mínimos e máximos da largura do pulso em microssegundos que o ESC pode receber. Esses valores podem variar dependendo do ESC que você está usando, portanto, verifique as especificações do seu ESC para determinar os valores corretos.
# Void loop
![Void loop](https://github.com/Gustavo-Guilherme-Wanderley/MotorBrushless/assets/77367556/73cf6b73-a32a-4d6d-ba8e-bd5aa9bafa58)
### Dentro do loop principal loop(), o código lê o valor do potenciômetro usando analogRead(A0), onde A0 é o pino analógico ao qual o potenciômetro está conectado. O valor lido está na faixa de 0 a 1023.

Em seguida, o valor lido do potenciômetro é mapeado para a faixa de 0 a 180 usando a função map(). Isso é necessário porque a biblioteca Servo do Arduino espera um valor entre 0 e 180 para controlar a posição do servo.

Por fim, o valor mapeado potValue é enviado para o ESC usando ESC.write(potValue). O ESC interpreta esse valor como um ângulo e ajusta a velocidade do motor brushless correspondente.

Certifique-se de conectar corretamente o potenciômetro ao pino analógico A0 do Arduino e o ESC ao pino 9 (ou qualquer outro pino digital disponível). Além disso, verifique as especificações do seu ESC para determinar os valores corretos para a largura do pulso.

# Fontes: 
+ https://howtomechatronics.com/tutorials/arduino/arduino-brushless-motor-control-tutorial-esc-bldc/
> Status: Desenvolvimento do relatório ⚠️
