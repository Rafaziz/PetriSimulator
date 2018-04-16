/* ************************************************************************ *
 *    ex2.c, 1.0                                                            *
 *    Programa que simula uma rede de petri.                                *
 *                                                                          *
 *    Copyright (C) 2018 by Rafael Aziz Da Silva Rocha                      *
 *                                                                          *
 *    This program is free software; you can redistribute it and/or modify  *
 *    it under the terms of the GNU General Public License as published by  *
 *    the Free Software Foundation; either version 2 of the License, or     *
 *    (at your option) any later version.                                   *
 *                                                                          *
 *    This program is distributed in the hope that it will be useful,       *
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *    GNU General Public License for more details.                          *
 *                                                                          *
 *    You should have received a copy of the GNU General Public License     *
 *    along with this program; if not, write to the                         *
 *    Free Software Foundation, Inc.,                                       *
 *    59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                          *
 *    To contact the author, please write to:                               *
 *    Rafael Aziz Da Silva Rocha <rafaelazizlvr@gmail.com>                  *
 *    Webpage: http://www.upe.br                                            *
 *    Phone: +55 (81) 99940-3183                                            *
 * ************************************************************************ *
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define MAX 40
#define SIZE 256

/*void random(char v[MAX]);*/
void readplaces(int v[SIZE], int places);
void readarcs(int a[][SIZE], int anumb);

int main (void)
{
    int places, transitions, pt_arcs, tp_arcs; /* variaveis de lugares, transicoes, arcos consumidores e produtores */
    int pt_a[SIZE][SIZE], tp_a[SIZE][SIZE]; /* vetores dos arcos consumidores e produtores */
    int p[SIZE]; /* vetor que dos lugares e quantos tokens há em cada */
    
    scanf("%d", &places);
    readplaces(p, places);
    
    scanf("%d", &transitions);
    scanf("%d", &pt_arcs);
    readarcs(pt_a, pt_arcs);
    scanf("%d", &tp_arcs);
    readarcs(tp_a, tp_arcs);

    srand(time(NULL) + getpid());



}

void readplaces(int v[SIZE], int places) /* read the number of tokens at each places */
{
    int i;
    int aux;
    for(i=0; i < places; i++)
    {
        scanf("%d", &aux);
        if(aux != '\n')
            v[i] = aux;
        else
            i--;
    }
}
void readarcs(int a[][SIZE], int anumb)
{
    int i, x, y, z;
    for(i=0; i < anumb; i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        if(x != '\n' && y != '\n' && z != '\n')
            a[x][y] = z;
        else
            i--;
    }
}
