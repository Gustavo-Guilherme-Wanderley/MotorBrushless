# Motores elétricos
> Status: Desenvolvimento do relatório ⚠️
### Existe uma infinidade de motores no mercado da eletridade e da eletrônica. A escolha do tipo está diretamente realicionada a necessidade do projeto.

# Motores DC
Motores DC, convertem a energia elétrica de corrente contínua em energia mecanica. Com o auxilio das escovas e dos comutadores, o motor consegue se manter rotacionando, porém essas escovas causam um desgaste, que torna a necessidade de manutenção mais frequente. 


<img src="https://github.com/Gustavo-Guilherme-Wanderley/MotorBrushless/assets/132305457/fb44b39e-0a44-4946-926b-8c4e4a1d65a8" width=50% height=50%>

# Motores AC
Motores AC, funcionam com corrente alternada. Esse tipo de motor já não possui escovas, e se mantém ativo por interações de campos magnéticos, que são gerados pela corrente alternada. Porém esses motores são mais complexos, possuindo vários componentes, o que aumenta as chances de defeito.

<img src="https://github.com/Gustavo-Guilherme-Wanderley/MotorBrushless/assets/132305457/f81299ff-8c73-49ec-96cb-165e28c86f4c" width=50% height=50%>

# Motores Brushless


![Brushless](https://github.com/Gustavo-Guilherme-Wanderley/MotorBrushless/assets/77367556/dfca61dd-eec7-4571-8cb2-f7f62321912a)

## Modelo acima é um **exemplo** de motor brushless.
### HACKER A30-14L V2 OUTRUNNER BRUSHLESS MOTOR AIR PLANE.

#### Especificações:
+ Weight 143.00 
+ Grams Shaft 
+ Diameter 5.00 mm 
+ Shaft 
+ Length 17.0000 mm 
+ RPMv 800 Idle 
+ Current 1.60 Amps 
+ Operating Current 
+ 40 Amps Peak Current 
+ 50 Amps Peak Watts 
+ 500 Peak Amps 
+ 0.0000 Resistance 
+ 0.0360 ohms 
+ Poles 14 Orientation Out Motor 
+ Diameter 37.00 mm Motor Length 46.00 mm

## Qual a diferença desse tipo para os motores CC convencionais?

Os motores brushless oferecem maior eficiência, maior controle de velocidade e torque, menor necessidade de manutenção, mas também tendem a ser mais complexos e mais caros do que os motores CC convencionais. A escolha entre esses dois tipos de motores depende das necessidades específicas da aplicação e das restrições de custo.

### Vantagens

+ Menor ruído
+ Melhor precisão
+ Capacidade para altas velocidades

### Como usar esse tipo de motor com um arduino?

![Uno](https://github.com/Gustavo-Guilherme-Wanderley/MotorBrushless/assets/77367556/8c2e90bb-4a35-4c05-84dd-093604007c7f)

# ESC

![ESC 30A](https://github.com/Gustavo-Guilherme-Wanderley/MotorBrushless/assets/132305741/19542791-15f0-4bb4-b663-839dae5f46e4)

É um dispositivo eletrônico usado para controlar a velocidade de motores elétricos em aplicações como aeromodelismo, drones, carros RC (controle remoto) e outras formas de veículos ou dispositivos movidos a motor elétrico.
# Circuito para utilizar o ESC juntamente o Arduino UNO

![CIRCUITO DE CONTROLE LIGADO AO ARDUINO](https://github.com/Gustavo-Guilherme-Wanderley/MotorBrushless/assets/77367556/5420ebb6-33d1-47bb-8801-72ef21db6bd9)

# Código para utilizar o ESC 
### Este é um código simples para mostrar a capacidade do arduino junto do ESC para controlar a velocidade do motor Brushless.
```
#include <Servo.h>

Servo ESC;     

int ValorPOT;  

void setup() {

  ESC.attach(9,1000,2000); 
  
}

void loop() {
  ValorPOT = analogRead(A0);   
  
  ValorPOT = map(ValorPOT, 0, 1023, 0, 180);  
   
  ESC.write(ValorPOT);
}
```
# Início do código
```
#include <Servo.h>

Servo ESC;     

int ValorPOT; 
```
Aqui, é declarada uma variável ValorPOT do tipo inteiro, que será usada para armazenar o valor lido do potenciômetro.

# Void setup
```
void setup() {

  ESC.attach(9,1000,2000); 
  
}
```
No bloco setup(), o ESC é inicializado. O método attach() é usado para vincular o objeto ESC ao pino 9 do Arduino. Além disso, são especificados os valores mínimos e máximos da largura do pulso em microssegundos que o ESC pode receber. Esses valores podem variar dependendo do ESC que você está usando, portanto, verifique as especificações do seu ESC para determinar os valores corretos.
# Void loop

```
void loop() {
  ValorPOT = analogRead(A0);   
  
  ValorPOT = map(ValorPOT, 0, 1023, 0, 180);  
   
  ESC.write(ValorPOT);
}
```

Dentro do loop principal loop(), o código lê o valor do potenciômetro usando analogRead(A0), onde A0 é o pino analógico ao qual o potenciômetro está conectado. O valor lido está na faixa de 0 a 1023.

Em seguida, o valor lido do potenciômetro é mapeado para a faixa de 0 a 180 usando a função map(). Isso é necessário porque a biblioteca Servo do Arduino espera um valor entre 0 e 180 para controlar a posição do servo.

Por fim, o valor mapeado ValorPOT é enviado para o ESC usando ESC.write(ValorPOT). O ESC interpreta esse valor como um ângulo e ajusta a velocidade do motor brushless correspondente.

Além disso, verifique as especificações do seu ESC para determinar os valores corretos para a largura do pulso.

# Fontes: 
+ https://howtomechatronics.com/tutorials/arduino/arduino-brushless-motor-control-tutorial-esc-bldc/
+ https://www.worthpoint.com/worthopedia/hacker-a30-14l-v2-outrunner-brushless-431114921
+ https://materialpublic.imd.ufrn.br/curso/disciplina/1/58/2/2
> Status: Desenvolvimento do relatório ⚠️
