.text

mian:
	li $v0 4
	la $a0 msg
	syscall
	
	li $v0 5
	syscall
	
	move $t0 $v0
	
	move $t1 $zero
	
repeat:
	j incriment
	
incriment:
	beq $t0, $zero, printandexit
	add $t1, $t0, $t1
	subi $t0 $t0 1
	j repeat

printandexit:
	li $v0 4
	la $a0 msg1
	syscall
	
	li $v0 1
	move $a0 $t1
	syscall
	
	li $v0 10
	syscall
.data
	msg: .asciiz "Enter a number: "
	msg1: .asciiz "The answer is: "
