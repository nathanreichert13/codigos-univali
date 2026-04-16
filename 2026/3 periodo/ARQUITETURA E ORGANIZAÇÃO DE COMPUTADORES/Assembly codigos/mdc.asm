.data
msg1: .asciz "Digite o primeiro valor: "
msg2: .asciz "Digite o segundo valor: "
msg3: .asciz "MDC = "

.text
.globl main

main:
    li a7, 4
    la a0, msg1
    ecall

    li a7, 5
    ecall
    mv t0, a0   

    li a7, 4
    la a0, msg2
    ecall

    li a7, 5
    ecall
    mv t1, a0   

    mv a0, t0
    mv a1, t1

    jal ra, mdc

    mv t2, a0

    li a7, 4
    la a0, msg3
    ecall

    mv a0, t2
    li a7, 1
    ecall

    li a7, 10
    ecall



mdc:
loop:
    beq a0, a1, fim      

    blt a1, a0, maior  

    sub a1, a1, a0      
    j loop

maior:
    sub a0, a0, a1       
    j loop

fim:
    ret