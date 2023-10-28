.data 
     age: .asciiz "Enter your age :) "
     applyForNic : .asciiz "You can apply for CNIC"
     notApplyForNic: .asciiz "You cannot apply for CNIC "
.text
.globl main
main:

     li $v0, 4
     la $a0, age
     syscall

     li $v0, 5
     move $t0, $v0
     syscall
     
     li $t1, 18

     bgt $t0, $t1, check_NIC
     blt $t0, $t1, notEligible
 

check_NIC:
     li $v0, 4
     la $a0, applyForNic
     syscall
 
     
notEligible:
     li $v0, 4
     la $a0, notApplyForNic
     syscall
  
     li $v0 , 10
     syscall
