/*
 * Fecha.h
 *
 *  Created on: 11 may. 2022
 *      Author: JUNMI
 */

#ifndef FECHA_H_
#define FECHA_H_

typedef struct{
    int dia;
    int mes;
    int anio;
}eFecha;

#endif // FECHA_H_INCLUDED

/// @brief Valido que una fecha sea posible. No toma en cuenta los a�os bisiestos.
///
/// @param unaFecha recibo la ddm de la fecha que quiero validar
/// @return devuelvo 1 cuando finalice la funci�n y 0 si le lleg� alg�n dato inv�lido
int validarFecha(eFecha* unaFecha);
