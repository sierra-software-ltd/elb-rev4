# elb-rev4
All firmware, middleware, application software related to elb-rev4 module

Plug the ELB-REV4 using a power adapter 5V, 2.5A

ELB-REV4 has the following on board 
CPU ARM cortex-A8 1-Ghz processor AM335X board with SGX530 graphic core.
Serial Interface: RS232 interface (2), RS485 interface (2), I2C, SPI, CAN interface, USB (2).
Connectivity: LTE modem, Wifi802.11 abgn, Ethernet, LoRa(Gateway).
Memory: eMMC 4GB, SD card, 512MB DDR3 SRAM, 1024K eprom.
GPIOS: 8 LED’s, 4 switches and 20 GPIO’s, Timer/Pulse Counter LCD interface(optional).
Operating System: Linux
Box package contains RS232_USB cable, Ethernet cable, Power adapter(5V, 2.5A)

Connect the ethernet cable to the ELB-REV4 now you can ssh to the device using the below command
ssh -p <port number> root@<ip address> for example
ssh -p 22 root@192.168.1.178

The LoRA gateway code can handle upto 10 LoRA client modules.

For details software development or any custom application development please contact sales@ssla.co.uk
