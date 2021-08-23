.global inicio

inicio:
	.include "m328pdef.inc"
	.nolist
	.list
	.org 0x0000
	.def on = r20
	.def off = r21
	.def adclow = r18
	.def adchigh = r19
	rjmp start


 /**
 * Coloca os pinos b como output
 */

start:
	ldi on, 0xff
	ldi off, 0x00
	out ddrb, on 		
	call configure_adc

 /**
 * Ler o ADCL antes do ADCH por ser o low byte do adc
 * Se o ADCH > 0x80 desliga o led, senão liga o led
 */

loop:
    call read_adc 
    call wait_adc
    lds adclow, ADCL 		
    lds adchigh, ADCH
	cpi adchigh, 0x02 
	brsh led_off		
	out portb, on		
	rjmp loop

led_off:
	out portb, off
	rjmp loop

 /**
 * Os ultimos 3 bits seleciona o canal ADC0 como pino de entrada
 */

configure_adc:
    ldi r22, 0b01000000  
    sts ADMUX, r22

/**
 * @ Habiliita o ADC e seleciona o modo "Single Conversion
 * @ Configura o fator de divisão da tensão para 32
 */

    ldi r22, 0b10000101  
    sts ADCSRA, r22       
    ret

/**
 * Inicia de fato a conversão ADC
 */

read_adc:
    ldi r22, 0b01000000   
    lds r23, ADCSRA
    or  r23, r22
    sts ADCSRA, r23
    ret

/**
 * Fazemos uma repetição checando o quarto bit
 * Se o quarto bit for 1 ele sai do loop
 * o 4 bit significa que acabou a conversão ADC
 */

wait_adc:
    lds r23, ADCSRA       
    sbrs r23, 4           
    jmp wait_adc          

/**
 * Configura a flag novamente para o hardware limpá-la
 */

    ldi r22, 0b00010000   
    lds r23, ADCSRA 
    or  r23, r22
    sts ADCSRA, r23
    ret