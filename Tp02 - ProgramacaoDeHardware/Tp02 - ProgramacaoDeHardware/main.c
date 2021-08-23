/****************************************************************************
 * Copyright (C) 2021 by Programa��o de Hardware Engenharia de computa��o   *
 *                                                                          *
 * This file is part of TP02.                                                *
 *                                                                          *
 * TP02 � um software livre: voc� pode redistribu�-lo e / ou modific�-lo     *
 * sob os termos da GNU Lesser General Public License conforme publicada    *
 * pela Free Software Foundation, seja a vers�o 3 da Licen�a, ou            *
 * (� sua escolha) qualquer vers�o posterior.                               *
 *                                                                          *
 * O TP02 � distribu�do na esperan�a de que seja �til,                       *
 * mas SEM QUALQUER GARANTIA; sem mesmo a garantia impl�cita de             *
 * COMERCIALIZA��O ou ADEQUA��O A UM DETERMINADO FIM. Veja o                *
 * GNU Lesser General Public License para obter mais detalhes.              *
 *                                                                          *
 * Voc� deve ter recebido uma c�pia do GNU Lesser General Public            *
 * Licen�a junto com TP02. Caso contr�rio, consulte                          *
 *<http://www.gnu.org/licenses/>.                                           *
 * <https://www.doxygen.nl/manual/index.html>                               *
 ****************************************************************************/

 /**
 * @file TP02.h
 * @author �lvaro Gochi
 * @date 23 Aug 2020
 * @brief TP02 da mat�ria Programa��o de Hardware do 6 ciclo de engenharia de computa��o.
 *
 * O Meu programa faz a leitura de um sensor e acende um LED conforme o resultado;
 * As tags Doxygen s�o palavras precedidas por uma barra invertida @ \ 
 * ou por um s�mbolo @@.
 * @see http://inovfablab.unisanta.br
 * @see http://fabmanager.unisanta.br
 */
 
 /**
 * @brief Este Tp � o segundo TP da disciplica de Program���o de Hardware.
 *
 *  O aluno(a) dever� desenvolver um c�digo em C, em que ele dever� criar as fun��es de manipula��o de IO (usando os registros DDRx,PINx,PORTx) onde cada dever� proporcionar ao usu�rio
 *  poder escolher qualquer pino e port que ele quiser.  Em seguida, na fun��o main, o aluno dever� implementar um exemplo usando as fun�oes, e de preferencia para implementar 
 *  como se fosse um projeto (de sua escolha. EX: Sensor de janelas).A resposta dever� ser implementado cabe�alho de acordo com o exemplo deste e descri��o de cada comando usando Doxygen.
 *  A resposta dever� ser enviada para o pr�prio github do aluno, e postar os arquivos fonte na tarefa do teams, deve-se postar os arquivos em si(n�o postarem em formato zip).
 */

#include <avr/io.h>
extern char inicio();

int main(void)
{  
    while (1) 
    {
		inicio();
    }
}

