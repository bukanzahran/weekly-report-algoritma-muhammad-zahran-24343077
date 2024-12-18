<div>
<h2 align="center"> 🦊 ~ Hellow! Welcome ~ 🦊 </h2>
  <div align="center">

<h3> <img src="https://emojis.slackmojis.com/emojis/images/1621024394/39092/cat-roll.gif?1621024394" width="28" /> <a href="https://github.com/xrkffgg/xrkffgg/blob/master/quotations.md"> 

About Me</a>
### <div align="center">I'm Muhammad Zahran , with nim 24343077 👨‍💻  🚀</div>  

-  <img alt="GIF" src="https://github.com/SP-XD/SP-XD/blob/main/images/Developer.gif" width="25" /> &nbsp; I’m currently learning working on always expanding my knowledge and contributing to open-source communities. 
- <img src="https://github.com/SP-XD/SP-XD/blob/main/images/hyperkitty.gif?raw=true" width="20" />&nbsp;&nbsp;&nbsp; I'm currently learning leangguage programmer C. <br>
- <img src="https://github.com/SP-XD/SP-XD/blob/main/images/message.gif?raw=true" width="25" />&nbsp;&nbsp; Course materials collection of Programming Algorithms. <br>
 
<br/> 
# Repository ini mengandung semua Pelajaran dari materi mata kuliah Agloritma Pemrograman dengan Pak Randi Proska Sandra S.Pd, M.Sc selaku dosen pengampu mata kuliah ini.




## Penjelasan Modul Yang Ada di Mata Kuliah Algoritma Pemrogramman

## Job Sheet 1 - _Algoritma, Pemrogramman dan IDE_

1. ***Algoritma***
Algoritma adalah serangkaian langkah logis yang dirancang untuk menyelesaikan suatu masalah secara sistematis. Karakteristik utama algoritma meliputi:
**-Terbatas:** Langkah-langkah harus berakhir setelah waktu tertentu
**-Definitf:** Setiap langkah memiliki intruksi yang jelas dan tidak ambigu
**-Masukan:** Memiliki data awal atau input sebagai titik awal
**-Keluaran:** Menghasilkan hasil atau solusi sebagai output
**-Efektif:** Dapat dijalankan dengan sumber daya yang tersedia
**-Terstruktur:** Disusun dengan pola yang logis dan mudah dipahami

2. ***PEMROGRAMAN***
Pemrograman adalah aktivitas untuk membuat program komputer, yang melibatkan penulisan kode, pengujian, serta perbaikan agar program berfungsi sebagaimana mestinya.
**Perbedaan Coding dan Programming**
**-Coding:** Fokus pada proses menulis kode sesuai aturan bahasa pemrograman
**-Programming:** Meliputi analisis, desain, pengembangan algoritma, hingga penerapan solusi dalam membangun program

3. ***Bahasa Pemrogramman C***
Bahasa pemrograman adalah himpunan aturan sintax dan semantik yang digunakan untuk membuat program komputer
-**Bahasa C** adalah bahasa pemrograman general-purpose yang mendukung pemrograman terstruktur dan rekursif
-Dikembangkan oleh Dennis Ritchie (1969-1973) untuk pengembangan sistem operasi linux
-**Keunggulan Bahasa C**
   - Mudah dipelajari oleh pemula
   - Bersifat portabel, fleksibel, dan dapat digunakan diberbagai platform
   - Mendukung konsep pemrograman terstruktur
-**Versi Bahasa C:** ANSI C (C89/C90), C99, C11, C18

4. ***IDE (Integrated Development Environment)
IDE adalah perangkat lunak yang memadukan teks editor, compiler, dan debugger dalam satu aplikasi, sehingga memudahkan proses pengembangan program
**Contoh IDE**
- DevC++
- Visual Studio Code
- Code::Blocks
- NetBeans

**Latihan Pemrograman pada Job Sheet ini**
1. **Pengertian Dasar**
   - **Algoritma:** Langkah-langkah terstruktur untuk menyelesaikan suatu masalah
   - **Pemrograman:** Aktivitas menulis dan memelihara kode untuk menghasilkan program
   - **Program:** Hasil penulisan kode yang berisi serangkaian intruksi
   - **Programmer:** Orang yang menciptakan program atau aplikasi menggunakan bahasa pemrograman
   - **IDE:** Software untuk menulis, menguji, dan menjalankan program
  
2. **Program "Hello World!"**
Program sederhana untuk menampilkan teks "Hello World!" sebagai pengenalan struktur dan sintax dasar bahasa pemrograman

**Contoh Program**
```c
#include <stdio.h>
int main(){
  printf("Hello World!");
  return0;
}
```
**Job Sheet 1 memberikan pembahasan lengkap untuk setiap topik dalam modul, dari konsep dasar algoritma hingga pemrograman menggunakan bahasa C dengan IDE**




### Joob Sheet 2 - _Pemrograman Dasar C_
**Pokok Materi**
1. **Struktur Dasar Program C**
   
   Ada dua stuktur program C:
   - Bagian include: `#include <stdio.h>`
   - Blok fungsi main : berisi statement.
     
   Syntax bahasa C:
   - **Include:** kode #include berfungsi mengimpor fungsi-fungsi yang sudah didefinisikan pada header file yang berisi definisi fungsi yang sudah dibuat untuk mengimpor file header (seperti `stdio.h`) yang menyediakan fungsi tambahan seperti `printf`.
   - **Header file:** adalah file yang berisi definisi fungsi yang sudah dibuat.
   - **Main Function:** fungsi utama yang wajib ada dalam program, fungsi ini akan dieksekusi pertama kali saat program dijalankan. Fungsi ini ada dua: mengembalikan nilai setelah dieksekusi (`int main()`) atau tidak mengembalikan nilai apapun (`void main()`).
   - **Statements:** perintah- perintah dalam program yang harus diakhiri dengan tanda semikolon `;`.
   - **Semicolon:** tanda yang digunakan untuk menandakan berakhirnya suatu perintah.
   - **Identifier:** nama yang digunakan untuk mengidentifikasi variabel, fungsi, atau semua item yang didefinisikan oleh programmer.
   - **Comments:** Digunakan untuk menambahkan catatan dalam kode tanpa memengaruhi eksekusi.
   - **Whitespace:** Spasi, tab, atau baris baru yang membantu keterbacaan kode.

2. **Proses Input dan Output**
   - **Input:** data yang dimasukan ke program biasanya diambil dari perangakat inputan seperti keyboard.
     Ada dua fungsi  untuk menampilkan input
     - **`scanf`:** Digunakan mengambil input dari pengguna, menggunakan format sesuai dengan tipe data yang ingin diambil (misalnya `%d` untuk integer).
     - **`gets` dan `fgets`:** Untuk menerima input string, namun `gets` tidak direkomendasikan karena rawan error.
   - **Proses:** adalah langkah-langkah yang harus dilakukan program untuk menghasilkan output.
   - **Output:**
     Ada dua fungsi untuk menampilkan output:
     - **`printf`:** Fungsi utama untuk mencetak teks atau variabel ke layar dalam bentuk teks (string).
     - **`puts`:** Fungsi yang mencetak teks atau variabel tanpa memerlukan format(otomatis menambahkan baris baru).

Latihan pada joob sheet ini, yaitu:

1. **Program sambutan pengguna:** program yang berfungsi untuk meminta input nama lengkap dari pengguna dan kemudian menampilkan pesan sambutan menggunakan nama tersebut.Program ini bertujuan untuk berinteraksi dengan penggunanya.
2. **Program kalkulator nilai mahasiswa:** program ini untuk menghitung nilai akhir seorang mahasiswa berdasarkan input dari beberapa komponen nilai, yaitu Nilai Praktikum, Nilai UTS (Ujian Tengah Semester), dan Nilai UAS (Ujian Akhir Semester). Program ini akan meminta input berupa Nama, NIM, Program Studi, Fakultas, dan nilai-nilai terkait dan kemudian menghitung Nilai Akhir dengan formula yang telah diberikan.
3. **Program menghitung luas dari segitiga:** program sederhana yang memungkinkan pengguna untuk memasukkan nilai alas dan tinggi segitiga, kemudian menghitung luasnya berdasarkan rumus: `Luas Segitiga=12×Alas×Tinggi`. Dimana pada program ini sudah diketahui bahwa panjang alas segitiga adalah 8 cm dan tinggi segitiga adalah 5 cm, maka dapat langsung menghitung luas segitiga dengan rumus.
4. **Program menghitung luas persegi panjang:** program ini merupakan program yang sangat sederhana. Yang memungkinkan kita untuk menghitung luas persegi panjang dengan rumus:
`Luas Persegi Panjang=Panjang×Lebar`. Dimana sudah diketahui panjang = 10 cm dan lebar = 5 cm, sehingga langsung menggunakan rumus di atas untuk menghitung luasnya.



### MODUL 3 Variabel, Konstanta Tipe Data

### LATIHAN 1
Program yang diberikan adalah program dalam bahasa C yang melakukan konversi dari Rupiah (IDR) ke Dolar AS (USD) berdasarkan kurs yang ditentukan. Berikut adalah penjelasan langkah demi langkah tentang cara kerja program ini:

### 1. Deklarasi Variabel
Program dimulai dengan mendeklarasikan beberapa variabel:

const float dolar = 14250; // kurs saat ini: 1 dolar = 14250 rupiah

float rupiah;

float rupiahdolar;

dolar adalah sebuah konstanta yang menyimpan nilai kurs saat ini, yaitu 1 USD = 14250 IDR. Konstanta ini tidak bisa diubah selama program berjalan karena dideklarasikan dengan kata kunci const.

rupiah adalah variabel bertipe float yang akan digunakan untuk menyimpan jumlah Rupiah yang dimasukkan oleh pengguna.

rupiahdolar adalah variabel bertipe float yang akan digunakan untuk menyimpan hasil konversi dari Rupiah ke Dolar AS.

### 2. Input Pengguna
Program kemudian meminta pengguna untuk memasukkan jumlah Rupiah yang ingin mereka tukar menjadi Dolar. Ini dilakukan dengan kode berikut:

printf("masukkan jumlah rupiah yang ingin ditukar : ");

scanf("%f", &rupiah);

printf digunakan untuk menampilkan pesan yang meminta pengguna untuk memasukkan jumlah Rupiah.

scanf digunakan untuk membaca input yang diberikan oleh pengguna dan menyimpannya dalam variabel rupiah. %f menunjukkan bahwa input yang dimasukkan adalah angka desimal (float).

### 3. Menghitung Konversi
Setelah mendapatkan jumlah Rupiah dari pengguna, program melakukan konversi ke Dolar AS menggunakan rumus:

rupiahdolar = rupiah / dolar;

Nilai rupiah yang dimasukkan oleh pengguna dibagi dengan nilai kurs dolar (14250). Hasilnya akan disimpan dalam variabel rupiahdolar, yang menunjukkan jumlah Dolar AS yang setara dengan jumlah Rupiah yang dimasukkan.

### 4. Menampilkan Hasil
Setelah konversi selesai, program menampilkan hasilnya menggunakan fungsi printf:

printf("jumlah dolar yang akan anda dapatkan: %.2f USD\n", rupiahdolar);

printf digunakan untuk menampilkan hasil konversi dalam format yang lebih mudah dibaca oleh pengguna.

%.2f digunakan untuk mencetak angka rupiahdolar dengan dua angka di belakang koma.

Program akan mencetak jumlah Dolar yang setara dengan jumlah Rupiah yang dimasukkan.

### 5. Akhir Program
Program diakhiri dengan perintah:

return 0;
Perintah ini menunjukkan bahwa program telah berhasil dijalankan tanpa kesalahan dan selesai dengan sukses.

### LATIHAN 2
Program yang diberikan adalah program dalam bahasa C yang mengonversi suhu dari Celsius ke tiga satuan suhu lainnya, yaitu Kelvin, Fahrenheit, dan Reamur. Berikut adalah penjelasan langkah demi langkah tentang bagaimana program ini bekerja:

### 1. Deklarasi Variabel
Program dimulai dengan mendeklarasikan beberapa variabel bertipe float:

