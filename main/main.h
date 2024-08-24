/**************************************************************************************************
 ** (c) Copyright 2024: Jorge Vasquez <jorgefernandov10@gmail.com>
 ** ALL RIGHTS RESERVED, DON'T USE OR PUBLISH THIS FILE WITHOUT AUTORIZATION
 *************************************************************************************************/
#ifndef MAIN_H   /*! @cond    */
#define MAIN_H   /*! @endcond */


/** @file main.h
 ** @brief Definición de la función header del programa
 **/

/* === Inclusiones de archivos externos ======================================================== */

/* === Cabecera C++ ============================================================================ */

#ifdef __cplusplus
extern "C" {
#endif

/* === Definicion y Macros ===================================================================== */

/* === Declaraciones de tipos de datos ========================================================= */

/* === Declaraciones de variables externas ===================================================== */

/* === Declaraciones de funciones externas ===================================================== */

/**
 * @brief Funcion principal
 * 
 * @return void
 */
void app_main(void);

/**
 * @brief Funcion init
 *
 * @return sp_err_t        Devuelve True o False
 */
esp_err_t init_led();

/**
 * @brief Funcion blink
 *
 * @return sp_err_t        Devuelve True o False
 */
esp_err_t blink_led();

/* === Ciere de documentacion ================================================================== */

#ifdef __cplusplus
}
#endif

/** @} Final de la definición del modulo para doxygen */

#endif /* MAIN_H */