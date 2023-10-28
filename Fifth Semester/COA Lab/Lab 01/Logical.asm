.text
.globl main

main:
     li $t0, 5
     li $t1, 3

     and $t2,$t0,$t1
     or $t3, $t0, $t1 

     li $v0, 1
     move $a0, $t2
     syscall
    
     li $v0, 1
     move $a0, $t3
     syscall


.data 
result : .space 4
result2 : .space 4