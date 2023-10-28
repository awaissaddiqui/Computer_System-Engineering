.data
	value:  .word 10     
	result: .word 0

.text
main:
 	 lw $t0, value

   	 sll $t1, $t0, 1  

  	  sw $t1, result

  	  li $v0, 1         
  	  lw $a0, result    
  	  syscall
	
 	   li $v0, 10 
 	   syscall
