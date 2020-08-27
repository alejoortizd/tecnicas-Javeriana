#!/usr/bin/env python3


A = int(input("ingrese un numero\n"))
B = int(input("ingrese otro numero\n"))
C = int(input("ingrese un nuemero\n"))

if(A == B == C):
  print("Los numeros son iguales")
else:
  if(A > B and A > C):
    print("El mayor es " + str(A)
  else:
    if(B > A and B > C):
      print("El mayor es " + str(B))
    else:
      print("El mayor es " + str(C))