float c; 

float kelvin, fahrenheit, reamur;

c adalah variabel yang menyimpan suhu dalam Celsius yang dimasukkan oleh pengguna.

kelvin, fahrenheit, dan reamur adalah variabel yang akan digunakan untuk menyimpan hasil konversi suhu ke dalam satuan Kelvin, Fahrenheit, dan Reamur.

### 2. Input Suhu dalam Celsius
Program meminta pengguna untuk memasukkan suhu dalam satuan Celsius dengan menggunakan fungsi scanf:

printf("Input suhu dalam Celsius: ");

scanf("%f", &c);

printf menampilkan pesan untuk meminta pengguna memasukkan nilai suhu dalam Celsius.

scanf digunakan untuk membaca input suhu dalam Celsius yang dimasukkan oleh pengguna, dan menyimpannya dalam variabel c. %f digunakan untuk membaca angka bertipe float.

### 3. Konversi Suhu
Setelah mendapatkan suhu dalam Celsius, program melakukan konversi suhu tersebut ke dalam tiga satuan suhu lainnya: Kelvin, Fahrenheit, dan Reamur.

Konversi ke Kelvin:

kelvin = c + 273.15;

Nilai suhu dalam Celsius (yang disimpan dalam c) ditambah dengan 273.15 untuk menghasilkan suhu dalam Kelvin.

Konversi ke Fahrenheit:

fahrenheit = (c * 1.8) + 32;

Rumus untuk mengonversi Celsius ke Fahrenheit adalah:

Fahrenheit=(Celsius×1.8)+32

Nilai suhu dalam Celsius dikalikan dengan 1.8, kemudian ditambahkan dengan 32 untuk menghasilkan suhu dalam Fahrenheit.

Konversi ke Reamur:

reamur = c * 0.8;

Rumus untuk mengonversi Celsius ke Reamur adalah:

Reamur=Celsius×0.8

Nilai suhu dalam Celsius dikalikan dengan 0.8 untuk menghasilkan suhu dalam Reamur.

### 4. Menampilkan Hasil Konversi
Setelah melakukan konversi, program menampilkan hasil konversi suhu ke dalam tiga satuan tersebut (Kelvin, Fahrenheit, dan Reamur) menggunakan fungsi printf:


printf("Suhu dalam Kelvin: %.2f\n", kelvin);

printf("Suhu dalam Fahrenheit: %.2f\n", fahrenheit);

printf("Suhu dalam Reamur: %.2f\n", reamur);

printf digunakan untuk menampilkan hasil konversi suhu ke layar.

%.2f digunakan untuk menampilkan angka dengan dua angka di belakang koma (desimal).

kelvin, fahrenheit, dan reamur akan digantikan dengan nilai suhu yang sesuai setelah konversi dilakukan.

### 5. Akhir Program
Program diakhiri dengan perintah:

return 0;
Perintah ini menandakan bahwa program telah selesai dijalankan dan berakhir dengan sukses.

### LATIHAN 3
Program yang diberikan adalah program dalam bahasa C yang menghitung volume dan luas permukaan dari sebuah bola, berdasarkan diameter yang diberikan. Berikut adalah penjelasan langkah demi langkah mengenai cara kerja program ini:

### 1. Deklarasi Variabel
Program dimulai dengan mendeklarasikan beberapa variabel bertipe float dan konstanta:

float diameter = 12;

const float phi = 3.14;

float r = diameter * 0.5;

float volume = 4.0/3.0 * phi * r * r * r;

float luas = 4.0 * phi * r * r;

diameter: Variabel ini menyimpan nilai diameter bola. Dalam program ini, nilai diameter ditetapkan sebesar 12.

phi: Ini adalah konstanta yang menyimpan nilai perkiraan π (Pi), yang dalam program ini diberi nilai 3.14.

r: Variabel ini menyimpan nilai jari-jari bola yang dihitung dari diameter, dengan rumus 

𝑟
=
diameter
2
r= 
2
diameter
​
 . Di sini, nilai diameter 12 dibagi 2, sehingga jari-jari 
𝑟
r menjadi 6.
​
 ×π×r 
3
 
luas: Variabel ini menyimpan hasil perhitungan luas permukaan bola yang dihitung dengan rumus luas permukaan bola:

Luas=4×π×r 
2
 
### 2. Perhitungan Volume Bola
Setelah mendeklarasikan variabel-variabel tersebut, program menghitung volume bola dengan rumus:

volume = 4.0/3.0 * phi * r * r * r;

Rumus untuk volume bola adalah 
4
3
×
𝜋
×
𝑟
3
3
4
​
 ×π×r 
3
 , di mana 
𝑟

r adalah jari-jari bola.

Dalam program ini, phi adalah nilai π, dan r adalah jari-jari yang sebelumnya dihitung sebagai 6. Sehingga volume bola menjadi:
​
 ×3.14×216=904.32
 
Volume bola yang dihitung adalah 904.32.

### 3. Perhitungan Luas Permukaan Bola
Selanjutnya, program menghitung luas permukaan bola dengan rumus:

luas = 4.0 * phi * r * r;

Rumus untuk luas permukaan bola adalah 
4
×
𝜋
×
𝑟
2
4×π×r 
2
 , di mana 
𝑟
r adalah jari-jari bola.

Dengan nilai r sebesar 6, perhitungan luas permukaan bola menjadi:

Luas=4×3.14×6 
2
 =4×3.14×36=452.16
 
Luas permukaan bola yang dihitung adalah 452.16.

### 4. Menampilkan Hasil Perhitungan
Setelah melakukan perhitungan volume dan luas permukaan bola, program menampilkan hasilnya menggunakan fungsi printf:

printf("volume: %.2f\n", volume);

printf("luas; %.2f\n", luas);

printf("volume: %.2f\n", volume); mencetak volume bola dengan dua angka di belakang koma.

printf("luas; %.2f\n", luas); mencetak luas permukaan bola juga dengan dua angka di belakang koma.

Output yang ditampilkan ke layar adalah:

volume: 904.32

luas; 452.16

### 5. Akhir Program
Program diakhiri dengan perintah:

return 0;
Perintah ini menunjukkan bahwa program telah selesai dieksekusi dengan sukses tanpa kesalahan.

### MODUL 4 Operator

### LATIHAN 1

### Penjelasan Program:

Deklarasi Variabel:

detik: Menyimpan input jumlah waktu dalam detik.

jam: Menyimpan hasil konversi dari detik ke jam.

menit: Menyimpan hasil konversi dari detik ke menit.

sisadetik: Menyimpan sisa detik setelah konversi ke menit.

### Input Pengguna:

Program meminta pengguna untuk memasukkan jumlah waktu dalam detik melalui perintah scanf.
Proses Konversi:

jam = detik / 3700;

Baris ini bertujuan untuk mengonversi detik ke jam. Namun, ini salah karena 1 jam seharusnya setara dengan 3600 detik, bukan 3700. Jadi, seharusnya ditulis:

Program mencetak hasil konversi waktu dalam format jam, menit, dan detik menggunakan printf.

### LATIHAN 2
### 1. Deklarasi Variabel:

namapembeli[100]: Array karakter untuk menyimpan nama pembeli (dengan panjang maksimal 100 karakter).

namabarang[100]: Array karakter untuk menyimpan nama barang (dengan panjang maksimal 100 karakter).

hargabarang: Variabel integer untuk menyimpan harga satuan dari barang yang dibeli.

jumlahbarang: Variabel integer untuk menyimpan jumlah barang yang dibeli.

hargatotal: Variabel integer untuk menyimpan hasil perhitungan harga total (harga barang dikali jumlah barang).

### 2. Input Data dari Pengguna:

Program pertama-tama meminta pengguna untuk memasukkan nama pembeli menggunakan scanf("%s", namapembeli);. Fungsi scanf digunakan untuk membaca string, tetapi perlu diingat bahwa ini akan membaca kata pertama yang dimasukkan (tidak ada spasi), jadi jika nama pembeli mengandung spasi, hanya bagian pertama yang akan terbaca.

Kemudian, program meminta pengguna untuk memasukkan nama barang dengan cara yang sama (scanf("%s", namabarang);).

Setelah itu, program meminta harga barang dalam bentuk integer dengan scanf("%d", &hargabarang);.

Selanjutnya, program meminta jumlah barang yang dibeli dalam bentuk integer dengan scanf("%d", &jumlahbarang);.

### 3. Perhitungan Harga Total:

Setelah mendapatkan harga barang dan jumlah barang, program menghitung total harga barang dengan rumus:

hargatotal = hargabarang * jumlahbarang;

Ini mengalikan harga satuan barang (hargabarang) dengan jumlah barang (jumlahbarang) untuk mendapatkan total harga (hargatotal).

### 4. Menampilkan Hasil:
Program kemudian menampilkan informasi pembelian yang sudah dimasukkan oleh pengguna, yaitu:

Nama pembeli

Nama barang

Harga barang

Jumlah barang

Harga total pembelian

### LATIHAN 3

### 1. Deklarasi Variabel:

nilaiPresensi: Menyimpan nilai presensi (kehadiran) mahasiswa. Dalam program ini, nilainya di-set sebesar 85.

nilaiPraktek: Menyimpan nilai praktek mahasiswa. Dalam program ini, nilainya di-set sebesar 65.

nilaiUTS: Menyimpan nilai UTS mahasiswa. Dalam program ini, nilainya di-set sebesar 80.

nilaiUAS: Menyimpan nilai UAS mahasiswa. Dalam program ini, nilainya di-set sebesar 75.

bobotPresensi: Bobot untuk komponen presensi, yaitu 10% dari nilai akhir. Dalam program ini, bobotnya adalah 0.1.

bobotPraktek: Bobot untuk komponen praktek, yaitu 20% dari nilai akhir. Dalam program ini, bobotnya adalah 0.2.

bobotUTS: Bobot untuk komponen UTS, yaitu 30% dari nilai akhir. Dalam program ini, bobotnya adalah 0.3.

bobotUAS: Bobot untuk komponen UAS, yaitu 40% dari nilai akhir. Dalam program ini, bobotnya adalah 0.4.

### 2. Perhitungan Nilai Akhir:
Nilai akhir dihitung dengan mengalikan setiap nilai komponen penilaian (presensi, praktek, UTS, dan UAS) dengan bobot masing-masing dan menjumlahkan hasilnya.

Formula yang digunakan adalah:

nilaiAkhir = (nilaiPresensi * bobotPresensi) +
             (nilaiPraktek * bobotPraktek) +
             (nilaiUTS * bobotUTS) +
             (nilaiUAS * bobotUAS);
             
Penjelasannya:


nilaiPresensi * bobotPresensi: Menghitung kontribusi nilai presensi terhadap nilai akhir (85 * 0.1 = 8.5).

nilaiPraktek * bobotPraktek: Menghitung kontribusi nilai praktek terhadap nilai akhir (65 * 0.2 = 13.0).

nilaiUTS * bobotUTS: Menghitung kontribusi nilai UTS terhadap nilai akhir (80 * 0.3 = 24.0).

nilaiUAS * bobotUAS: Menghitung kontribusi nilai UAS terhadap nilai akhir (75 * 0.4 = 30.0).

Semua hasil perkalian ini dijumlahkan untuk mendapatkan nilai akhir:

nilaiAkhir = 8.5 + 13.0 + 24.0 + 30.0 = 75.5

### 3. Menampilkan Nilai Akhir:

Program kemudian mencetak nilai akhir yang telah dihitung ke layar dengan format dua angka di belakang koma menggunakan printf:

printf("Nilai Akhir: %.2f\n", nilaiAkhir);

%.2f di sini digunakan untuk menampilkan nilai dalam format desimal dengan dua angka di belakang koma. Misalnya, jika hasil perhitungan nilai akhir adalah 75.5, output yang ditampilkan adalah:

Nilai Akhir: 75.50

### 4. Output Program:

Berdasarkan perhitungan yang dilakukan di atas, nilai akhir yang dihitung adalah 75.5. Maka, output yang akan muncul di layar adalah:

