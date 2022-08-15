/* Autor: Jesús López
   Fecha: 05 de Agosto de 2022
   Titulo: Proyecto iluminación con relé.
   Descripcion: Este programa realizará un encendido de la bombilla a través del relé y comutará entre otro relé para que siemrpe
   tenga una bombilla activa y nunca dos al mismo tiempo.


  Conexiones del relé:
    S: pin 2/3
    +: 5V
    -: GND
*/

// Definimos la salida de la señal del rele1 al pin número 2.
int relay1 = 2;

// Definimos la salida de la señal del rele2 al pin número 3.
int relay2 = 3;


// Configuración
void setup() {
  pinMode(relay1, OUTPUT); // Configuramos que el primer relé es una salida o OUTPUT de la placa, pin "D2".
  pinMode(relay2, OUTPUT); // Configuramos que el segundo relé es una salida o OUTPUT de la placa, pin "D3".
  Serial.begin(9600); // Abrir el puerto serie a la velocidad de 9600bpspara transferencia de datos.
}


// Código principal en búcle infinito
void loop() {

  // Iniciamos con los dos reles apagados.
  digitalWrite(relay1, HIGH);  // Envia señal ALTA (5V) al primer relé.
  digitalWrite(relay2, HIGH);  // Envia señal ALTA (5V) al relé número dos.
  delay(3000); // Retardo de 3 segundos

   // Encendido del relé número 1
  digitalWrite(relay1, LOW); // Envia señal BAJA (0V) al primer relé.
  Serial.println("Relé numero 1 encendido");
  delay(45000);           // 45 segundo encendido 
   // Apagado del relé número 1
  digitalWrite(relay1, HIGH);  // Envia señal ALTA (5V) al primer relé.
  Serial.println("Relé 1 apagado");
  delay(3000);           // 3 segundos apagado


  // Encendido del relé número 2 
  digitalWrite(relay2, LOW); // Envia señal BAJA (0V) al segundo relé.
  Serial.println("Relé numero 2 encendido");
  delay(45000);           // 45 segundos encendido
  // Apagado del relé número 2
  digitalWrite(relay2, HIGH);  // Envia señal ALTA (5V) al relé número dos.
  Serial.println("Relé 2 apagado");
}
