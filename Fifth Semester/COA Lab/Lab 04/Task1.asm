.data
     num: .word 20
.text
.globl main
main:
     lw $t0, num
     li $v0, 1
     
     addi $t1, $t0, 10
     
     move $a0, $t1
     syscall

end:
     li $v0, 10
     syscall
