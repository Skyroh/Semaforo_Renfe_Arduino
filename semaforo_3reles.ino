/* Autor: Jesús López
   Fecha: 05 de Agosto de 2022
   Titulo: Proyecto iluminación con relé.
   Descripcion: Este programa realizará un encendido de la bombilla a través del relé y comutará, también tendra 2 relés activado al mismo tiempo en un ciclo.

  Conexiones del relé:
    S: pin 2/3
    +: 5V
    -: GND
*/

// Definimos la salida de la señal del rele1 al pin número 2.
int relay1 = 2;

// Definimos la salida de la señal del rele2 al pin número 3.
int relay2 = 3;

// Definimos la salida de la señal del rele3 al pin número 4.
int relay3 = 4;


// Configuración
void setup() {
  pinMode(relay1, OUTPUT); // Configuramos que el primer relé es una salida o OUTPUT de la placa, pin "D2".
  pinMode(relay2, OUTPUT); // Configuramos que el segundo relé es una salida o OUTPUT de la placa, pin "D3".
  pinMode(relay3, OUTPUT); // Configuramos que el tercer relé es una salida o OUTPUT de la placa, pin "D4".
  Serial.begin(9600); // Abrir el puerto serie a la velocidad de 9600bps para transferencia de datos.
}

 // Código principal en búcle infinito
void loop() {
  // Encendido del relé número 1 (Luz verde)
  digitalWrite(relay1, HIGH); // Envia señal alta (5V) al primer relé.
  Serial.println("Relé numero 1 encendido");
  delay(45000);           // 45 segundo encendido 
   // Apagado del relé número 1
  digitalWrite(relay1, LOW);  // Envia señal baja (0V) al primer relé.
  Serial.println("Relé 1 apagado");
  delay(3000);           // 3 segundos apagado

  // Encendido del relé número 3 (Luz Amarilla)
  digitalWrite(relay3, HIGH); // Envia señal alta (5V) al tercer relé.
  Serial.println("Relé numero 3 encendido");
  delay(45000);           // 45 segundos encendido.
  // Apagado del relé número 3
  digitalWrite(relay3, LOW);  // Envia señal baja (0V) al relé número tres.
  Serial.println("Relé 3 apagado");
  delay(3000);           // 3 segundos apagado.

  // Encendido del relé número 2 (Luz Roja)
  digitalWrite(relay2, HIGH); // Envia señal alta (5V) al segundo relé.
  Serial.println("Relé numero 2 encendido");
  delay(45000);           // 45 segundos encendido
  // Apagado del relé número 2
  digitalWrite(relay2, LOW);  // Envia señal baja (0V) al relé número dos.
  Serial.println("Relé 2 apagado");
  delay(3000);           // 3 segundos apagado


// Encendido de 2 relés (Luz verde y amarilla)
  digitalWrite(relay1, HIGH); // Envia señal alta (5V) al primer relé.
  digitalWrite(relay3, HIGH); // Envia señal alta (5V) al tercer relé.
  Serial.println("Relé numero 1 y número 3 encendidos");
  delay(45000);           // 45 segundos encendido

// Apagado de los dos reles
  digitalWrite(relay1, LOW);  // Envia señal baja (0V) al primer relé.
  digitalWrite(relay3, LOW);  // Envia señal baja (0V) al relé número tres.
  Serial.println("Relé 1 y 3 apagados");
  delay(3000);           // 3 segundo

}