Nilai Akhir: 75.50

### LATIHAN 4

### 1. Deklarasi Variabel:

durasi: Variabel ini menyimpan durasi waktu menonton film dalam jam yang dimasukkan oleh pengguna.

tarif_per_jam: Tarif untuk menonton film selama satu jam pertama. Dalam program ini, tarifnya adalah Rp 15.000 per jam.

tarif_berikutnya: Tarif untuk jam-jam berikutnya setelah jam pertama. Tarifnya adalah setengah dari tarif per jam (Rp 15.000 / 2 = Rp 7.500).

total_bayar: Variabel ini menyimpan total biaya yang harus dibayar oleh pengguna berdasarkan durasi yang dimasukkan.

### 2. Input Durasi Menonton Film:

Program meminta pengguna untuk memasukkan durasi waktu menonton film dalam satuan jam. Ini dilakukan dengan menggunakan perintah scanf("%d", &durasi);.

Pengguna hanya diminta untuk memasukkan durasi dalam jam sebagai bilangan bulat.

### 3. Perhitungan Biaya Berdasarkan Durasi:

Jika durasi menonton film hanya 1 jam (yaitu durasi == 1), maka total biaya yang harus dibayar adalah tarif untuk 1 jam pertama (Rp 15.000):

if (durasi == 1) {
    total_bayar = tarif_per_jam;
}

Jika durasi lebih dari 1 jam (yaitu durasi > 1), biaya dihitung dengan cara:

1 jam pertama dihitung dengan tarif per jam (Rp 15.000).

Setiap jam berikutnya dihitung dengan tarif yang lebih rendah, yaitu setengah dari tarif per jam (Rp 7.500).

Perhitungan total biaya untuk durasi lebih dari 1 jam adalah:

total_bayar = tarif_per_jam + (durasi - 1) * tarif_berikutnya;

Di sini:

tarif_per_jam adalah biaya untuk jam pertama.

(durasi - 1) adalah jumlah jam setelah jam pertama, dan setiap jam ini dikenakan tarif_berikutnya.

### 4. Menampilkan Total Biaya:

Setelah menghitung total biaya, program menampilkan hasilnya kepada pengguna menggunakan printf. Format output yang ditampilkan adalah:

printf("Total yang harus dibayar untuk durasi %d jam adalah Rp %d\n", durasi, total_bayar);

Ini menampilkan durasi menonton film (dalam jam) dan total biaya yang harus dibayar oleh pengguna.

### MODUL 5  Flow Control (Decision Making)

### LATIHAN 1

### 1. Deklarasi Variabel:

pilihan: Variabel ini menyimpan pilihan operasi matematika yang dimasukkan oleh pengguna (1 sampai 5).

angka1 dan angka2: Variabel ini menyimpan dua angka yang akan dihitung.

hasil: Variabel ini menyimpan hasil perhitungan yang akan ditampilkan kepada pengguna.

### 2. Menampilkan Menu Pilihan:

Program pertama-tama menampilkan menu pilihan operasi matematika dengan cara:

printf("=== Kalkulator Sederhana ===\n");

printf("1. Penjumlahan\n");

printf("2. Pengurangan\n");

printf("3. Perkalian\n");

printf("4. Pembagian\n");

printf("5. Hasil Bagi (Pembagian Bulat)\n");

printf("Pilih operasi (1-5): ");

Menu ini memberikan pilihan kepada pengguna untuk memilih operasi matematika yang diinginkan (1 hingga 5).

### 3. Input Pilihan Operasi:

Program kemudian meminta pengguna untuk memilih operasi dengan scanf("%d", &pilihan); dan menyimpan pilihan tersebut dalam variabel pilihan.

### 4. Input Angka:

Setelah memilih operasi, program meminta pengguna untuk memasukkan dua angka yang akan dihitung:

printf("Masukkan angka pertama: ");

scanf("%f", &angka1);

printf("Masukkan angka kedua: ");

scanf("%f", &angka2);

Angka pertama disimpan dalam variabel angka1 dan angka kedua disimpan dalam variabel angka2.

### 5. Menggunakan Switch-Case untuk Operasi:

Program menggunakan struktur switch-case untuk mengeksekusi operasi yang sesuai berdasarkan pilihan pengguna:

Case 1 (Penjumlahan):

case 1: // Penjumlahan
    hasil = angka1 + angka2;
    
    printf("Hasil Penjumlahan: %.2f\n", hasil);
    
    break;
Jika pengguna memilih 1 (Penjumlahan), program akan menghitung penjumlahan antara angka1 dan angka2 dan menampilkan hasilnya dengan format dua angka di belakang koma (misalnya, %.2f).

Case 2 (Pengurangan):

case 2: // Pengurangan

    hasil = angka1 - angka2;
    
    printf("Hasil Pengurangan: %.2f\n", hasil);
    
    break;
    
Jika pengguna memilih 2 (Pengurangan), program akan menghitung selisih antara angka1 dan angka2 dan menampilkan hasilnya.

Case 3 (Perkalian):

case 3: // Perkalian

    hasil = angka1 * angka2;
    
    printf("Hasil Perkalian: %.2f\n", hasil);
    
    break;
    
Jika pengguna memilih 3 (Perkalian), program akan menghitung hasil perkalian antara angka1 dan angka2 dan menampilkan hasilnya.

Case 4 (Pembagian):

case 4: // Pembagian
    if (angka2 != 0) {
        hasil = angka1 / angka2;
        printf("Hasil Pembagian: %.2f\n", hasil);
    } else {
        printf("Error: Pembagian dengan nol!\n");
    }
    break;
Jika pengguna memilih 4 (Pembagian), program akan memeriksa apakah angka2 tidak sama dengan 0 (untuk menghindari pembagian dengan nol).

Jika angka2 tidak 0, program akan membagi angka1 dengan angka2 dan menampilkan hasil pembagian. Jika angka2 adalah 0, program akan menampilkan pesan kesalahan: "Error: Pembagian dengan nol!".

Case 5 (Pembagian Bulat):

case 5: // Hasil Bagi (Pembagian Bulat)
    if (angka2 != 0) {
        int hasil_bagi = (int)angka1 / (int)angka2; // Pembagian bulat
        printf("Hasil Bagi: %d\n", hasil_bagi);
    } else {
        printf("Error: Pembagian dengan nol!\n");
    }
    break;
Jika pengguna memilih 5 (Pembagian Bulat), program akan melakukan pembagian bulat. Untuk itu, kedua angka (angka1 dan angka2) akan di-casting menjadi integer menggunakan (int).
Hasilnya adalah pembagian bulat tanpa angka desimal. Jika angka2 adalah 0, program menampilkan pesan kesalahan yang sama.

Default (Pilihan Tidak Valid):

default:
    printf("Pilihan tidak valid!\n");
    break;
    
Jika pengguna memasukkan angka yang tidak valid (selain 1 sampai 5), program akan menampilkan pesan "Pilihan tidak valid!".

### 6. Menutup Program:
Setelah salah satu operasi selesai, program akan selesai dan keluar dengan return 0;

### LATIHAN 2

### 1. Deklarasi Variabel:

nama_pembeli[70]: Array karakter yang digunakan untuk menyimpan nama pembeli.
total_pembelian: Variabel bertipe float untuk menyimpan total pembelian yang dimasukkan oleh pengguna.
diskon: Variabel bertipe float untuk menyimpan jumlah diskon yang diterima pembeli.
total_setelah_diskon: Variabel bertipe float untuk menyimpan total pembelian setelah diskon dan cashback diterapkan.
cashback: Variabel bertipe float yang menyimpan jumlah cashback yang diterima pembeli (jika ada).

### 2. Input dari Pengguna:

Program meminta pengguna untuk memasukkan nama pembeli dan total pembelian:
printf("Masukkan nama pembeli: ");
fgets(nama_pembeli, sizeof(nama_pembeli), stdin);
fgets digunakan untuk membaca nama pembeli (termasuk spasi) hingga maksimal 70 karakter.
printf("Masukkan total pembelian: Rp ");
scanf("%f", &total_pembelian);
scanf digunakan untuk membaca total pembelian yang dimasukkan oleh pengguna dalam format float (misalnya, Rp 120000,00).

### 3. Perhitungan Diskon dan Cashback:

Program menghitung diskon berdasarkan total pembelian dan memberikan cashback jika pembelian memenuhi syarat. Terdapat tiga kondisi untuk menentukan diskon dan cashback:

Jika total pembelian kurang dari atau sama dengan Rp 75.000:

Pembeli mendapatkan diskon sebesar 5% dari total pembelian.
Tidak ada cashback yang diberikan.

if (total_pembelian <= 75000) {
    diskon = total_pembelian * 0.05; // 5% diskon
}
Jika total pembelian lebih dari Rp 75.000 tetapi kurang dari atau sama dengan Rp 125.000:

Pembeli mendapatkan diskon sebesar 15% dari total pembelian.
Tidak ada cashback yang diberikan.

else if (total_pembelian > 75000 && total_pembelian <= 125000) {
    diskon = total_pembelian * 0.15; // 15% diskon
}
Jika total pembelian lebih dari Rp 125.000:

Pembeli mendapatkan diskon sebesar 25% dari total pembelian.
Pembeli juga mendapatkan cashback sebesar Rp 5.000.

else {
    diskon = total_pembelian * 0.25; // 25% diskon
    cashback = 5000; // Cashback Rp 5.000
}
### 4. Perhitungan Total Setelah Diskon dan Cashback:

Setelah diskon dan cashback dihitung, total pembelian setelah diskon dan cashback diperoleh dengan rumus:

total_setelah_diskon = total_pembelian - diskon + cashback;
total_pembelian - diskon: Mengurangi total pembelian dengan diskon yang diperoleh.
+ cashback: Menambahkan cashback jika ada.

 
### LATIHAN 3

### 1. Header dan Definisi Konstanta:
#include <stdio.h>: Digunakan untuk memasukkan pustaka standar input-output, yang digunakan untuk fungsi seperti printf dan scanf.

#include <math.h>: Digunakan untuk memasukkan pustaka matematika yang menyediakan fungsi seperti pow() untuk operasi perpangkatan.

#define PI 3.14159: Mendefinisikan konstanta PI yang digunakan dalam perhitungan luas permukaan bola dan tabung. Nilai PI ini adalah 3.14159.

### 2. Variabel:
pilihan: Variabel bertipe int untuk menyimpan pilihan pengguna mengenai bangun ruang yang ingin dihitung.
luas: Variabel bertipe float untuk menyimpan hasil perhitungan luas permukaan.

### 3. Menu Utama:
Program pertama kali menampilkan menu utama yang memungkinkan pengguna untuk memilih bangun ruang yang ingin dihitung luas permukaannya. Menu ini menampilkan pilihan:

1: Luas Permukaan Bola
2: Luas Permukaan Kubus
3: Luas Permukaan Balok
4: Luas Permukaan Tabung
Pengguna diminta untuk memilih salah satu dari menu tersebut dengan memasukkan angka antara 1 hingga 4:

printf("Pilih bangun ruang (1-4): ");
scanf("%d", &pilihan);

### 4. Perhitungan Luas Permukaan Berdasarkan Pilihan:
Program kemudian menggunakan switch untuk mengeksekusi perhitungan luas permukaan berdasarkan pilihan yang dimasukkan oleh pengguna.

1. Luas Permukaan Bola:
Jika pilihan adalah 1 (Luas Permukaan Bola), maka pengguna diminta untuk memasukkan jari-jari bola.
Rumus luas permukaan bola adalah:

Luas=4×π×r 

r adalah jari-jari bola. Fungsi pow(jari_jari, 2) digunakan untuk menghitung 

luas = 4 * PI * pow(jari_jari, 2);

### 2. Luas Permukaan Kubus:
Jika pilihan adalah 2 (Luas Permukaan Kubus), maka pengguna diminta untuk memasukkan panjang sisi kubus.
Rumus luas permukaan kubus adalah:

Luas=6×s 

s adalah panjang sisi kubus. Fungsi pow(sisi, 2) digunakan untuk menghitung 

