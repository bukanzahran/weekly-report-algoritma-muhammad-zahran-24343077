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



