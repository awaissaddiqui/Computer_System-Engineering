.text
.globl main
main:
    li $v0, 4
    la $a0, prompt
    syscall

    li $v0, 5
    syscall

    move $t1, $v0
    move $t8, $t1

    li $t2, 1
    li $t3, 1
    li $t4, 1

    li $t7, 0

    la $t5, fibonacciArray
    la $t9, fibonacciArray

fibonacciLoop:
    beq $t8, $zero, printAndExit

    move $t2, $t3
    move $t3, $t4

    add $t4, $t2, $t3

    addi $t8, $t8, -1

    sw $t2 ($t5)

    addi $t5, $t5, 4

    j fibonacciLoop

printAndExit:
    blt $t7, $t1, printFibonacciNumbers

    li $v0, 10
    syscall

printFibonacciNumbers:
    addi $t7, $t7, 1

    lw $t6 ($t9)
    
    li $v0, 1
    move $a0, $t6
    syscall


    li $v0, 4
    la $a0, space
    syscall
    
    addi $t9, $t9, 4
    
    j printAndExit
    
.data
       prompt: .asciiz "Enter a Number: "
       space: .asciiz " "
       fibonacciArray: .word 0