Setelah itu, hasil perhitungan luas permukaan kubus ditampilkan:

luas = 6 * pow(sisi, 2);

### 3. Luas Permukaan Balok:
Jika pilihan adalah 3 (Luas Permukaan Balok), maka pengguna diminta untuk memasukkan panjang, lebar, dan tinggi balok.
Rumus luas permukaan balok adalah:

Luas=2×(p×l+p×t+l×t)

luas = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);

### 4. Luas Permukaan Tabung:
Jika pilihan adalah 4 (Luas Permukaan Tabung), maka pengguna diminta untuk memasukkan jari-jari alas dan tinggi tabung.
Rumus luas permukaan tabung adalah:

Luas=2×π×r×(r+t)

Setelah itu, hasil perhitungan luas permukaan tabung ditampilkan:

luas = 2 * PI * jari_jari * (jari_jari + tinggi);

### 5. Penanganan Pilihan Tidak Valid:
Jika pengguna memasukkan pilihan selain angka 1 sampai 4, maka program akan menampilkan pesan bahwa pilihan tersebut tidak valid:

default:
    printf("Pilihan tidak valid!\n");
    break;
    
### 6. Menampilkan Hasil:
Setelah menghitung luas permukaan sesuai pilihan pengguna, hasilnya ditampilkan dengan format dua angka di belakang koma menggunakan %.2f:

printf("Luas Permukaan [Bangun Ruang]: %.2f\n", luas);

### LATIHAN 4

### Penjelasan Program:

#### 1. Deklarasi Variabel:
nilai_kehadiran: Menyimpan nilai kehadiran mahasiswa.
nilai_tugas: Menyimpan nilai tugas mahasiswa.
nilai_uts: Menyimpan nilai UTS mahasiswa.
nilai_uas: Menyimpan nilai UAS mahasiswa.
nilai_akhir: Menyimpan hasil perhitungan nilai akhir mahasiswa berdasarkan bobot masing-masing komponen penilaian.

#### 2. Input Nilai:
Program meminta input untuk empat komponen nilai, yang masing-masing diminta dari pengguna:

printf("Masukkan nilai kehadiran (0-100): ");
scanf("%f", &nilai_kehadiran);

printf("Masukkan nilai tugas (0-100): ");
scanf("%f", &nilai_tugas);

printf("Masukkan nilai UTS (0-100): ");
scanf("%f", &nilai_uts);

printf("Masukkan nilai UAS (0-100): ");
scanf("%f", &nilai_uas);
Pengguna diminta untuk memasukkan nilai dalam rentang 0 hingga 100.

#### 3. Perhitungan Nilai Akhir:
Nilai akhir dihitung dengan menggunakan bobot yang sudah ditentukan untuk masing-masing komponen nilai:

Nilai Kehadiran: Bobot 20% (0.20)
Nilai Tugas: Bobot 20% (0.20)
Nilai UTS: Bobot 25% (0.25)
Nilai UAS: Bobot 35% (0.35)
Perhitungannya dilakukan dengan rumus:

nilai_akhir = (nilai_kehadiran * 0.20) + (nilai_tugas * 0.20) + (nilai_uts * 0.25) + (nilai_uas * 0.35);

#### 4. Menampilkan Nilai Akhir:
Setelah menghitung nilai akhir, program menampilkan hasilnya dengan format dua angka desimal menggunakan %.2f:

printf("Nilai akhir mahasiswa: %.2f\n", nilai_akhir);

#### 5. Menentukan Grade dan Kelulusan:
Berdasarkan nilai akhir yang dihitung, program akan menentukan grade dan memberikan pesan kelulusan sesuai dengan nilai yang diperoleh mahasiswa.

Grade E: Nilai akhir antara 0 - 44
Pesan: "Maaf, anda tidak lulus!"
Grade D: Nilai akhir antara 45 - 55
Pesan: "Maaf, anda tidak lulus!"
Grade C: Nilai akhir antara 56 - 65
Pesan: "Anda lulus, tingkatkan lagi untuk kedepannya!"
Grade B: Nilai akhir antara 66 - 75
Pesan: "Anda lulus dengan baik, tingkatkan terus belajarnya!"
Grade B (untuk nilai akhir antara 76 - 80): Nilai B muncul lagi karena ada dua rentang nilai yang memberikan grade B.
Pesan: "Anda lulus dengan baik, tingkatkan terus belajarnya!"
Grade B+: Nilai akhir antara 81 - 85
Pesan: "Anda lulus dengan baik, tingkatkan terus belajarnya!"
Grade A: Nilai akhir antara 86 - 100
Pesan: "Selamat! Anda lulus dengan nilai yang sangat memuaskan!"

### MODUL 6 - Flow Control (Loop).

### LATIHAN 1

### 1. Deklarasi Variabel:
int i;: Variabel i digunakan sebagai penghitung dalam loop untuk iterasi angka dari 0 hingga 50.

### 2. Menampilkan Deret Bilangan Genap:
Program pertama-tama mencetak teks "Deret bilangan genap dari 0 hingga 50:".

Kemudian program menggunakan sebuah for loop untuk melakukan iterasi dari 0 hingga 50:

