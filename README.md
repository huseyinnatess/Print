# C++ Print Kütüphanesi

Bu C++ kütüphanesi, çeşitli veri tiplerini konsola yazdırmak için basit ve esnek bir yol sunar. Tanımlı renk makroları kullanarak isteğe bağlı olarak renkli yazdırmayı destekler ve yeni satıra geçmeden yazdırma işlemi yapan `write` fonksiyonunu içerir. Kütüphane, şablon yapısı sayesinde farklı veri tiplerine uyum sağlayacak şekilde tasarlanmıştır.

## Özellikler

- **Tür Güvenli Yazdırma:** Şablon fonksiyonlar aracılığıyla farklı veri tiplerini otomatik olarak işler.
- **İsteğe Bağlı Renkli Yazdırma:** Tanımlı makroları kullanarak farklı renklerde yazdırma yapabilirsiniz.
- **Write Fonksiyonu:** Yeni satıra geçmeden metin yazdırır.
- **Kullanım Kolaylığı:** Renkli veya renksiz yazdırma için basit sözdizimi.

## Kurulum

Projenize `print.hpp` başlık dosyasını dahil edin:

```cpp
#include "print.hpp"
```

## Kullanım

### Temel Yazdırma

`int`, `float`, `string` ve daha fazlası gibi temel tipleri yazdırabilirsiniz:

```cpp
print("Merhaba, Dünya!");
int sayi = 42;
print(sayi);

### Renkli Yazdırma

Metni renkli yazdırmak için renk makrosunu ikinci argüman olarak geçirebilirsiniz:

```cpp
print("Bu kırmızı bir yazı!", RED);
print("Bu yeşil bir yazı!", GREEN);
print("Bu sarı bir yazı!", YELLOW);
print("Bu mavi bir yazı!", BLUE);
```

### Write Fonksiyonunu Kullanma

Yeni satıra geçmeden yazdırmak isterseniz `write` fonksiyonunu kullanabilirsiniz:

```cpp
write("Bu yazı yeni satıra geçmeyecek. ");
write("Bu aynı satırda.");
```

## Örnek

Kütüphaneyi basit bir programda nasıl kullanabileceğinizi gösteren bir örnek:

```cpp
#include "print.hpp"

int main() {
    // Yeşil renkte hoş geldiniz mesajı
    print("C++ Print Kütüphanesi'ne hoş geldiniz!", GREEN);
    
    int puan = 100;
    // Sarı renkte puan mesajı
    print("Puanınız: ", puan, YELLOW);
    
    // Yeni satıra geçmeden yazdırma
    write("Yükleniyor...");
    // Yükleme simülasyonu
    write("Tamamlandı!\n", BLUE);
    
    return 0;
}
```
