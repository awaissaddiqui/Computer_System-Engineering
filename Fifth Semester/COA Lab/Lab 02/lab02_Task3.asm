.text
main: 
       li $v0, 4
       la $a0, msg
       syscall
       
       li $v0, 5 
       syscall
	  move $t0, $v0
	  
       li $v0, 4
       la $a0, msg2
       syscall
	  
       li $v0, 5 
       syscall
       move $t1, $v0
	
	beq  $t0, $t1, equal
	bne  $t0, $t1, notequal
equal:
         li $v0 4
         la $a0 equali
         syscall
         li $v0 10
         syscall
notequal:
         li $v0 4
         la $a0 notequali
         syscall
         li $v0 10
         syscall
.data 
         msg: .asciiz "Enter a number 1: "
         msg2: .asciiz "Enter a number 2: "
         equali: .asciiz "The number is equal"
         notequali: .asciiz "The number is not equal"