/* Filename    : os_abstraction file
   Description : timer apis to delay tasks
   Author      : http://www.ssla.co.uk

   This software is SSLA licensed
   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#ifndef ___OS_ABSTRACTION_H___
#define ___OS_ABSTRACTION_H___ 1

#include <time.h>

static inline void os_delay_ms(int ms) {
    struct timespec ts = {
        .tv_sec = ms/1000,
        .tv_nsec = (ms % 1000) * 1000000,
    };

    nanosleep(&ts, NULL);
}

#endif /* ___OS_ABSTRACTION_H___ */
