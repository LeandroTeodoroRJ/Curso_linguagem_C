/*
	ESTRUTURAS
	Estrutura é uma coleção de variáveis, não necessariamente do mesmo
tipo, agrupadas em um mesmo nome base (variável da estrutura).
*/

#include <stdio.h>
#include <string.h>

struct serialPort{
	char name[10];
	int transfer_rate;
};
typedef struct serialPort SerialPort;
struct serialPort serial;

void changePort(SerialPort change_serial){
	strcpy(change_serial.name, "COM2");
	change_serial.transfer_rate = 115200;
	serial.transfer_rate = change_serial.transfer_rate;
	strcpy(serial.name, change_serial.name);
}

void updatePort(SerialPort *pserial){
	strcpy(pserial->name, "COM3");
	pserial->transfer_rate = 300;
}

int main(){
	strcpy(serial.name, "COM1");
	serial.transfer_rate = 9600;

	printf("Port Name %s \n", serial.name);
	printf("Transfer Rate: %i \n", serial.transfer_rate);
	printf("\n");

	changePort(serial);

	printf("Port Name %s \n", serial.name);
	printf("Transfer Rate: %i \n", serial.transfer_rate);
	printf("\n");

	updatePort(&serial);

	printf("Port Name %s \n", serial.name);
	printf("Transfer Rate: %i \n", serial.transfer_rate);
	printf("\n");

	return 0;
}
