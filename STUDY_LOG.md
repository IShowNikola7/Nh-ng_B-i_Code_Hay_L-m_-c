# STUDY LOG & AI MENTOR CONTEXT

> **Hướng dẫn cho AI đọc repo này:** Tôi đang học lập trình C/C++ nền tảng. Hãy tuân thủ lộ trình **"Nền tảng trước, Công cụ sau"**. Khi tiếp tục dạy, hãy đọc file này và kiểm tra code thực tế trên GitHub; không suy luận tiến độ chỉ từ tên file. Hướng dẫn từng bước, để tôi tự viết trước khi đưa lời giải hoàn chỉnh.

---

## 1. Quy tắc lộ trình & Tổ chức tệp
- **Lộ trình "Nền tảng trước, Công cụ sau":** Không cấm tuyệt đối `std::vector`, `std::string` hay `<cstring>`, nhưng **bắt buộc phải rèn bản chất C-style thuần trước** (mảng tĩnh, `char[]`, con trỏ, cấp phát động). Chỉ khi tôi đã nắm vững phần nền tảng của chuyên đề, AI mới được mở khóa và cho phép dùng thư viện có sẵn.
- **Tổ chức tệp linh hoạt theo quy mô:**
  - Bài thuật toán nhỏ (1–2 hàm xử lý): Viết gọn trong **1 tệp `ten_bai.cpp`** ngay trong thư mục chuyên đề (vẫn tách hàm logic riêng khỏi `main()`).
  - Bài tổng hợp lớn (từ 3 hàm trở lên, có `struct`, đọc/ghi file): Tách chuẩn **3 tệp** (`ten_bai.h` có include guard, `ten_bai.cpp`, `main.cpp`).
- **An toàn dữ liệu:** Dùng `const` / `const &` cho mọi tham số chỉ đọc khi phù hợp với kiểu dữ liệu và yêu cầu bài.

---

## 2. Vai trò các thư mục trong Repo
- `utils/` : Thư viện hàm dùng chung.
- `01_mang_1_chieu/`, `02_mang_2_chieu/`, `03_chuoi_ky_tu/`, `04_struct/`, `05_doc_ghi_file/`, `06_con_tro_cap_phat_dong/` : Các chuyên đề học tập chuẩn hóa.
- `baitoangemini/` : **Bãi thử nghiệm tổng hợp tự do**, chứa các bài tập LeetCode, giải thuật đa dạng, bài code luyện tập hằng ngày hoặc bài tổng hợp không giới hạn chuyên đề.

---

## 3. Đánh giá trình độ & Kiến thức còn thiếu
- **Mảng 1 chiều (Nắm cơ bản — Chưa mở khóa `std::vector`):** Đã biết duyệt, tìm kiếm, xóa phần tử, mảng tần suất `cnt[256]`, hai chỉ số (`read`/`write`), ngăn xếp bằng mảng tĩnh. *Còn thiếu: Cần nắm vững con trỏ và cấp phát động trước khi dùng `std::vector`.*
- **Mảng 2 chiều (Nắm cơ bản):** Đã làm nhập/xuất, sắp xếp hàng/cột, hoán vị, chuyển vị, xoay ma trận. *Còn thiếu: Kiểm tra điều kiện ma trận vuông khi chuyển vị tại chỗ và chuẩn hóa số lần xoay âm.*
- **Chuỗi ký tự `char[]` (Đang học nền tảng — Chưa mở khóa `std::string` / `<cstring>`):**
  - Đã hiểu ký tự kết thúc chuỗi `'\\0'`, `cin.getline()`, cách duyệt chuỗi đến `'\\0'`.
  - Đã hoàn thành `trimspace`: xử lý trực tiếp trên mảng bằng hai chỉ số `read`/`write`; bỏ khoảng trắng đầu/cuối và gộp nhiều khoảng trắng liên tiếp thành một. Hiểu cách bỏ qua cả nhóm dấu cách trước khi ghi một dấu cách nếu phía sau còn ký tự.
  - Đã hoàn thành logic `countWords`: dùng cờ `bool inWord` để chỉ tăng bộ đếm khi bắt đầu một từ; gặp dấu cách thì đặt lại trạng thái. Đã sửa vòng lặp để dừng tại `'\\0'`, không cần `strlen()`.
  - **Việc nhỏ còn lại:** Xóa `#include <cstring>` thừa trong `countwords.cpp` (lần kiểm tra GitHub gần nhất vẫn còn dòng này).
  - **Chưa làm:** `myStrcpy`, `myStrcmp`; cần tự cài đặt thủ công, không dùng hàm thư viện tương ứng.
