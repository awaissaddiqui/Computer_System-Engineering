.data
    prompt: .asciiz "Enter a number: "
    even_msg: .asciiz "The number is even."
    odd_msg: .asciiz "The number is odd."

.text
main:
    li $v0, 4
    la $a0, prompt
    syscall

    li $v0, 5
    syscall
    move $t0, $v0

    andi $t1, $t0, 1  # Use AND with 1 to check the least significant bit (LSB)

    beqz $t1, number_is_even
    j number_is_odd

number_is_even:
    li $v0, 4
    la $a0, even_msg
    syscall
    j done

number_is_odd:
    li $v0, 4
    la $a0, odd_msg
    syscall

done:
    li $v0, 10
    syscall