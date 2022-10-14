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
    _n = n if n >= 0 else -n
    if _n % 2 == 0:
        return 2
    nsqrt = int(math.sqrt(_n))
    if n % nsqrt == 0:
        return nsqrt
    d = 3
    d2 = nsqrt if nsqrt % 2 == 1 else nsqrt - 2

    while d <= nsqrt:
        if _n % d == 0:
            return d
        if _n % d2 == 0:
            return d2
        d = d + 2
        d2 = d2 - 2
    return 1

if len(sys.argv) == 2:
    fichier = open(sys.argv[1], 'r')

    while True:
        ligne = fichier.readline()
        if not ligne:
            break
        entier = int(ligne)
        positif = True if entier < 0 else False

        p = diviseur3(entier)
        print(f"{entier}={entier // p :d}*{p}")
