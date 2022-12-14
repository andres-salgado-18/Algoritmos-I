#ifndef TRANSPORTEURBANO_AUXILIARES_H
#define TRANSPORTEURBANO_AUXILIARES_H

#include "definiciones.h"
#include "string"

double obtenerLatitud(gps posicion);
double obtenerLongitud(gps posicion);
gps obtenerPosicion(tuple<tiempo, gps> medicion);
tiempo obtenerTiempo(tuple<tiempo, gps> medicion);
double distEnKM(gps posicion1, gps posicion2);
gps desviarPunto(gps p, double desvioMtsLatitud, double desvioMtsLongitud);
gps puntoGps(double latitud, double longitud);
tuple<tiempo, gps> medicion(tiempo t, gps g);

void guardarGrillaEnArchivo(grilla g, string nombreArchivo);
void guardarRecorridosEnArchivo(vector<recorrido> recorridos, string nombreArchivo);
tiempo tiempoMin(viaje viaje1);
tiempo tiempoMax(viaje viaje1);
void swapVal(viaje &v, int d, int h);
tiempo findMinPositionTime(viaje &s, int d, int h);
void ordenarViaje(viaje &v);
double velocidad(tuple<tiempo, gps> medicion1,tuple<tiempo, gps> medicion2);
bool cubierto(viaje v0, distancia u, gps p);
bool viajeEnFranja(viaje v, tiempo t0, tiempo tf);
gps obtenerEsquinaSup(celda c);
gps obtenerEsquinaInf(celda c);
nombre obtenerNombre(celda c);
bool haySalto(nombre n1, nombre n2);
bool contenidoEnCelda(tuple<tiempo, gps> medicion, celda cel);
bool haySalto(nombre n1, nombre n2);
vector<nombre> nombresViajeEnGrilla(viaje v, grilla g);
float norma(gps v);
gps sumarGPS(gps p1, gps p2);
gps restarGPS(gps p1 , gps p2);
gps multiplicarPorEscalar(gps p, float k);
tuple<tiempo, gps> generarMedicion(tiempo tiempoDelError , gps p, gps q, float v_med, gps desde);
void corregirPunto(viaje& v, int k);
int cantidadApariciones(celda c, grilla g);
bool sonGrillasIGuales(grilla g0, grilla g1);

#endif //TRANSPORTEURBANO_AUXILIARES_H
