#simple building script

release:
	$(CROSS_COMPILE)gcc main.c lora_rfm95.c lora_gpio.c lora_spi.c  -D DIAG_MSG -I $(INC) -L $(LIBS) -lpthread -o lora_master 
