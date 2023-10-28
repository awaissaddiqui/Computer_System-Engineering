.data
	input: .asciiz "Enter a number = "
	result: .asciiz "Result = "

.text
.globl main

main:
	li $v0, 4
	la $a0, input
	syscall
	
	li $v0 , 5
	syscall
	move $t0, $v0

	div $t0, $t0, 10
	mfhi $t2,
	
	li $v0, 4
	la $a0, result
	syscall
	
	li $v0, 1
	move $a0, $t2
	syscall
	
	li $v0, 10
	syscall	