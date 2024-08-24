/**************************************************************************************************
 ** (c) Copyright 2024: Jorge Vasquez <jorgefernandov10@gmail.com>
 ** ALL RIGHTS RESERVED, DON'T USE OR PUBLISH THIS FILE WITHOUT AUTORIZATION
 *************************************************************************************************/

/** @file main.c
 ** @brief Definición de la función principal del programa
 **/

/* === Inclusiones de cabeceras ================================================================ */
#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "main.h"

/* === Definicion y Macros ===================================================================== */

#define led1 2

/* == Declaraciones de tipos de datos internos ================================================= */

/* === Declaraciones de funciones internas ===================================================== */

/* === Definiciones de variables internas ====================================================== */

uint8_t led_level = 0;

/* === Definiciones de funciones internas ====================================================== */

/* === Definiciones de funciones externas ====================================================== */
void app_main(void) {
    init_led();
    while (1) {
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        blink_led();
        printf("Led level: %u\n", led_level);
    }
}

esp_err_t init_led() {
    gpio_reset_pin(led1);
    gpio_set_direction(led1, GPIO_MODE_OUTPUT);
    return ESP_OK;
}

esp_err_t blink_led(void) {
    led_level = !led_level;
    gpio_set_level(led1, led_level);
    return ESP_OK;
}

/* === Ciere de documentacion ================================================================== */

/** @} Final de la definición del modulo para doxygen */
