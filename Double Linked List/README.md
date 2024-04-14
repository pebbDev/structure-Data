# Double Linked List Documentation

## Apa itu Double Linked List?

Double Linked List adalah struktur data linear yang terdiri dari sejumlah elemen atau node. Setiap node memiliki dua pointer, yaitu pointer yang menunjuk ke node sebelumnya (Prev) dan pointer yang menunjuk ke node selanjutnya (Next).

## Struktur Node

```cpp
struct DataUser {
  string nama, username, email, password;
  DataUser *prev;
  DataUser *next;
};
```

Setiap node memiliki empat data informasi yaitu nama, username, email, dan password serta dua pointer yang menunjuk ke node sebelumnya dan selanjutnya.

## Fungsi-Fungsi pada Double Linked List

### 1. Create Double Linked List

Membuat Double Linked List dengan satu node.

```cpp
void createDoubleLinkedList(string data[4]) {
  head = new DataUser();
  head->nama = data[0];
  head->username = data[1];
  head->email = data[2];
  head->password = data[3];
  head->prev = NULL;
  head->next = NULL;
  tail = head;
}
```

### 2. Count Double Linked List

Menghitung jumlah node pada Double Linked List.

```cpp
int countDoubleLinkedList() {
  if (head == NULL) {
    cout << "Double Linked List belum dibuat!!!";
    return 0; 
  } else {
    cur = head;
    int jumlah = 0;
    while (cur != NULL) {
      jumlah++;
      cur = cur->next;
    }
    return jumlah;
  }
}
```

### 3. Add First

Menambahkan node baru pada awal Double Linked List.

```cpp
void addFirst(string data[4]) {
  if (head == NULL) {
    cout << "Double Linked List belum dibuat!!!";
  } else {
    newNode = new DataUser();
    newNode->nama = data[0];
    newNode->username = data[1];
    newNode->email = data[2];
    newNode->password = data[3];
    newNode->prev = NULL;
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
  }
}
```

### 4. Add Last

Menambahkan node baru pada akhir Double Linked List.

```cpp
void addLast(string data[4]) {
  if (head == NULL) {
    cout << "Double Linked List belum dibuat!!!";
  } else {
    newNode = new DataUser();
    newNode->nama = data[0];
    newNode->username = data[1];
    newNode->email = data[2];
    newNode->password = data[3];
    newNode->prev = tail;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
  }
}
```

### 5. Add Middle

Menambahkan node baru pada posisi tengah Double Linked List.

```cpp
void addMiddle(string data[4], int posisi) {
  if (head == NULL) {
    cout << "Double Linked List belum dibuat!!!";
  } else {

    if (posisi == 1) {
      cout << "Posisi 1 itu bukan posisi tengah!!!" << endl;
    } else if (posisi < 1 || posisi > countDoubleLinkedList()) {
      cout << "Posisi diluar jangkauan!!!" << endl;
    } else {
      newNode = new DataUser();
      newNode->nama = data[0];
      newNode->username = data[1];
      newNode->email = data[2];
      newNode->password = data[3];

      cur = head;
      int nomor = 1;
      while (nomor < posisi - 1) {
        cur = cur->next;
        nomor++;
      }

      afterNode = cur->next;
      newNode->prev = cur;
      newNode->next = afterNode;
      cur->next = newNode;
      afterNode->prev = newNode;
    }
  }
}
```

### 6. Remove First

Menghapus node pertama pada Double Linked List.

```cpp
void removeFirst() {
  if (head == NULL) {
    cout << "Double Linked List belum dibuat!!!";
  } else {
    del = head;
    head = head->next;
    if (head != NULL) {
      head->prev = NULL;
    }
    delete del;
  }
}
```

### 7. Remove Last

Menghapus node terakhir pada Double Linked List.

```cpp
void removeLast() {
  if (head == NULL) {
    cout << "Double Linked List belum dibuat!!!";
  } else {
    del = tail;
    tail = tail->prev;
    if (tail != NULL) {
      tail->next = NULL;
    }
    delete del;
  }
}
```

### 8. Remove Middle

Menghapus node pada posisi tengah Double Linked List.

```cpp
void removeMiddle(int posisi) {
  if (head == NULL) {
    cout << "Double Linked List belum dibuat!!!";
  } else {
    if (posisi == 1 || posisi == countDoubleLinkedList()) {
      cout << "Posisi bukan posisi tengah!!" << endl;
    } else if (posisi < 1 || posisi > countDoubleLinkedList()) {
      cout << "Posisi diluar jangkauan!!" << endl;
    } else {
      int nomor = 1;
      cur = head;
      while (nomor < posisi - 1) {
        cur = cur->next;
        nomor++;
      }
      del = cur->next;
      afterNode = del->next;
      cur->next = afterNode;
      if (afterNode != NULL) {
        afterNode->prev = cur;
      }
      delete del;
    }
  }
}
```

### 9. Print Double Linked List

Mencetak seluruh data pada Double Linked List.

```cpp
void printDoubleLinkedList() {
  if (head == NULL) {
    cout << "Double Linked List belum dibuat!!!";
  } else {
    cout << "Jumlah Data : " << countDoubleLinkedList() << endl;
    cout << "Isi Data : " << endl;
    cur = head;
    while (cur != NULL) {
      cout << "Nama User : " << cur->nama << endl;
      cout << "Username User : " << cur->username << endl;
      cout << "Email User : " << cur->email << endl;
      cout << "Password User : " << cur->password << "\n" << endl;
      cur = cur->next;
    }
  }
}
```

## Contoh Penggunaan

```cpp
int main() {
  string newData[4] = {"Febriyadi", "feb", "febriyadi@gmail.com", "gampangAja"};
  createDoubleLinkedList(newData);

  printDoubleLinkedList();

  string data2[4] = {"Bambang", "bmb", "bambangdong@gmail.com", "dongBambang"};
  add

First(data2);

  printDoubleLinkedList();

  string data3[4] = {"Yunita", "yun", "yunita@gmail.com", "YunAja"};
  addLast(data3);

  printDoubleLinkedList();

  string data4[4] = {"Mamat Hermawan", "mam", "mamatHer@yahoo.com", "hermawanMamat"};
  addMiddle(data4, 3);

  printDoubleLinkedList();

  removeMiddle(2);

  printDoubleLinkedList();
}
```