- **Struct (Đang củng cố):** Biết khai báo `struct`, mảng `struct`. *Còn thiếu: Thói quen truyền tham chiếu `Struct &` khi sửa dữ liệu và `const Struct &` khi chỉ đọc.*
- **Đọc / Ghi File văn bản (Còn yếu — Cần luyện kỹ):** Biết mở/đóng `ifstream`/`ofstream` và dùng `ignore()`. *Còn thiếu: Chia nhỏ hàm đọc/ghi từng đối tượng (`writeStudent`), đọc file không biết trước số lượng (`while (fin >> ...)` / `getline` đến EOF).*
- **Con trỏ & Cấp phát động (Chưa thạo — Trọng tâm sắp tới):** Mới biết sơ `&`, `*`. *Còn thiếu: Con trỏ với mảng/chuỗi, cấp phát động `new`/`delete`, mảng động 1D/2D.*

---

## 4. Danh sách bẫy & Lỗi cũ cần soi kỹ khi Review
1. **Tham trị vs Tham chiếu:** Truyền `Struct a` thay vì `Struct &a` khi hàm cần sửa dữ liệu gốc; quên dấu `[]` khi truyền mảng.
2. **Vòng lặp & trạng thái:** Phân biệt điều kiện bắt đầu từ mới với các ký tự tiếp theo; với `countWords`, không tăng bộ đếm cho từng ký tự trong cùng một từ.
3. **Khởi tạo biến đếm/chỉ số:** Quên khởi tạo giá trị đầu hoặc khai báo nhầm biến đếm bên trong vòng lặp.
4. **Chuỗi thiếu `'\\0'` & Biên ma trận:** Quên tự đóng `'\\0'` khi sao chép chuỗi thủ công; chuyển vị tại chỗ trên ma trận không vuông (`rows != cols`).
5. **Tệp rác Git:** Tránh đẩy nhầm tệp `.exe` lên repository.

---

## 5. Tiến độ & Nhiệm vụ hiện tại
- [x] Dựng khung thư mục chuẩn, cấu trúc README và `baitoangemini/`.
- [x] **`trimspace`** — hoàn thành và đã review logic trên GitHub.
- [x] **`countWords`** — logic hoàn thành và đã review trên GitHub; còn việc dọn `#include <cstring>` thừa.
- [ ] **Bài tiếp theo: `myStrcpy`** — tự cài đặt sao chép `src` sang `dest`, bao gồm cả ký tự `'\\0'`, không dùng `strcpy()`.
- [ ] **Sau đó: `myStrcmp`** — tự cài đặt so sánh hai chuỗi, không dùng `strcmp()`.
- [ ] **Chặng 2 (`04_struct/` & `05_doc_ghi_file/`):** Hoàn thiện bài quản lý sinh viên và luyện đọc/ghi file đến EOF.
- [ ] **Chặng 3 (`06_con_tro_cap_phat_dong/`):** Luyện con trỏ và cấp phát động trước khi mở khóa `std::vector`.

---

## 6. Nhật ký cập nhật gần nhất — 2026-11-19
- `trimspace.cpp`: Đã chuyển sang cách B: khi gặp dấu cách, bỏ qua cả nhóm dấu cách; chỉ ghi một dấu cách nếu sau nhóm đó vẫn còn ký tự. Không cần xóa dấu cách cuối bằng bước riêng.
- `countwords.cpp`: Đã bỏ `strlen()`; vòng lặp duyệt trực tiếp đến `'\\0'`. Logic `inWord` hoạt động đúng với chuỗi rỗng, toàn dấu cách, nhiều dấu cách, dấu cách đầu/cuối.
- Khái niệm vừa học: biến trạng thái `bool inWord` có thể dùng trong nhiều thuật toán độc lập; mỗi hàm có trạng thái cục bộ riêng, không xung đột với hàm khác.
- Bài đang học kế tiếp: `myStrcpy`.
