def diskon(harga):
    if(harga > 1800):
        return "Diskon sebesar " +  str(harga / 10) + "%"
    elif(harga >= 180):
        return "Diskon sebesar " + str(harga / 20) + "%"
    else:
        return 0
    
beli = int(input("Input Angka : "))
print(diskon(beli))
