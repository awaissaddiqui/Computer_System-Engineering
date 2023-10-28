.data
	number: .asciiz "Enter a number = "
	display_positive: .asciiz "Number is Positive :"
	display_negative: .asciiz "Number is Negative !! "

.text 
.globl main

main:
	li $v0, 4
	la $a0 , number
	syscall
	
	li $v0, 5
	syscall
	move $t0, $v0
	
	bgtz $t0, check_positive
	blez $t0, check_negative
	j end
	
	
	check_positive:
	li $v0, 4
	la $a0, display_positive
	syscall
	j end
	
	check_negative:
	li $v0, 4
	la $a0, display_negative
	syscall
	j end

	li $v0, 10
	syscall
	