.data
prompt: .asciiz "Enter a number: "
bit_position_prompt: .asciiz "Enter the bit position to toggle (0-based index): "
result_msg: .asciiz "Toggled number: "

.text
main:
    li $v0, 4
    la $a0, prompt
    syscall

    li $v0, 5
    syscall
    move $t0, $v0

    li $v0, 4
    la $a0, bit_position_prompt
    syscall

    li $v0, 5
    syscall
    move $t1, $v0

    li $t2, 1
    sll $t2, $t2, $t1

    xor $t0, $t0, $t2

    li $v0, 4
    la $a0, result_msg
    syscall

    li $v0, 1
    move $a0, $t0
    syscall

    li $v0, 10
    syscall