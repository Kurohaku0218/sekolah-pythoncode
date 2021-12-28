#Contoh Tipe Data List sederhana pada Python
mapel = ['Bahasa Jepang', 'Pemrograman Dasar', 'Sejarah Indonesia']
nama = ['Adam', 'Kurohaku', 'Shirohaku']
umur = [16, 15, 14]

#Mengakses nilai pada List
print(mapel[:1]) #Output yang keluar "Bahasa Jepang" (Urutan indeks dimulai dari 0)
print(nama[0:2]) #Output yang keluar 'Adam', 'Kurohaku'
print(str(umur[:1])) #Output yang keluar 16

#Update / mengisi / atau mengubah nilai pada list
nama[0] = "Adamura"
print(nama)

#Menghapus nilai pada list
del nama[2]
print(nama)