for (i = 0; i <= 50; i++) {
Di dalam loop, terdapat sebuah kondisi yang memeriksa apakah angka i merupakan bilangan genap:

if (i % 2 == 0) {  // Mengecek jika angka genap
    printf("%d ", i);
}
i % 2 == 0: Operator modulus (%) digunakan untuk membagi i dengan 2 dan memeriksa sisa bagi. Jika hasilnya 0, berarti i adalah bilangan genap.
Jika kondisi ini benar (bilangan genap), maka angka i akan dicetak dengan fungsi printf("%d ", i);

Setelah seluruh bilangan genap dari 0 hingga 50 dicetak, program melanjutkan ke langkah berikutnya, yaitu menampilkan deret bilangan ganjil.

### 3. Menampilkan Deret Bilangan Ganjil:
Program kemudian mencetak teks "Deret bilangan ganjil dari 0 hingga 50:"

Selanjutnya, program menggunakan loop for lainnya untuk iterasi dari 1 hingga 50:

for (i = 1; i <= 50; i++) {
Di dalam loop ini, terdapat kondisi yang memeriksa apakah angka i merupakan bilangan ganjil:

if (i % 2 != 0) {  // Mengecek jika angka ganjil
    printf("%d ", i);
}
i % 2 != 0: Jika sisa bagi i dengan 2 tidak sama dengan 0, maka i adalah bilangan ganjil.
Jika kondisi ini benar (bilangan ganjil), maka angka i akan dicetak.

### 4. Output Program:
Setelah kedua loop selesai, program akan menampilkan dua deret bilangan sebagai berikut:

Deret Bilangan Genap:
0 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50
Deret Bilangan Ganjil:
1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49

### 5. Ringkasan:
Loop pertama digunakan untuk menampilkan bilangan genap dari 0 hingga 50.
Loop kedua digunakan untuk menampilkan bilangan ganjil dari 0 hingga 50.
Kondisi if (i % 2 == 0) untuk genap dan if (i % 2 != 0) untuk ganjil memastikan bahwa hanya bilangan genap atau ganjil yang dicetak sesuai dengan aturan modulus.

### LATIHAN 2
#### Penjelasan Kode:

#include <stdio.h>
int main() {
    int i, j;
#include <stdio.h>: Baris ini digunakan untuk menyertakan library standar input-output (stdio.h), yang diperlukan untuk fungsi printf() agar dapat mencetak output ke layar.

int main(): Ini adalah titik masuk dari program. Fungsi main() adalah fungsi utama yang akan dieksekusi ketika program dijalankan.

    // Loop untuk setiap baris
    for (i = 1; i <= 5; i++) {
Loop pertama (for (i = 1; i <= 5; i++)): Ini adalah loop luar yang mengatur jumlah baris yang akan dicetak. Loop ini dimulai dengan i = 1 dan berlanjut sampai i <= 5, yang berarti program akan mencetak 5 baris.

Variabel i digunakan untuk menghitung berapa baris yang telah dicetak, dan nilai i akan bertambah 1 pada setiap iterasi (setiap kali loop berulang).

        // Loop untuk menampilkan bintang pada setiap baris
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        
Loop kedua (for (j = 1; j <= i; j++)): Ini adalah loop dalam yang mengatur jumlah bintang yang dicetak pada setiap baris.

Pada setiap iterasi baris luar (yang dikendalikan oleh i), loop ini akan mencetak sejumlah bintang yang setara dengan nilai i.

Misalnya, pada baris pertama (i = 1), loop ini akan mencetak 1 bintang.
Pada baris kedua (i = 2), loop ini akan mencetak 2 bintang.
Pada baris ketiga (i = 3), loop ini akan mencetak 3 bintang, dan seterusnya.

    return 0;
}
return 0;: Ini adalah akhir dari fungsi main(), yang mengembalikan nilai 0 ke sistem operasi, menunjukkan bahwa program telah selesai dieksekusi dengan sukses.

### LATIHAN 3

#### Penjelasan Kode:
*#include <stdio.h>*

#include <stdio.h>: Baris ini menyertakan pustaka standar input/output C, yang menyediakan fungsi printf() untuk mencetak output ke layar.

int main(): Fungsi utama yang dijalankan ketika program dieksekusi.

    // Loop untuk baris
    for (i = 1; i <= 5; i++) {
for (i = 1; i <= 5; i++): Ini adalah loop pertama (loop luar) yang digunakan untuk mengatur jumlah baris yang akan dicetak. i akan dimulai dari 1 dan bertambah hingga 5, sehingga ada 5 baris yang dicetak.

i menentukan nomor baris dan juga digunakan dalam perhitungan perkalian pada setiap baris.

        // Loop untuk mencetak angka pada setiap baris
        for (j = 1; j <= i; j++) {
            // Mencetak hasil perkalian
            printf("%d ", i * j);
        }
for (j = 1; j <= i; j++): Ini adalah loop dalam yang digunakan untuk mencetak angka pada setiap baris.

Pada setiap iterasi dari baris luar (yang dikendalikan oleh i), loop dalam ini akan mencetak angka hasil perkalian i * j.

Untuk setiap nilai i, nilai j akan dimulai dari 1 dan berlanjut hingga i, sehingga jumlah angka yang dicetak pada setiap baris akan bertambah sesuai dengan nomor baris.

printf("%d ", i * j);: Ini mencetak hasil perkalian antara i dan j di layar, diikuti oleh spasi (" "). Jadi, pada setiap iterasi, hasil perkalian i * j akan dicetak.

        // Pindah ke baris berikutnya setelah mencetak angka
        printf("\n");
    }
    
printf("\n");: Baris ini mencetak karakter newline (\n), yang memindahkan kursor ke baris berikutnya setelah mencetak angka pada baris sebelumnya. Ini memastikan setiap baris hasil perkalian dicetak pada baris yang terpisah.

*return 0;*


return 0;: Program mengembalikan nilai 0, menandakan bahwa program telah selesai dieksekusi dengan sukses.

### LATIHAN 4
#### Penjelasan Kode:

#include <stdio.h>

#include <stdio.h>: Ini adalah pustaka standar untuk input/output di bahasa C. Kita membutuhkan pustaka ini untuk menggunakan fungsi seperti printf() dan scanf().
char no_rek[] = "0123";: Mendeklarasikan nomor rekening akun (dalam hal ini, hanya sebagai string untuk contoh).
char nama_akun[] = "Hattori";: Nama akun yang terdaftar adalah "Hattori".
float saldo = 175000;: Ini adalah saldo awal akun Hattori, yang diatur sebesar Rp. 175.000.
int pilihan;: Variabel ini digunakan untuk menyimpan pilihan menu yang dipilih pengguna.
float setoran, penarikan;: Variabel untuk menyimpan jumlah setoran dan penarikan yang dimasukkan oleh pengguna.

   
while (1): Loop ini akan terus berjalan selama tidak ada perintah untuk keluar dari program. Jadi, selama pengguna tidak memilih menu "Exit", program akan tetap meminta input dan menampilkan menu.

Di dalam loop ini, menu ATM ditampilkan dengan printf() yang menawarkan 4 pilihan:
Cek saldo
Setoran
Penarikan Tunai
Keluar (Exit)
scanf("%d", &pilihan);: Fungsi scanf() digunakan untuk mengambil input pengguna berupa angka yang mewakili menu yang dipilih.

switch (pilihan): Struktur switch digunakan untuk mengevaluasi nilai dari variabel pilihan dan menjalankan blok kode yang sesuai dengan nilai yang dipilih.

Case 1: Jika pengguna memilih menu "Cek Saldo", maka program akan menampilkan saldo akun saat ini menggunakan printf().

Case 2: Jika pengguna memilih menu "Setoran":

Program meminta pengguna memasukkan jumlah setoran menggunakan scanf("%f", &setoran);.
Saldo akun akan diperbarui dengan menambahkan jumlah setoran ke saldo yang sudah ada (saldo += setoran;).
Setelah itu, program akan menampilkan pesan bahwa setoran berhasil dan menampilkan saldo yang telah diperbarui.

Case 3: Jika pengguna memilih menu "Penarikan Tunai":
Program meminta pengguna memasukkan jumlah uang yang ingin ditarik menggunakan scanf("%f", &penarikan);.
Sebelum melakukan penarikan, program memeriksa apakah saldo yang tersisa setelah penarikan cukup untuk memenuhi syarat saldo minimum (Rp. 50.000).
Kondisi if (saldo - penarikan >= 50000) memastikan bahwa saldo setelah penarikan tidak kurang dari Rp. 50.000.
Jika saldo mencukupi, maka penarikan berhasil dan saldo diperbarui.
Jika saldo tidak mencukupi, program akan menampilkan pesan error dan penarikan dibatalkan.
         
Case 4: Jika pengguna memilih menu "Exit":
Program akan menampilkan pesan perpisahan "Terima kasih telah menggunakan ATM. Selamat tinggal!".
Kemudian program akan keluar dengan return 0;, yang menandakan bahwa program telah selesai dengan sukses.

Default: Jika pengguna memasukkan pilihan yang tidak valid (selain 1, 2, 3, atau 4), maka program akan menampilkan pesan kesalahan "Pilihan tidak valid! Silakan pilih menu yang tersedia." dan kembali menampilkan menu.

### MODUL 7 

### LATIHAN 1
#### Penjelasan Kode:
#include <stdio.h>: Baris ini menyertakan pustaka standar input/output C. Pustaka ini diperlukan untuk fungsi printf() (untuk menampilkan output) dan scanf() (untuk mengambil input dari pengguna).
int i;: Variabel i digunakan untuk perulangan (loop).
float nilai[20];: Array nilai dengan ukuran 20 digunakan untuk menyimpan nilai dari 20 mahasiswa. Tipe data float digunakan karena nilai yang dimasukkan bisa berupa angka desimal.
float total = 0, rata_rata;: Variabel total digunakan untuk menyimpan jumlah seluruh nilai mahasiswa, sementara rata_rata digunakan untuk menyimpan hasil perhitungan rata-rata nilai.

Input Nilai Mahasiswa:
printf("Masukkan nilai untuk 20 mahasiswa:\n");: Program meminta pengguna untuk memasukkan nilai untuk 20 mahasiswa.
for (i = 0; i < 20; i++): Loop ini akan berjalan 20 kali, dari i = 0 hingga i = 19 (karena array dimulai dari indeks 0).
Pada setiap iterasi, program meminta input nilai untuk mahasiswa ke-i+1 menggunakan printf() dan scanf(). Fungsi scanf("%f", &nilai[i]); digunakan untuk menerima input nilai dari pengguna dan menyimpannya dalam array nilai[i].
Setelah nilai diterima, nilai tersebut ditambahkan ke variabel total dengan perintah total += nilai[i];. Ini akan menghitung jumlah dari semua nilai yang dimasukkan.

Setelah semua nilai dimasukkan dan totalnya dihitung, rata-rata dihitung dengan cara membagi total dengan jumlah mahasiswa (yaitu 20):
rata_rata = total / 20;: Perhitungan ini akan menghasilkan rata-rata nilai dari 20 mahasiswa.

Setelah menghitung rata-rata, program menampilkan hasilnya dengan printf(). Format %.2f digunakan untuk menampilkan angka dengan dua angka desimal, sehingga hasil rata-rata ditampilkan dengan dua angka setelah titik desimal.

    return 0;
}
return 0;: Fungsi main() mengembalikan nilai 0, yang menandakan bahwa program telah selesai dengan sukses.

### LATIHAN 2
#### Penjelasan Kode:

#include <stdio.h>: Ini adalah pustaka standar C untuk input dan output. Pustaka ini menyediakan fungsi printf() untuk menampilkan output dan scanf() untuk mengambil input.
int n;: Variabel n digunakan untuk menyimpan jumlah mahasiswa yang ingin diinputkan.
printf("Input banyak mahasiswa: ");: Program menampilkan pesan yang meminta pengguna untuk memasukkan jumlah mahasiswa.
scanf("%d", &n);: Fungsi scanf() digunakan untuk membaca input jumlah mahasiswa yang dimasukkan oleh pengguna dan menyimpannya dalam variabel n.

char nama_mahasiswa[n][100];: Ini adalah array 2D yang digunakan untuk menyimpan nama-nama mahasiswa. Setiap elemen dari array ini dapat menyimpan nama mahasiswa hingga 100 karakter (untuk mengakomodasi nama panjang). Ukuran array ini bergantung pada nilai n, yang berarti jumlah mahasiswa yang dimasukkan oleh pengguna.
n: Jumlah mahasiswa yang akan dimasukkan.
100: Jumlah maksimum karakter yang dapat ditampung untuk setiap nama mahasiswa (termasuk karakter null \0 yang menandakan akhir dari string).

Input Nama Mahasiswa:
for (int i = 0; i < n; i++): Loop ini digunakan untuk mengulang sebanyak n kali, yaitu jumlah mahasiswa yang dimasukkan.
printf("Input nama mahasiswa %d: ", i + 1);: Program menampilkan pesan yang meminta input nama mahasiswa ke-i+1.
getchar();: Fungsi getchar() digunakan untuk menangkap karakter newline (\n) yang tersisa setelah input jumlah mahasiswa sebelumnya. Ini memastikan bahwa karakter newline tidak mengganggu input nama berikutnya.
fgets(nama_mahasiswa[i], sizeof(nama_mahasiswa[i]), stdin);: Fungsi fgets() digunakan untuk membaca string dari input pengguna. Ini memungkinkan kita untuk membaca nama dengan spasi (misalnya, nama lengkap). sizeof(nama_mahasiswa[i]) memastikan bahwa tidak lebih dari 100 karakter dibaca untuk setiap nama, dan stdin menunjukkan bahwa input akan diambil dari standar input (keyboard).

Menampilkan Nama Mahasiswa:
printf("\nDaftar nama mahasiswa:\n");: Program menampilkan pesan untuk memulai daftar nama mahasiswa.
for (int i = 0; i < n; i++): Loop ini digunakan untuk mengulang sebanyak n kali untuk menampilkan nama mahasiswa satu per satu.
printf("Nama mahasiswa ke-%d: %s", i + 1, nama_mahasiswa[i]);: Pada setiap iterasi, program menampilkan nama mahasiswa ke-i+1 dengan menggunakan format %s, yang digunakan untuk menampilkan string.

return 0;: Program mengakhiri eksekusinya dengan nilai kembali 0, yang menunjukkan bahwa program telah selesai dengan sukses.

### LATIHAN 3
#### Penjelasan Kode:
#include <stdio.h>: Pustaka ini digunakan untuk fungsi input dan output standar seperti printf() dan scanf().
#include <string.h>: Pustaka ini digunakan untuk fungsi-fungsi manipulasi string, seperti strcmp(), yang digunakan untuk membandingkan dua string.

#### Deklarasi variabel:

char username_terdaftar[] = "lililala123";: Ini adalah string yang berisi username yang sudah terdaftar dalam sistem.
char password_terdaftar[] = "ayaa123";: Ini adalah string yang berisi password yang sudah terdaftar dalam sistem.
char username_input[50], password_input[50];: Ini adalah dua array karakter yang digunakan untuk menyimpan input username dan password dari pengguna. Ukuran 50 memungkinkan pengguna untuk memasukkan username dan password dengan panjang hingga 49 karakter (ditambah dengan karakter null \0 di akhir).

printf("Masukkan username: ");: Program menampilkan pesan untuk meminta input username dari pengguna.

scanf("%s", username_input);: Fungsi scanf() digunakan untuk mengambil input username yang dimasukkan oleh pengguna dan menyimpannya dalam array username_input. %s digunakan untuk membaca string tanpa spasi.

printf("Masukkan password: ");: Program menampilkan pesan untuk meminta input password dari pengguna.

scanf("%s", password_input);: Fungsi scanf() digunakan untuk mengambil input password yang dimasukkan oleh pengguna dan menyimpannya dalam array password_input.

Catatan: scanf("%s", ...) tidak aman jika password atau username mengandung spasi. Untuk password, Anda biasanya akan menggunakan getchar() atau fgets() untuk menangani spasi, tetapi dalam hal ini, spasi tidak diperbolehkan dalam password atau username.

    // Memeriksa apakah username dan password yang dimasukkan sesuai
    if (strcmp(username_input, username_terdaftar) == 0 && strcmp(password_input, password_terdaftar) == 0) {
        printf("Berhasil login!\n");  // Menampilkan pesan berhasil login
    } else {
        printf("Password salah!\n");  // Menampilkan pesan password salah
    }
#### Perbandingan Username dan Password:

strcmp(username_input, username_terdaftar): Fungsi strcmp() digunakan untuk membandingkan dua string. Fungsi ini mengembalikan:
0 jika kedua string sama.
Nilai selain 0 jika string tidak sama.
strcmp(password_input, password_terdaftar): Fungsi strcmp() juga digunakan untuk membandingkan string password yang dimasukkan dengan password yang terdaftar.

#### Kondisi if:

Jika hasil dari strcmp(username_input, username_terdaftar) == 0 dan strcmp(password_input, password_terdaftar) == 0, artinya baik username dan password yang dimasukkan sama persis dengan yang terdaftar. Dalam hal ini, program akan menampilkan pesan Berhasil login!.
Jika salah satu atau keduanya tidak cocok, program akan menampilkan pesan Password salah!.

### MODUL 8  Fungsi Prosedur

### LATIHAN 1
#### Penjelasan Kode:
Fungsi perkalian(int a, int b): Fungsi ini menghitung hasil perkalian dua bilangan a dan b dengan cara rekursif.

Basis Rekursi:
Ketika b == 1, maka fungsi langsung mengembalikan nilai a. Ini adalah kondisi dasar (basis) yang menghentikan rekursi.
Misalnya, jika kita ingin menghitung 5 * 1, hasilnya adalah 5, dan kita tidak perlu melanjutkan rekursi lebih lanjut.
Rekursif:
Jika b bukan 1, maka fungsi akan memanggil dirinya sendiri dengan perkalian(a, b-1), dan hasilnya akan ditambahkan ke a.
Secara konseptual, ini mirip dengan penjumlahan berulang. Misalnya, untuk menghitung 5 * 3, kita dapat memecahnya menjadi:
5 * 3 = 5 + 5 * 2
5 * 2 = 5 + 5 * 1
5 * 1 = 5
Sehingga, hasil akhirnya adalah 5 + 5 + 5 = 15.

#### Program Utama:
int main() {
    int a, b;

    // Meminta input dari pengguna
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);

    // Menghitung hasil perkalian
    int hasil = perkalian(a, b);

    // Menampilkan hasil
    printf("Hasil %d x %d = %d\n", a, b, hasil);

    return 0;
}
#### Input dari Pengguna:

Program meminta pengguna untuk memasukkan dua bilangan, a dan b.
Fungsi scanf("%d", &a); digunakan untuk membaca input pertama (bilangan pertama).
Fungsi scanf("%d", &b); digunakan untuk membaca input kedua (bilangan kedua).
Menghitung Hasil Perkalian:

Program memanggil fungsi perkalian(a, b) untuk menghitung hasil perkalian antara a dan b.
Fungsi rekursif perkalian akan melakukan penjumlahan berulang hingga mencapai nilai basis (b == 1).
Menampilkan Hasil:

Setelah fungsi rekursif selesai, hasil perkalian disimpan dalam variabel hasil.
Program menampilkan hasilnya dengan printf("Hasil %d x %d = %d\n", a, b, hasil);.
Contoh Alur Eksekusi:
Misalkan kita ingin menghitung 4 * 3:

#### Program meminta input:
Masukkan bilangan pertama: 4
Masukkan bilangan kedua: 3
Fungsi perkalian(4, 3) akan bekerja seperti ini:
perkalian(4, 3) memanggil perkalian(4, 2) dan menambahkan 4 ke hasilnya.
perkalian(4, 2) memanggil perkalian(4, 1) dan menambahkan 4 ke hasilnya.
perkalian(4, 1) mengembalikan 4 (basis rekursi).
Jadi, langkah-langkahnya adalah:
perkalian(4, 1) = 4
perkalian(4, 2) = 4 + 4 = 8
perkalian(4, 3) = 4 + 8 = 12
Akhirnya, program akan mencetak:
Hasil 4 x 3 = 12

#### Penjelasan Rekursi:
Rekursi adalah teknik di mana sebuah fungsi memanggil dirinya sendiri. Dalam program ini, fungsi perkalian terus memanggil dirinya dengan nilai b yang lebih kecil, hingga mencapai nilai basis (b == 1).
Setiap panggilan rekursif menyelesaikan satu bagian dari perhitungan, yaitu penambahan a pada hasil perkalian yang lebih kecil, hingga akhirnya mengembalikan hasil yang lengkap.

### LATIHAN 2

#### Fungsi-fungsi Aritmetik:
Fungsi penjumlahan:

float penjumlahan(float a, float b) {
    return a + b;
}
Fungsi ini menerima dua parameter a dan b bertipe float, lalu mengembalikan hasil penjumlahan kedua bilangan tersebut.

Fungsi pengurangan:

float pengurangan(float a, float b) {
    return a - b;
}
Fungsi ini menerima dua parameter a dan b, dan mengembalikan hasil pengurangan a - b.

Fungsi perkalian:

float perkalian(float a, float b) {
    return a * b;
}
Fungsi ini menerima dua parameter a dan b, dan mengembalikan hasil perkalian a * b.

Fungsi pembagian:

float pembagian(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
        return 0;
    }
}
Fungsi ini menerima dua parameter a dan b. Jika b tidak sama dengan 0, maka fungsi akan mengembalikan hasil pembagian a / b.
Jika b adalah 0, maka pembagian tidak dapat dilakukan, dan program mencetak pesan kesalahan "Error: Pembagian dengan nol tidak diperbolehkan." serta mengembalikan nilai 0 sebagai tanda kesalahan.

