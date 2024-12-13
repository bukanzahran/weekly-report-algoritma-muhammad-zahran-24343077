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



📘 Resume: Variabel, Konstanta, & Tipe Data

🎯 Tujuan Pembelajaran

Mempelajari dasar-dasar pemrograman dalam bahasa C dengan fokus pada:

Variabel: Menyimpan data untuk digunakan dalam program.

Konstanta: Nilai tetap yang tidak dapat diubah selama eksekusi program.

Tipe Data: Mengelompokkan jenis data untuk pengolahan yang sesuai.

Type Casting: Mengonversi tipe data satu ke yang lain.

Keywords: Kata kunci bawaan dalam bahasa C.

🔗 Pokok Materi

1. Variabel

Definisi: Variabel adalah tempat untuk menyimpan nilai yang dapat berubah selama program berjalan.

Cara Penulisan: Tipe data diikuti nama variabel, misalnya:

int tinggi;
float berat = 49.5;

Aturan Penulisan:

Nama variabel tidak boleh dimulai dengan angka atau simbol.

Tidak boleh menggunakan kata kunci bawaan.

Case-sensitive (misalnya, nama dan Nama adalah variabel yang berbeda).

Gunakan underscore (‘_’) untuk nama variabel yang lebih dari satu kata, misalnya: nama_lengkap.

2. Konstanta

Definisi: Variabel yang nilainya tetap sepanjang program.

Cara Penulisan:

Menggunakan ****#defineContoh:

#define PHI 3.14

Menggunakan ****constContoh:

const float PHI = 3.14;

Catatan: Nama konstanta biasanya menggunakan huruf kapital untuk membedakannya.

3. Tipe Data Fundamental

Definisi: Jenis data yang dapat disimpan dalam variabel.

Jenis-Jenis Tipe Data di C:

Char: Menyimpan satu karakter, misalnya: 'A'.

Integer: Menyimpan bilangan bulat, misalnya: 100.

Float: Menyimpan bilangan desimal, misalnya: 3.14.

Double: Mirip dengan float, tetapi memiliki presisi lebih tinggi.

Void: Menunjukkan ketiadaan nilai.

Format Penulisan:

Gunakan tanda petik tunggal untuk char ('A').

Gunakan titik (.) untuk bilangan desimal (3.14).

Untuk mencetak float dengan presisi dua angka, gunakan:

printf("%.2f", nilai_float);

4. Type Casting

Definisi: Mengubah tipe data dari satu jenis ke jenis lainnya.

Contoh:

int a = 10;
float b = (float) a; // Mengubah integer menjadi float

Catatan:
Jika operasi dilakukan antara dua integer, hasilnya akan dibulatkan ke bawah.

5. Keywords

Definisi: Kata-kata yang telah ditentukan oleh bahasa C untuk fungsi tertentu, seperti:

int, float, return, if, else, dll.

Catatan: Kata kunci ini tidak dapat digunakan sebagai nama variabel atau fungsi.

📊 Contoh Latihan

1. Konversi Rupiah ke Dollar

Buat program untuk menghitung nilai tukar Rupiah ke Dollar, dengan asumsi:

1 Dollar = Rp 14.250.

Input: Rp 2.500.000.

Output: Berapa Dollar yang harus diberikan.

Contoh kode:

#include <stdio.h>
#define KURS 14250

int main() {
    int rupiah = 2500000;
    float dollar = (float)rupiah / KURS;
    printf("Rp %d setara dengan $%.2f\n", rupiah, dollar);
    return 0;
}

2. Konversi Suhu

Mengonversi suhu dari Celcius ke Kelvin, Fahrenheit, dan Reamur menggunakan rumus:

Kelvin: k = c + 273.15

Fahrenheit: f = (c * 1.8) + 32

Reamur: r = c * 0.8

Contoh kode:

#include <stdio.h>

int main() {
    float celcius, kelvin, fahrenheit, reamur;
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &celcius);

    kelvin = celcius + 273.15;
    fahrenheit = (celcius * 1.8) + 32;
    reamur = celcius * 0.8;

    printf("Kelvin: %.2f\n", kelvin);
    printf("Fahrenheit: %.2f\n", fahrenheit);
    printf("Reamur: %.2f\n", reamur);

    return 0;
}

3. Menghitung Volume dan Luas Permukaan Bola

Diketahui: Diameter bola = 12 cm.

Rumus:

Volume: V = (4/3) * π * r^3

Luas Permukaan: A = 4 * π * r^2

Contoh kode:

#include <stdio.h>
#define PHI 3.14

int main() {
    float diameter = 12.0;
    float radius = diameter / 2.0;
    float volume = (4.0/3.0) * PHI * radius * radius * radius;
    float luas_permukaan = 4 * PHI * radius * radius;

    printf("Volume bola: %.2f cm^3\n", volume);
    printf("Luas permukaan bola: %.2f cm^2\n", luas_permukaan);

    return 0;
}

