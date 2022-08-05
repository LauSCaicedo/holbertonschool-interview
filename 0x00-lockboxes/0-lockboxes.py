#!/usr/bin/python3

""" You have n number of locked boxes in
front of you.
Each box is numbered sequentially
from 0 to n - 1 and each box may
contain keys to the other boxes.
"""


def canUnlockAll(boxes):
    """ Method that determines if all the boxes can be opened. """
    unlock = [0]
    for id, box in enumerate(boxes):
        for x in box:
            if x not in unlock and x != id and x < len(boxes):
                unlock.append(x)
    if len(unlock) == len(boxes):
        return True
    return False
