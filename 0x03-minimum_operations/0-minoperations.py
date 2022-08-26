#!/usr/bin/python3
""" Given a number n, this is a method
    that calculates the fewest number
    of operations needed to result in
    exactly n H characters in the file.
    """


def minOperations(n):
    if n == 0 or type(n) is not int:
        return 0
    totalH = 1
    hS = 0
    copyA = 0
    paste = 0
    operations = 0

    while totalH < n:
        if n % totalH == 0:
            copyA += 1
            hS = totalH
        paste += 1
        totalH += hS
        operations = copyA + paste
    return operations
