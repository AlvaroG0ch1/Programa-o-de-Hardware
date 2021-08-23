/****************************************************************************
 * Copyright (C) 2021 by Programação de Hardware Engenharia de computação   *
 *                                                                          *
 * This file is part of TP02.                                                *
 *                                                                          *
 * TP02 é um software livre: você pode redistribuí-lo e / ou modificá-lo     *
 * sob os termos da GNU Lesser General Public License conforme publicada    *
 * pela Free Software Foundation, seja a versão 3 da Licença, ou            *
 * (à sua escolha) qualquer versão posterior.                               *
 *                                                                          *
 * O TP02 é distribuído na esperança de que seja útil,                       *
 * mas SEM QUALQUER GARANTIA; sem mesmo a garantia implícita de             *
 * COMERCIALIZAÇÃO ou ADEQUAÇÃO A UM DETERMINADO FIM. Veja o                *
 * GNU Lesser General Public License para obter mais detalhes.              *
 *                                                                          *
 * Você deve ter recebido uma cópia do GNU Lesser General Public            *
 * Licença junto com TP02. Caso contrário, consulte                          *
 *<http://www.gnu.org/licenses/>.                                           *
 * <https://www.doxygen.nl/manual/index.html>                               *
 ****************************************************************************/

 /**
 * @file TP02.h
 * @author Álvaro Gochi
 * @date 23 Aug 2020
 * @brief TP02 da matéria Programação de Hardware do 6 ciclo de engenharia de computação.
 *
 * O Meu programa faz a leitura de um sensor e acende um LED conforme o resultado;
 * As tags Doxygen são palavras precedidas por uma barra invertida @ \ 
 * ou por um símbolo @@.
 * @see http://inovfablab.unisanta.br
 * @see http://fabmanager.unisanta.br
 */
 
 /**
 * @brief Este Tp é o segundo TP da disciplica de Programãção de Hardware.
 *
 *  O aluno(a) deverá desenvolver um código em C, em que ele deverá criar as funções de manipulação de IO (usando os registros DDRx,PINx,PORTx) onde cada deverá proporcionar ao usuário
 *  poder escolher qualquer pino e port que ele quiser.  Em seguida, na função main, o aluno deverá implementar um exemplo usando as funçoes, e de preferencia para implementar 
 *  como se fosse um projeto (de sua escolha. EX: Sensor de janelas).A resposta deverá ser implementado cabeçalho de acordo com o exemplo deste e descrição de cada comando usando Doxygen.
 *  A resposta deverá ser enviada para o próprio github do aluno, e postar os arquivos fonte na tarefa do teams, deve-se postar os arquivos em si(não postarem em formato zip).
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

