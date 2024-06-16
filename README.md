# Simulasi Manajemen Krisis Kesehatan di Bumi

Simulasi Manajemen Krisis Kesehatan adalah program berbasis teks yang memodelkan penyebaran virus dan upaya menjaga kesehatan pasien selama sepuluh hari. Pemain diharuskan membuat keputusan harian untuk memastikan pasien tetap hidup.

## Fitur

- **Skenario Penyebaran Virus**: Memodelkan penyebaran virus dari hari kedua hingga hari kesepuluh.
- **Manajemen Kesehatan Pasien**: Pemain harus memprioritaskan pasien untuk diberikan obat setiap harinya.
- **Keputusan Harian**: Setiap keputusan akan mempengaruhi kelangsungan hidup pasien dan kondisi keseluruhan Bumi.
- **Informasi Harian**: Menampilkan status virus dan jumlah pasien yang masih hidup setiap harinya.
- **Tantangan Realistis**: Menguji kemampuan pemain dalam mengambil keputusan cepat dan tepat di bawah tekanan.

## Aturan Permainan

1. **Hari Pertama**: Semua pasien memiliki health point (HP) penuh sebesar 100, tanpa ancaman virus.
2. **Hari Kedua hingga Kesepuluh**:
   - Virus mulai menyebar, mengurangi HP pasien sebesar 20 setiap harinya.
   - HP pasien diacak dan dapat menurun drastis tanpa pengobatan.
   - Pemain hanya dapat memberikan obat kepada satu pasien per hari.
   - Jika HP pasien mencapai nol, pasien tersebut akan meninggal.
3. **Kondisi Menang dan Kalah**:
   - Jika semua pasien mati sebelum hari ketujuh, permainan berakhir dengan kegagalan.
   - Jika setidaknya satu pasien tetap hidup hingga hari ketujuh, permainan berakhir dengan keberhasilan.

## Cara Bermain

1. **Setup**: Pastikan Anda telah menginstal Python di sistem Anda.
2. **Menjalankan Simulasi**:
   ```bash
   python simulasi_krisis_kesehatan.py
