/* Filename    : lora_gpio source file
   Description : configures, GPIO, handles other tasks
   Author      : http://www.ssla.co.uk

   This software is SSLA licensed
   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#ifndef ___LORA_GPIO_H___
#define ___LORA_GPIO_H___ 1

#define RFM95_DIO0                  26
#define RFM95_RESET                 45

int gpio_init(void);
void gpio_deinit(void);
int gpio_reset_rfm95(void);
int gpio_dio0_callback(void);

#endif /* ___LORA_GPIO_H___ */
