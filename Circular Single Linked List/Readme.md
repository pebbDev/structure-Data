# Circular Single Linked List

## Apa Itu Circular Linked List?

Circular Linked List adalah sekumpulan node atau simpul yang tersusun secara berurutan. Keunikan dari Circular Linked List adalah tidak adanya NULL pada satupun nodenya. Ini berbeda dengan Single Linked List konvensional dimana node terakhir menunjuk ke NULL.

## Struktur Node Circular Single Linked List

Bentuk node pada Circular Single Linked List mirip dengan Single Linked List. Setiap node terdiri dari dua bagian utama:

1. **Data**: Bagian ini menyimpan informasi atau nilai yang ingin disimpan dalam list.
2. **Pointer Next**: Bagian ini adalah pointer yang menunjuk ke node berikutnya dalam list.

## Keunikan Circular Single Linked List

Perbedaan utama antara Circular Linked List dan Single Linked List adalah pada node terakhir:

- **Single Linked List**: Node terakhir menunjuk ke NULL.
- **Circular Single Linked List**: Node terakhir tidak menunjuk ke NULL, melainkan menunjuk kembali ke node pertama dalam list. Ini menciptakan suatu siklus atau lingkaran, sehingga list menjadi "circular".

## Manfaat Circular Single Linked List

Penggunaan Circular Linked List dapat mempermudah implementasi beberapa algoritma dan struktur data, seperti:

- **Antrian (Queue)**: Implementasi antrian dengan memanfaatkan Circular Linked List dapat membuat operasi enqueuing dan dequeuing lebih efisien.
- **Penyimpanan Ringan**: Karena tidak ada NULL dalam list, pengelolaan memori bisa menjadi lebih efisien dalam beberapa kasus.
- **Iterasi Tanpa Batas Akhir**: Dengan struktur siklus, iterasi melalui list dapat dilakukan tanpa harus memeriksa akhir dari list.

Dengan memahami konsep dan keunikan dari Circular Single Linked List, Anda dapat memanfaatkannya dalam berbagai implementasi algoritma dan aplikasi yang memerlukan struktur data yang fleksibel dan efisien.