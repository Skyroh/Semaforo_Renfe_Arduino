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
  pinMode(relay1, OUTPUT); // Configuramos que el primer relé es una salida o OUTPUT.
  pinMode(relay2, OUTPUT); // Configuramos que el segundo relé es una salida o OUTPUT.
  Serial.begin(9600); // Abrir el puerto serie a la velocidad de 9600bps para trasnmicion de datos.
}

void loop() {
  // Código principal del búcle


  // Accionamiento del relé número 1
  digitalWrite(relay1, HIGH); // envia señal alta al primer relé
  Serial.println("Relay numero 1 accionado");
  delay(45000);           // 45 segundo
  
  digitalWrite(relay1, LOW);  // envia señal baja al relé número uno.
  Serial.println("Relay 1 no accionado");
  delay(3000);           // 3 segundo


  // Accionamiento del relé número 2 
  digitalWrite(relay2, HIGH); // envia señal alta al segudo relé
  Serial.println("Relay numero 2 accionado");
  delay(45000);           // 45 segundo
  
  digitalWrite(relay2, LOW);  // envia señal baja al relé número dos.
  Serial.println("Relay 2 no accionado");
  delay(3000);           // 3 segundo
}
