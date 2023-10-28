.data
    prompt: .asciiz "Enter a number: "
    bit_position_prompt: .asciiz "Enter the bit position to check (0-based index): "
    result_0: .asciiz "The bit at the specified position is 0."
    result_1: .asciiz "The bit at the specified position is 1."

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

    srl $t0, $t0, $t1

    andi $t0, $t0, 1

    beqz $t0, bit_is_0
    j bit_is_1

bit_is_0:
    li $v0, 4
    la $a0, result_0
    syscall
    j done

bit_is_1:
    li $v0, 4
    la $a0, result_1
    syscall

done:
    # Exit
    li $v0, 10
    syscall
