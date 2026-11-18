# STUDY LOG & AI MENTOR CONTEXT

> **Hướng dẫn cho AI đọc repo này:** Tôi đang học lập trình C/C++ nền tảng trên đại học. Hãy tuân thủ lộ trình **"Nền tảng trước, Công cụ sau"** và soi kỹ các phần kiến thức tôi còn thiếu bên dưới.

---

## 1. Quy tắc lộ trình & Tổ chức tệp
- **Lộ trình "Nền tảng trước, Công cụ sau":** Không cấm tuyệt đối `std::vector`, `std::string` hay `<cstring>`, nhưng **bắt buộc phải rèn bản chất C-style thuần trước** (mảng tĩnh, `char[]`, con trỏ, cấp phát động). Chỉ khi tôi đã nắm vững phần nền tảng của chuyên đề, AI mới được mở khóa và cho phép dùng thư viện có sẵn.
- **Tổ chức tệp linh hoạt theo quy mô:**
  - Bài thuật toán nhỏ (1–2 hàm xử lý): Viết gọn trong **1 tệp `XX_ten_bai.cpp`** ngay trong thư mục chuyên đề (vẫn tách hàm logic riêng khỏi `main()`).
  - Bài tổng hợp lớn (từ 3 hàm trở lên, có `struct`, đọc/ghi file): Tách chuẩn **3 tệp** (`ten_bai.h` có include guard, `ten_bai.cpp`, `main.cpp`).
- **An toàn dữ liệu:** Bắt buộc dùng `const` / `const &` cho mọi tham số chỉ đọc.

---

## 2. Vai trò các thư mục trong Repo
- `utils/` : Thư viện hàm dùng chung.
- `01_mang_1_chieu/`, `02_mang_2_chieu/`, `03_chuoi_ky_tu/`, `04_struct/`, `05_doc_ghi_file/`, `06_con_tro_cap_phat_dong/` : Các chuyên đề học tập chuẩn hóa.
- `baitoangemini/` : **Bãi thử nghiệm tổng hợp tự do**, chứa các bài tập LeetCode, giải thuật đa dạng, bài code luyện tập hằng ngày hoặc bài tổng hợp không giới hạn chuyên đề.

---

## 3. Đánh giá trình độ & Kiến thức còn thiếu
- **Mảng 1 chiều (Nắm cơ bản — Chưa mở khóa `std::vector`):** Đã biết duyệt, tìm kiếm, xóa phần tử, mảng tần suất `cnt[256]`, hai chỉ số (`read`/`write`), ngăn xếp bằng mảng tĩnh. *Còn thiếu: Cần nắm vững con trỏ và cấp phát động trước khi dùng `std::vector`.*
- **Mảng 2 chiều (Nắm cơ bản):** Đã làm nhập/xuất, sắp xếp hàng/cột, hoán vị, chuyển vị, xoay ma trận. *Còn thiếu: Kiểm tra điều kiện ma trận vuông khi chuyển vị tại chỗ và chuẩn hóa số lần xoay âm.*
- **Chuỗi ký tự `char[]` (Đang hoàn thiện nền tảng — Chưa mở khóa `std::string` / `<cstring>`):** Đã nắm `'\0'`, `cin.getline()`, cờ trạng thái `bool inWord`. *Còn thiếu: Tự cài đặt thuần thục các hàm thao tác chuỗi nền tảng (`countWords`, `myStrcpy`, `myStrcmp`).*
- **Struct (Đang củng cố):** Biết khai báo `struct`, mảng `struct`. *Còn thiếu: Thói quen truyền tham chiếu `Struct &` khi sửa dữ liệu và `const Struct &` khi chỉ đọc.*
- **Đọc / Ghi File văn bản (Còn yếu — Cần luyện kỹ):** Biết mở/đóng `ifstream`/`ofstream` và dùng `ignore()`. *Còn thiếu: Chia nhỏ hàm đọc/ghi từng đối tượng (`writeStudent`), đọc file không biết trước số lượng (`while (fin >> ...)` / `getline` đến EOF).*
- **Con trỏ & Cấp phát động (Chưa thạo — Trọng tâm sắp tới):** Mới biết sơ `&`, `*`. *Còn thiếu: Con trỏ với mảng/chuỗi, cấp phát động `new`/`delete`, mảng động 1D/2D.*

---

## 4. Danh sách bẫy & Lỗi cũ cần soi kỹ khi Review
1. **Tham trị vs Tham chiếu:** Truyền `Struct a` thay vì `Struct &a` khi hàm cần sửa dữ liệu gốc; quên dấu `[]` khi truyền mảng.
2. **Vòng lặp & `strtok`:** Quên gọi tiếp `ptr = strtok(NULL, " ")` trong `while` gây lặp vô tận; hoặc `strtok` chèn `'\0'` cắt nát chuỗi gốc.
3. **Khởi tạo biến đếm/chỉ số:** Quên khởi tạo giá trị đầu (`int read, write = 0;`) hoặc khai báo nhầm biến đếm bên trong vòng lặp.
4. **Chuỗi thiếu `'\0'` & Biên ma trận:** Quên tự đóng `'\0'` khi sao chép chuỗi thủ công; chuyển vị tại chỗ trên ma trận không vuông (`rows != cols`).
5. **Tệp rác Git:** Tránh đẩy nhầm tệp `.exe` lên repository.

---

## 5. Tiến độ & Nhiệm vụ hiện tại
- [x] Dựng khung thư mục chuẩn, cấu trúc README và `baitoangemini/`.
- [ ] **Chặng 1 (`03_chuoi_ky_tu/01_xu_ly_chuoi_co_ban/`):** Tách 3 tệp tự cài đặt `countWords`, `myStrcpy`, `myStrcmp` (không dùng `<cstring>`) để mở khóa thư viện chuỗi.
- [ ] **Chặng 2 (`04_struct/` & `05_doc_ghi_file/`):** Hoàn thiện bài quản lý sinh viên và luyện đọc/ghi file đến EOF.
- [ ] **Chặng 3 (`06_con_tro_cap_phat_dong/`):** Luyện con trỏ và cấp phát động trước khi mở khóa `std::vector`.