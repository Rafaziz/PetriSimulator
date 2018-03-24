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
#define SIZE 20

/*void random(char v[MAX]);*/
int readfile(char v[MAX][SIZE]);


int main (void)
{
    char v[MAX][SIZE];
    int k; 
    k = readfile(v);
    printf("%d", k);

    srand(time(NULL) + getpid());
}

int readfile(char v[MAX][SIZE])
{
    int i;
    for(i=0; i < MAX; i++)
    {
        if(scanf("%s", &v[i]) == EOF)
            return i;
        printf("%s%d\n", v[i],i);
    }
    
}
        
