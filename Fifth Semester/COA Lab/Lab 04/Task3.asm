.data
     num1: .word 20
     result: .word 0
.text
.globl main
main:
	la $t0, label
	jr $t0
	
label:
	lw $t1, num1
	addi $t2, $t1, 15
	sw $t2, result	
	
	li $v0, 1  
	move $a0, $t2
	syscall 
	
end:
     li $v0, 10
     syscall
