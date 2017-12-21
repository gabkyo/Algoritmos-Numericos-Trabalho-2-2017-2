/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   problemas.h
 * Author: 2014102150
 *
 * Created on 21 de Dezembro de 2017, 11:02
 */

#ifndef PROBLEMAS_H
#define PROBLEMAS_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

    double hx(double a, double b, int n) {
        return (b - a) / (double)(n - 1);
    }

    double hy(double c, double d, int m) {
        return (d - c) / (double)(m - 1);
    }

    double xi(double a, double b, int n, int i) {
        return (a + (double)(i - 1) * hx(a, b, n));
    }

    double yi(double c, double d, int m, int j) {
        return (c + (double)(j - 1) * hy(c, d, m));
    }

    double al(double gamma, double k, double a, double b, double c, double d, int n,
            int m) {
        return gamma + 2 * k * (1 / pow(hx(a, b, n), 2) + 1 / pow(hy(c, d, m), 2));
    }

    double bl(double Bx, double k, double a, double b, int n) {
        return (-k / pow(hx(a, b, n), 2)) -Bx / (2 * hx(a, b, n));
    }

    double cl(double Bx, double k, double a, double b, int n) {
        return (-k / pow(hx(a, b, n), 2)) +Bx / (2 * hx(a, b, n));
    }

    double dl(double By, double k, double c, double d, int m) {
        return (-k / pow(hy(c, d, m), 2)) -By / (2 * hy(c, d, m));
    }

    double el(double By, double k, double c, double d, int m) {
        return (-k / pow(hy(c, d, m), 2)) +By / (2 * hy(c, d, m));
    }

    int range_valido(int i, int j, int a, int b, int c, int d) {
        if (i <= b && i >= a && j <= d && j >= c) {
            return 0;
        }
        return 1;
    }

    void problema_1(double L, double T0, int n, int m,FILE *arquivo) {
        int tamanho = n * m;
        double **matriz=malloc(sizeof(double*)*tamanho), x, y, gamma = 0, By = 0, Bx = 0, k = 1;
        
        for (int i = 0; i < tamanho; ++i) {
            matriz[i]=malloc(tamanho*sizeof(double));
            for (int j = 0; j < tamanho; ++j) {
               // x = xi(0, L, n, i+1);
                //y = yi(0, L, m, j+1);
                if (x == 0 || y == 0 || x == T0 || y == T0) {
                    //f[i] = T0;
                    if (i == j) {
                        matriz[i][j] = 1;
                    } else
                        matriz[i][j] = 0;

                } else if (i == j || range_valido(i, j, 0, L, 0, L)) { //a
                    matriz[i][j] = al(gamma, k, 0, L, 0, L, n, m);
                } else if (i == j + 1 || range_valido(i, j, 0, L, 0, L)) { //b
                    matriz[i][j] = bl(Bx, k, 0, L, n);
                } else if (i == j - 1 || range_valido(i, j, 0, L, 0, L)) { //c
                    matriz[i][j] = cl(Bx, k, 0, L, n);
                } else if (i == j + 3 || range_valido(i, j, 0, L, 0, L)) { //d
                    matriz[i][j] = dl(By, k, 0, L, m);
                } else if (i == j - 3 || range_valido(i, j, 0, L, 0, L)) { //e
                    matriz[i][j] = el(By, k, 0, L, m);
                } else {
                    matriz[i][j] = 0;
                }
                fprintf(arquivo,"%f",matriz[i][j]);
            }
        }
    }


#ifdef __cplusplus
}
#endif

#endif /* PROBLEMAS_H */