#### Fungsi main:
int main() {
    float num1, num2, hasil;
    int pilihan;
    
    // Meminta input angka pertama dan kedua
    printf("Masukkan angka pertama: ");
    scanf("%f", &num1);
    printf("Masukkan angka kedua: ");
    scanf("%f", &num2);

    // Menampilkan menu pilihan
    printf("\nPilih operasi aritmetik:\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("Masukkan pilihan (1/2/3/4): ");
    scanf("%d", &pilihan);

    // Melakukan perhitungan berdasarkan pilihan pengguna
    switch (pilihan) {
        case 1:
            hasil = penjumlahan(num1, num2);
            printf("%.2f + %.2f = %.2f\n", num1, num2, hasil);
            break;
        case 2:
            hasil = pengurangan(num1, num2);
            printf("%.2f - %.2f = %.2f\n", num1, num2, hasil);
            break;
        case 3:
            hasil = perkalian(num1, num2);
            printf("%.2f * %.2f = %.2f\n", num1, num2, hasil);
            break;
        case 4:
            hasil = pembagian(num1, num2);
            if (num2 != 0) {
                printf("%.2f / %.2f = %.2f\n", num1, num2, hasil);
            }
            break;
        default:
            printf("Pilihan tidak valid!\n");
    }

    return 0;
}
#### Alur Program main:
Input Angka:

Program meminta pengguna untuk memasukkan dua angka (bilangan pertama dan kedua). Fungsi scanf("%f", &num1) digunakan untuk membaca angka pertama dan scanf("%f", &num2) untuk angka kedua. Tipe data yang digunakan adalah float, sehingga angka desimal dapat diterima.
Menampilkan Menu Pilihan Operasi:

Program menampilkan menu yang berisi pilihan operasi aritmetik yang bisa dipilih oleh pengguna:
markdown
1. Penjumlahan
2. Pengurangan
3. Perkalian
4. Pembagian
Pengguna diminta untuk memilih salah satu dari empat pilihan ini dengan memasukkan angka 1, 2, 3, atau 4. Pilihan ini dibaca oleh fungsi scanf("%d", &pilihan).

Switch Statement untuk Memilih Operasi:
Program menggunakan struktur switch untuk memeriksa nilai variabel pilihan yang dimasukkan pengguna.
Berdasarkan nilai pilihan, program akan melakukan operasi yang sesuai menggunakan salah satu dari empat fungsi aritmetik (penjumlahan, pengurangan, perkalian, pembagian):
Case 1: Melakukan penjumlahan dan menampilkan hasilnya.
Case 2: Melakukan pengurangan dan menampilkan hasilnya.
Case 3: Melakukan perkalian dan menampilkan hasilnya.
Case 4: Melakukan pembagian dan menampilkan hasilnya, kecuali jika angka kedua (num2) adalah 0. Dalam hal ini, program akan mencetak pesan kesalahan "Pembagian dengan nol tidak diperbolehkan."

Pesan Kesalahan:
Jika pengguna memasukkan nilai selain 1, 2, 3, atau 4, maka program akan masuk ke default dan mencetak pesan "Pilihan tidak valid!"

### LATIHAN 3
#### Fungsi-fungsi Aritmetik:
Fungsi luas:
float luas(float radius) {
    return 3.14 * radius * radius;  // Rumus luas = π * r^2
}
Fungsi ini menerima satu parameter radius (jarak dari pusat lingkaran ke pinggiran lingkaran) bertipe float.
Fungsi ini kemudian menghitung luas lingkaran dengan rumus:
Di sini, nilai π (pi) digunakan sebesar 3.14 dan r adalah radius lingkaran yang diterima sebagai input.

Fungsi keliling:
float keliling(float radius) {
    return 2 * 3.14 * radius;  // Rumus keliling = 2 * π * r
}
Fungsi ini juga menerima satu parameter radius bertipe float.
Fungsi ini menghitung keliling lingkaran dengan rumus:

Keliling=2×π×r
Nilai π (pi) digunakan sebesar 3.14, dan r adalah radius lingkaran yang diterima sebagai input.

Fungsi main:

int main() {
    float radius, hasil_luas, hasil_keliling;

    printf("Masukkan radius lingkaran: ");
    scanf("%f", &radius);  // Meminta input radius dari pengguna

    hasil_luas = luas(radius);  // Menghitung luas dengan memanggil fungsi luas
    hasil_keliling = keliling(radius);  // Menghitung keliling dengan memanggil fungsi keliling

    // Menampilkan hasil
    printf("Luas lingkaran dengan radius %.2f adalah: %.2f\n", radius, hasil_luas);
    printf("Keliling lingkaran dengan radius %.2f adalah: %.2f\n", radius, hasil_keliling);

    return 0;
}
#### Deklarasi Variabel:

float radius: Variabel ini akan menyimpan nilai radius lingkaran yang dimasukkan oleh pengguna.
float hasil_luas: Variabel ini akan menyimpan hasil perhitungan luas lingkaran.
float hasil_keliling: Variabel ini akan menyimpan hasil perhitungan keliling lingkaran.

#### Input dari Pengguna:
printf("Masukkan radius lingkaran: ");
scanf("%f", &radius);
Program meminta pengguna untuk memasukkan nilai radius lingkaran melalui scanf(). Nilai ini disimpan dalam variabel radius bertipe float.
Menghitung Luas dan Keliling:

Fungsi luas(radius) dipanggil untuk menghitung luas lingkaran berdasarkan radius yang dimasukkan pengguna. Hasilnya disimpan dalam variabel hasil_luas.
Fungsi keliling(radius) dipanggil untuk menghitung keliling lingkaran berdasarkan radius yang dimasukkan pengguna. Hasilnya disimpan dalam variabel hasil_keliling.
Menampilkan Hasil:

printf("Luas lingkaran dengan radius %.2f adalah: %.2f\n", radius, hasil_luas);
printf("Keliling lingkaran dengan radius %.2f adalah: %.2f\n", radius, hasil_keliling);
Program kemudian mencetak hasil perhitungan luas dan keliling lingkaran ke layar.
Format %.2f digunakan untuk menampilkan angka dengan dua digit di belakang koma (presisi dua angka desimal).
Alur Program:
Program meminta pengguna untuk memasukkan nilai radius lingkaran.

### LATIHAN 4
#### Fungsi potong:
float potong(float total_pembelian) {
    float diskon = 0;

    // Menentukan besar diskon berdasarkan total pembelian
    if (total_pembelian > 3000000) {
        diskon = total_pembelian * 0.35;  // Diskon 35% jika pembelian di atas 3 juta
    } else if (total_pembelian >= 1000000) {
        diskon = total_pembelian * 0.20;  // Diskon 20% jika pembelian di antara 1 juta dan 3 juta
    }
    // Jika pembelian kurang dari 1 juta, tidak ada diskon (diskon = 0)
    return diskon;
}
#### Fungsi potong:

Fungsi ini bertugas untuk menghitung besarnya diskon berdasarkan total pembelian yang diterima sebagai parameter total_pembelian.
Fungsi ini mengembalikan nilai diskon berupa angka desimal.
Logika Diskon:

Jika total_pembelian lebih dari 3 juta (Rp. 3.000.000), maka diskon yang diberikan adalah 35% dari total pembelian.
Jika total_pembelian lebih besar atau sama dengan 1 juta (Rp. 1.000.000) tetapi kurang dari 3 juta, maka diskon yang diberikan adalah 20% dari total pembelian.
Jika pembelian kurang dari 1 juta, maka tidak ada diskon yang diberikan, dan diskon tetap 0.

#### Fungsi main:
int main() {
    float total_pembelian, diskon, yang_harus_dibayar;

    // Input total pembelian
    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.) : ");
    scanf("%f", &total_pembelian);

    // Menghitung besar diskon
    diskon = potong(total_pembelian);

    // Menghitung jumlah yang harus dibayar setelah diskon
    yang_harus_dibayar = total_pembelian - diskon;

    // Menampilkan hasil
    printf("Besar Diskon : Rp. %.2f\n", diskon);
    printf("Besar Yang Harus Dibayarkan : Rp. %.2f\n", yang_harus_dibayar);

    return 0;
}
#### Deklarasi Variabel:

float total_pembelian: Menyimpan nilai total pembelian yang dimasukkan oleh pengguna.
float diskon: Menyimpan hasil dari fungsi potong yang menghitung diskon berdasarkan total pembelian.
float yang_harus_dibayar: Menyimpan hasil perhitungan jumlah yang harus dibayar setelah potongan diskon.
Input Total Pembelian:

#### Program meminta pengguna untuk memasukkan jumlah total pembelian yang dilakukan:
printf("Total Pembelian (Rp.) : ");
scanf("%f", &total_pembelian);
Menghitung Diskon:

Fungsi potong(total_pembelian) dipanggil untuk menghitung besar diskon berdasarkan nilai total_pembelian. Hasilnya disimpan dalam variabel diskon.
Menghitung Jumlah yang Harus Dibayar:

#### Setelah mengetahui nilai diskon, jumlah yang harus dibayar dihitung dengan mengurangkan diskon dari total pembelian:
yang_harus_dibayar = total_pembelian - diskon;
Menampilkan Hasil:

