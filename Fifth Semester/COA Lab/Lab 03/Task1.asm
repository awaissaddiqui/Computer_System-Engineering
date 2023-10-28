.data
	input1 : .asciiz "Enter a Ist number: "
	operation : .asciiz "To perform operation (1: Add, 2: Subtract, 3: Multiply, 4: Divide :"
	input2 : .asciiz "Enter 2nd number : "
	result : .asciiz "Result :) "

.text
.globl main
main:

	li $v0, 4
	la $a0, input1
	syscall
	
	li $v0, 5
	syscall
	move $s0, $v0
	
	li $v0, 4
	la $a0, operation
	syscall
	
	li $v0, 5
	syscall
	move $s1, $v0
	
	li $v0, 4
	la $a0, input2
	syscall
	
	li $v0, 5
	syscall
	move $s2, $v0
	
	beq $s1, 1, addition
	beq $s1, 2, subtraction
	beq $s1, 3, multiplication
	beq $s1, 4, divide
	j return
addition:
	add $s3, $s0, $s2
	j finalAnswer

subtraction:
	sub $s3, $s2, $s0
	j finalAnswer
	 
multiplication:
	mul $s3, $s0, $s2
	j finalAnswer

divide:
	div $s2, $s0
	mflo $s3
	j finalAnswer
	
finalAnswer:
	li $v0, 4
	la $a0, result
	syscall
	li $v0, 1
	move $a0, $s3
	syscall

return:
	li $v0 , 10
	syscall
	
	