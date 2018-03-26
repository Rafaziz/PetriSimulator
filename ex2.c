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
void readplaces(char v[], int places);


int main (void)
{
    int places = 0;
    char read[SIZE]; 
    scanf("%s", read);
    places = atoi(read);
    printf("lugares: %d\n", places);
    char v[places];
    readplaces(v, places);
    srand(time(NULL) + getpid());


}

void readplaces(char v[], int places)
{
    int i;
    char aux;
    for(i=0; i < places; i++)
    {
        scanf("%c", &aux);
        if(aux != '\n')
        {
            v[i] = aux;
            printf("caracter: %c i vale = %d\n", aux,i);
        }
        else
            i--;
    }
}
        
