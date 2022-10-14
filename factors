#!/usr/bin/python3
import math
import sys

def max(a, b):
    return a, b if a > b else b, a

def pgcd(a, b):
    a, b = max(a, b)
    return b if a % b == 0 else pgcd(b, a % b)

def diviseur1(n):
    d = 2

    while n > d * d:
        if n % d == 0:
            return d
        d += 1
    return 1

def diviseur2(n):
    i = 0
    while n % (i * i - i + 41):
        i += 1
    return i

def diviseur3(n):
    nsqrt = int(math.sqrt(n))
    if n % 2 == 0:
        return 2
    d = 3

    while d <= nsqrt:
        if n % d == 0:
            return d
        d = d + 2
    return 1

if len(sys.argv) == 2:
    fichier = open(sys.argv[1], 'r')

    while True:
        ligne = fichier.readline()
        if not ligne:
            break
        entier = int(ligne)

        p = diviseur3(entier)
        print(f"{entier}={entier // p :d}*{p}")