#### Program menampilkan nilai diskon yang diberikan dan jumlah yang harus dibayar setelah potongan diskon:
printf("Besar Diskon : Rp. %.2f\n", diskon);
printf("Besar Yang Harus Dibayarkan : Rp. %.2f\n", yang_harus_dibayar);

#### Alur Program:
Pengguna diminta untuk memasukkan total pembelian.
Program menghitung besar diskon berdasarkan total pembelian menggunakan fungsi potong.
Program menghitung jumlah yang harus dibayar setelah mengurangi diskon dari total pembelian.
Hasil diskon dan jumlah yang harus dibayar ditampilkan kepada pengguna.

### MODUL 9 Pointer

### LATIAHN 1
#### Deklarasi dan Inisialisasi:
char str[] = "BORLAND";: Membuat sebuah array karakter (string) yang berisi kata "BORLAND". Ini adalah string yang akan diproses oleh program.

char *ptr = str;: Mendeklarasikan sebuah pointer ptr yang menunjuk ke karakter pertama dari array str. Jadi, ptr menunjuk ke str[0], yang berisi 'B'.

#### Looping untuk Menampilkan Karakter:
Loop pertama (for (int i = 1; i <= 7; i++)):
Loop ini akan berjalan sebanyak 7 kali, dengan nilai i yang bertambah dari 1 hingga 7.
i menentukan jumlah karakter yang akan ditampilkan pada setiap baris. Pada baris pertama hanya 1 karakter, pada baris kedua 2 karakter, dan seterusnya.

Loop kedua (for (int j = 0; j < i; j++)):
Loop ini berjalan sebanyak i kali untuk setiap nilai i yang ditentukan oleh loop pertama. Loop ini digunakan untuk menampilkan karakter dari string secara bertahap.

#### Mengakses Karakter dengan Pointer:
printf("%c", *(ptr + j));  // Menampilkan karakter berdasarkan pointer
*(ptr + j): Di sini, ptr + j adalah cara untuk mengakses elemen array str yang berada di posisi j dari karakter pertama (karakter str[0]), karena pointer ptr menunjuk ke str[0].
*(ptr + j) berarti kita mengambil nilai karakter yang ada pada indeks j dari array str menggunakan pointer. Jadi, jika j = 0, maka *(ptr + 0) akan mengembalikan karakter pertama 'B', jika j = 1, maka *(ptr + 1) mengembalikan karakter kedua 'O', dan seterusnya.

#### Baris Baru setelah Setiap Iterasi:
printf("\n");
Setelah menampilkan karakter untuk baris tertentu, program akan mencetak \n untuk berpindah ke baris berikutnya.

### LATIHAN 2

#### Deklarasi Variabel
char kalimat[100], *ptr, *ptr_akhir;
kalimat[100]: Array karakter (string) yang digunakan untuk menyimpan kalimat yang dimasukkan oleh pengguna. Ukuran array ini adalah 100 karakter, cukup untuk kalimat yang tidak lebih dari 99 karakter (karakter ke-100 adalah untuk null terminator '\0').
ptr: Pointer yang digunakan untuk menunjuk ke awal string (kalimat[0]).
ptr_akhir: Pointer yang digunakan untuk menunjuk ke karakter terakhir dalam string kalimat.

#### Meminta Input dari Pengguna
printf("Masukkan kalimat: ");
fgets(kalimat, sizeof(kalimat), stdin);
fgets(kalimat, sizeof(kalimat), stdin): Fungsi fgets digunakan untuk membaca input dari pengguna. Fungsi ini lebih aman dibandingkan scanf("%s") karena fgets membatasi jumlah karakter yang dibaca hingga ukuran array yang ditentukan (dalam hal ini 100).
Input yang dimasukkan oleh pengguna kemudian disimpan dalam array kalimat.

#### Menghapus Karakter Newline
kalimat[strcspn(kalimat, "\n")] = '\0';
strcspn(kalimat, "\n"): Fungsi strcspn mencari posisi karakter newline (\n) yang dihasilkan oleh fgets ketika pengguna menekan Enter. Fungsi ini mengembalikan indeks posisi pertama dari karakter newline dalam string.
kalimat[strcspn(kalimat, "\n")] = '\0';: Setelah mendapatkan posisi newline, karakter tersebut diganti dengan null terminator '\0' untuk menghapusnya dari string. Hal ini memastikan kalimat tidak berakhir dengan newline yang tidak diinginkan.

#### Menentukan Pointer untuk Awal dan Akhir Kalimat
ptr = kalimat;
ptr_akhir = kalimat + strlen(kalimat) - 1;
ptr = kalimat;: Pointer ptr diatur untuk menunjuk ke awal string (karakter pertama dalam kalimat).
ptr_akhir = kalimat + strlen(kalimat) - 1;: Pointer ptr_akhir diatur untuk menunjuk ke karakter terakhir dalam string. Fungsi strlen(kalimat) mengembalikan panjang string tanpa menghitung null terminator '\0', jadi kalimat + strlen(kalimat) - 1 memberikan alamat karakter terakhir dalam string.

#### Mencetak Kalimat Terbalik
Program memasuki loop while yang akan mencetak karakter-karakter string dari belakang.
*ptr_akhir: Mengambil nilai karakter yang ditunjuk oleh ptr_akhir (karakter terakhir dari string saat pertama kali masuk ke dalam loop) dan mencetaknya.
ptr_akhir--: Pointer ptr_akhir kemudian digeser ke kiri (menuju karakter sebelumnya dalam string), dan loop berlanjut.
Loop akan berhenti ketika ptr_akhir mencapai posisi lebih kecil dari ptr (yaitu, ketika karakter yang ditunjuk oleh ptr_akhir sudah lebih kecil dari yang ditunjuk oleh ptr, yang berarti seluruh string sudah dicetak terbalik).

### LATIHAN 3
#### Bagian A:
int Lesley = 57082;  // Nilai Lesley
int Layla, Balmond;

Di bagian ini, variabel Lesley diinisialisasi dengan nilai 57082. Sedangkan Layla dan Balmond dideklarasikan tetapi belum diberikan nilai.

#### Penjelasan Nilai:
Lesley diatur ke 57082 sebagai nilai referensi.
Layla kemudian disamakan dengan nilai Lesley.
Balmond diset dengan nilai Layla + 1.

Layla = Lesley;  // Layla mendapatkan nilai Lesley
Balmond = Layla + 1;  // Balmond adalah Layla + 1

#### Setelah perintah ini:
Layla = Lesley berarti Layla akan memiliki nilai yang sama dengan Lesley, yaitu 57082.
Balmond = Layla + 1 berarti Balmond akan berisi nilai 57082 + 1, yaitu 57083.

printf("Bagian A:\n");
printf("a) Nilai Layla: %d\n", Layla);  // Layla = Lesley
printf("b) Nilai Balmond: %d\n\n", Balmond);  // Balmond = Layla + 1
Program mencetak hasil dari Bagian A:
Nilai Layla yang sekarang adalah 57082.
Nilai Balmond yang sekarang adalah 57083.

#### Bagian B:
int *LaylaPtr;  // Pointer untuk Layla
LaylaPtr = &Lesley;  // LaylaPointer menunjuk ke alamat Lesley
Di bagian ini, sebuah pointer LaylaPtr dideklarasikan untuk menunjuk ke tipe data int. Pointer ini akan digunakan untuk menyimpan alamat memori dari variabel Lesley.

#### Program mencetak hasil Bagian B:
LaylaPtr adalah alamat memori dari variabel Lesley, yang ditampilkan dengan format %p untuk menunjukkan alamat memori.
Nilai Balmond, yang dihitung sebagai Lesley + 1, adalah 57083.

### MODUL 10  Enumerasi Structure

### LATIHAN 1
#### 1. Inklusi Header dan Inisialisasi
#include <stdio.h>: Digunakan untuk operasi input dan output, seperti printf() dan scanf().
#include <stdlib.h>: Digunakan untuk fungsi rand() dan srand(), yang digunakan untuk menghasilkan angka acak.
#include <time.h>: Digunakan untuk mendapatkan waktu saat ini sebagai seed untuk fungsi rand() agar hasilnya berbeda setiap kali program dijalankan.
#### 2. Deklarasi Variabel
komputer: Menyimpan angka yang dipilih oleh komputer (angka acak).
tebakan: Menyimpan angka yang ditebak oleh pemain.
percobaan: Menghitung jumlah percobaan yang dibutuhkan pemain untuk menebak angka dengan benar.
play_again: Menyimpan pilihan pemain apakah ingin bermain lagi setelah selesai (y/n).

#### 3. Inisialisasi Seed untuk Angka Acak
Fungsi srand(time(NULL)) digunakan untuk menginisialisasi generator angka acak berdasarkan waktu saat ini. Ini memastikan bahwa setiap kali program dijalankan, angka acak yang dihasilkan berbeda.

