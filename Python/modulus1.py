"""
Program Sederhana untuk
mengetahui bilangan genap ataupun
bilangan ganjil yang diinput oleh User
"""

input_modul = int(input("Input Angka : "))
hasil = input_modul % 2

#Output Bilangan Genap
if(hasil == 0):
  print(input_modul, " Merupakan bilangan Genap")
#Output Bilangan Ganjil
elif(hasil == 1):
  print(input_modul, " Merupakan bilangan Ganjil")