#### 4. Loop Permainan Utama
do {
    komputer = rand() % 20 + 1;
    percobaan = 0;
    printf("Tebak angka yang dipilih oleh komputer (antara 1 dan 20): \n");
do { ... } while (play_again == 'y' || play_again == 'Y'); adalah loop utama yang akan terus berjalan selama pemain memilih untuk bermain lagi.
Di dalam loop ini, komputer memilih angka acak antara 1 hingga 20 menggunakan rand() % 20 + 1. rand() % 20 menghasilkan angka antara 0 hingga 19, dan dengan menambahkan 1, hasilnya menjadi antara 1 hingga 20.
percobaan = 0; menginisialisasi jumlah percobaan untuk setiap permainan baru.

#### 5. Loop untuk Tebakan Pemain
do { ... } while (tebakan != komputer); adalah loop yang memungkinkan pemain untuk terus menebak angka sampai mereka menebak dengan benar (yaitu, tebakan mereka sama dengan angka yang dipilih oleh komputer).
scanf("%d", &tebakan); meminta pemain untuk memasukkan tebakan mereka.
percobaan++ menghitung jumlah percobaan yang dilakukan oleh pemain.

#### 6. Memberikan Petunjuk
Berdasarkan tebakan pemain, program memberikan petunjuk:
Jika tebakan lebih kecil dari angka yang dipilih komputer, program mengatakan "Nomor saya lebih besar".
Jika tebakan lebih besar, program mengatakan "Nomor saya lebih kecil".
Jika tebakan benar, program mengucapkan selamat dan mencetak jumlah percobaan yang dibutuhkan pemain untuk menebak dengan benar.

#### 7. Menanyakan Apakah Ingin Bermain Lagi
Setelah permainan selesai, program menanyakan apakah pemain ingin bermain lagi dengan menggunakan scanf("%c", &play_again);.
getchar(); digunakan untuk menangkap karakter newline (\n) yang tersisa setelah input sebelumnya (dari scanf("%d", &tebakan);). Tanpa getchar(), karakter newline bisa mengganggu input berikutnya.

#### 8. Loop Berhenti Jika Pemain Tidak Ingin Bermain Lagi
Jika pemain menjawab dengan 'y' atau 'Y', permainan akan dimulai lagi, dan komputer akan memilih angka baru. Jika pemain menjawab selain 'y' atau 'Y', program keluar dari loop dan mengucapkan terima kasih.

#### 9. Pesan Terakhir
printf("Terima kasih telah bermain!\n");
Setelah keluar dari loop utama (jika pemain memilih untuk tidak bermain lagi), program mencetak pesan "Terima kasih telah bermain!".

### LATIHAN 2
#### 1. Struktur Data Zodiak
struct Zodiak: Ini adalah struktur yang digunakan untuk menyimpan informasi mengenai sebuah zodiak, yaitu:
nama[20]: Nama dari zodiak (misalnya, "CAPRICORN", "AQUARIUS").
start_bulan dan start_tanggal: Bulan dan tanggal mulai periode zodiak.
end_bulan dan end_tanggal: Bulan dan tanggal akhir periode zodiak.

#### 2. Fungsi get_zodiak
const char* get_zodiak(int tgl, int bln) {
    struct Zodiak zodiak[] = {
        {"CAPRICORN", 12, 22, 1, 19},
        {"AQUARIUS", 1, 20, 2, 18},
        {"PISCES", 2, 19, 3, 20},
        {"ARIES", 3, 21, 4, 19},
        {"TAURUS", 4, 20, 5, 20},
        {"GEMINI", 5, 21, 6, 20},
        {"CANCER", 6, 21, 7, 22},
        {"LEO", 7, 23, 8, 22},
        {"VIRGO", 8, 23, 9, 22},
        {"LIBRA", 9, 23, 10, 22},
        {"SCORPIO", 10, 23, 11, 21},
        {"SAGITTARIUS", 11, 22, 12, 21}
    };

    for (int i = 0; i < 12; i++) {
        if ((bln == zodiak[i].start_bulan && tgl >= zodiak[i].start_tanggal) || 
            (bln == zodiak[i].end_bulan && tgl <= zodiak[i].end_tanggal) ||
            (bln > zodiak[i].start_bulan && bln < zodiak[i].end_bulan)) {
            return zodiak[i].nama;
        }
    }

    return "Invalid";
}
get_zodiak adalah fungsi yang menentukan zodiak berdasarkan tanggal (tgl) dan bulan (bln) yang diberikan.

Di dalam fungsi ini, ada sebuah array zodiak[] yang berisi 12 elemen, masing-masing elemen berisi informasi tentang satu zodiak, termasuk nama zodiak dan rentang tanggalnya (bulan dan tanggal mulai serta berakhirnya).

Sebagai contoh, zodiak pertama adalah "CAPRICORN" yang berlangsung dari 22 Desember (12, 22) hingga 19 Januari (1, 19).

Fungsi melakukan iterasi melalui array zodiak[] menggunakan loop for:

(bln == zodiak[i].start_bulan && tgl >= zodiak[i].start_tanggal): Memeriksa apakah bulan dan tanggal yang dimasukkan lebih besar atau sama dengan tanggal mulai periode zodiak.
(bln == zodiak[i].end_bulan && tgl <= zodiak[i].end_tanggal): Memeriksa apakah bulan dan tanggal yang dimasukkan lebih kecil atau sama dengan tanggal akhir periode zodiak.
(bln > zodiak[i].start_bulan && bln < zodiak[i].end_bulan): Memeriksa apakah bulan berada di antara bulan mulai dan bulan akhir periode zodiak.
Jika salah satu kondisi di atas terpenuhi, maka fungsi return zodiak[i].nama; akan mengembalikan nama zodiak yang sesuai dengan rentang tanggal yang diberikan.

Jika tidak ada yang cocok, maka fungsi return "Invalid"; akan mengembalikan string "Invalid" yang menandakan input tanggal atau bulan tidak valid.

#### 3. Fungsi main
main adalah fungsi utama program.

Variabel tgl, bln, dan thn digunakan untuk menyimpan input tanggal, bulan, dan tahun dari pengguna.

Program meminta pengguna untuk memasukkan tanggal lahir mereka dalam format tgl-bln-tahun (misalnya, 5-10-1990 untuk 5 Oktober 1990).

scanf("%d-%d-%d", &tgl, &bln, &thn); digunakan untuk membaca input dari pengguna dan menyimpannya ke dalam variabel tgl, bln, dan thn.

Fungsi get_zodiak(tgl, bln) dipanggil untuk menentukan zodiak berdasarkan input tanggal dan bulan. Hasilnya disimpan dalam variabel zodiak.

Hasil zodiak ditampilkan dengan printf("Zodiak Anda adalah : %s\n", zodiak);

Program mengembalikan nilai 0 yang menandakan program berhasil dijalankan.

 ### LATIHAN 3
#### 1. Struktur Data Mahasiswa
struct Mahasiswa adalah struktur yang digunakan untuk menyimpan informasi mengenai seorang mahasiswa.
npm[15]: Menyimpan Nomor Pokok Mahasiswa (NPM), dengan panjang maksimal 14 karakter (1 karakter untuk null terminator).
nama[50]: Menyimpan nama mahasiswa, dengan panjang maksimal 49 karakter.
tgl_lahir[15]: Menyimpan tanggal lahir mahasiswa dalam format dd-mm-yyyy, dengan panjang maksimal 14 karakter.
alamat[100]: Menyimpan alamat mahasiswa, dengan panjang maksimal 99 karakter.
hp[15]: Menyimpan nomor handphone mahasiswa, dengan panjang maksimal 14 karakter.

#### 2. Deklarasi Variabel
struct Mahasiswa mhs[100]; // Array untuk menyimpan data mahasiswa
int count = 0; // Untuk menghitung jumlah mahasiswa yang sudah dimasukkan
char lagi; // Untuk mengecek apakah pengguna ingin memasukkan data lagi
mhs[100]: Ini adalah array yang dapat menampung hingga 100 data mahasiswa, dengan setiap elemen merupakan tipe struct Mahasiswa.
count: Variabel untuk menghitung berapa banyak data mahasiswa yang telah dimasukkan. Ini akan digunakan sebagai indeks untuk menyimpan data mahasiswa berikutnya di dalam array.
lagi: Variabel yang digunakan untuk menyimpan jawaban pengguna (apakah ingin memasukkan data lagi atau tidak).

#### 3. Input Data Mahasiswa
} while(lagi == 'y' || lagi == 'Y'); // Jika 'y' atau 'Y' maka akan meminta input lagi
Loop do-while digunakan untuk memastikan program terus meminta input dari pengguna sampai mereka memutuskan untuk berhenti (yaitu, saat pengguna memilih bukan "y" atau "Y").
scanf("%s", mhs[count].npm);: Digunakan untuk membaca NPM dari pengguna.
getchar();: Digunakan untuk membersihkan karakter newline (\n) yang tersisa dalam input buffer setelah memasukkan data sebelumnya (misalnya setelah scanf).
fgets(mhs[count].nama, sizeof(mhs[count].nama), stdin);: Digunakan untuk membaca nama mahasiswa, yang memungkinkan input lebih dari satu kata (misalnya, nama lengkap).
mhs[count].nama[strcspn(mhs[count].nama, "\n")] = 0;: Menghapus karakter newline (\n) yang mungkin dimasukkan oleh fgets.
scanf("%s", mhs[count].tgl_lahir);: Membaca tanggal lahir mahasiswa dalam format dd-mm-yyyy.
fgets(mhs[count].alamat, sizeof(mhs[count].alamat), stdin);: Membaca alamat mahasiswa.
mhs[count].alamat[strcspn(mhs[count].alamat, "\n")] = 0;: Menghapus karakter newline dari alamat yang dimasukkan.
scanf("%s", mhs[count].hp);: Membaca nomor HP mahasiswa.
count++: Menambahkan nilai count untuk menunjuk ke indeks berikutnya dalam array mhs.
scanf(" %c", &lagi);: Menanyakan kepada pengguna apakah mereka ingin memasukkan data lagi. Penambahan spasi sebelum %c bertujuan untuk menghindari masalah dengan newline yang tersisa di input buffer setelah input sebelumnya.

#### 4. Menampilkan Data Mahasiswa
Setelah data mahasiswa selesai dimasukkan, program akan menampilkan seluruh data yang telah dimasukkan.
for (int i = 0; i < count; i++): Loop ini digunakan untuk menampilkan semua data mahasiswa yang telah dimasukkan, berdasarkan jumlah yang disimpan di count.
printf("%s %s %s %s %s\n", mhs[i].npm, mhs[i].nama, mhs[i].tgl_lahir, mhs[i].alamat, mhs[i].hp);: Menampilkan informasi mahasiswa yang disimpan di array mhs pada indeks i.

#### 5. Program Berakhir
Program akan berhenti setelah menampilkan semua data mahasiswa yang telah dimasukkan.

### MODUL 11 FIle Handling in C

### LATIHAN 1
#### 1. Struktur Mahasiswa
struct Mahasiswa adalah struktur yang mendefinisikan data mahasiswa.
nama[50]: Menyimpan nama mahasiswa. Panjangnya bisa sampai 49 karakter.
nim[20]: Menyimpan NIM (Nomor Induk Mahasiswa) mahasiswa. Panjangnya bisa sampai 19 karakter.
jurusan[50]: Menyimpan jurusan yang diambil oleh mahasiswa. Panjangnya bisa sampai 49 karakter.
program_studi[50]: Menyimpan program studi yang diambil oleh mahasiswa. Panjangnya bisa sampai 49 karakter.

#### 2. Mendeklarasikan Variabel
int jumlah, i;
jumlah: Variabel untuk menyimpan jumlah mahasiswa yang ingin diinputkan oleh pengguna.
i: Variabel indeks untuk perulangan dalam menginput data mahasiswa.

#### 3. Input Jumlah Mahasiswa
printf("Masukkan jumlah mahasiswa yang ingin ditambahkan: ");
scanf("%d", &jumlah);
Program meminta pengguna untuk memasukkan jumlah mahasiswa yang ingin ditambahkan. Input ini digunakan untuk menentukan berapa banyak data yang akan dimasukkan.

#### 4. Membuka File untuk Menulis
FILE *file = fopen("datamahasiswa.txt", "w");
if (file == NULL) {
    printf("Tidak bisa membuka file untuk menulis.\n");
    return 1; // Keluar jika file tidak bisa dibuka
}
Program membuka file bernama datamahasiswa.txt untuk menulis data menggunakan fopen(). Mode "w" digunakan untuk membuka file dalam mode tulis. Jika file tidak dapat dibuka (misalnya, karena kesalahan pada sistem file), maka program akan mencetak pesan kesalahan dan keluar dengan kode status 1.

#### 5. Mendeklarasikan Array Struktur untuk Menyimpan Data
struct Mahasiswa mhs[jumlah];
Program mendeklarasikan array mhs yang berisi jumlah elemen dari struktur Mahasiswa. Setiap elemen array ini akan menyimpan data untuk seorang mahasiswa.

#### 6. Perulangan untuk Input Data Mahasiswa
for (i = 0; i < jumlah; i++): Perulangan dilakukan sebanyak jumlah kali sesuai dengan jumlah mahasiswa yang ingin dimasukkan.
Setiap iterasi perulangan meminta pengguna untuk memasukkan data mahasiswa, seperti nama, NIM, jurusan, dan program studi.
fgets() digunakan untuk membaca input string dengan aman, karena scanf() tidak dapat membaca input yang mengandung spasi. Fungsi ini memungkinkan input lebih dari satu kata (misalnya, nama lengkap atau alamat).
strcspn(mhs[i].nama, "\n"): Fungsi ini digunakan untuk menghapus karakter newline (\n) yang ditambahkan oleh fgets() setelah pengguna menekan tombol Enter.

#### 7. Menulis Data ke File
Program menggunakan fprintf() untuk menulis data mahasiswa yang telah dimasukkan ke dalam file datamahasiswa.txt.
Setiap data mahasiswa ditulis dengan format tertentu, seperti nama, NIM, jurusan, dan program studi, diikuti dengan pemisah antar mahasiswa untuk setiap entri baru.
fprintf() sangat mirip dengan printf(), namun menulis output ke file yang ditentukan, bukan ke layar.

#### 8. Menutup File
fclose(file);
Setelah seluruh data mahasiswa berhasil ditulis ke dalam file, program menutup file dengan fclose(file). Ini penting untuk memastikan bahwa file ditutup dengan benar setelah operasi selesai.

#### 9. Pesan Sukses
printf("\nSemua data mahasiswa telah berhasil disimpan ke dalam file 'datamahasiswa.txt'.\n");
Program memberi tahu pengguna bahwa semua data mahasiswa telah berhasil disimpan ke dalam file datamahasiswa.txt.

### LATIHAN 2
Setelah menjalankan program di atas, output yang akan ditampilkan di layar adalah:

Data Mahasiswa ke-1
Nama: John Doe
NIM: 123456
Jurusan: Teknik Informatika
Program Studi: S1 Teknik Informatika

Data Mahasiswa ke-2
Nama: Jane Smith
NIM: 654321
Jurusan: Teknik Elektro
Program Studi: S1 Teknik Elektro

