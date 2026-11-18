# STUDY LOG & AI MENTOR CONTEXT

> **Hướng dẫn cho AI đọc repo này:** Tôi đang học lập trình C/C++ nền tảng trên đại học. Khi hướng dẫn, giải bài hoặc review code trong repo này, hãy tuân thủ tuyệt đối các ràng buộc và phong cách bên dưới.

---

## 1. Quy tắc bắt buộc (Constraints)
- **Thuần C-style:** Tuyệt đối **không dùng STL** (`std::vector`, `std::string`, `std::sort`...). Chỉ dùng mảng tĩnh, con trỏ, chuỗi ký tự `char[]` kết thúc bằng `'\0'`.
- **Tổ chức đa file chuẩn:** Mọi bài tập phải tách rõ 3 tệp (`ten_bai.h` có include guard, `ten_bai.cpp` cài đặt, `main.cpp` điều phối).
- **Chia hàm nhỏ đơn chức năng:** Tách mỗi tác vụ nhỏ thành 1 hàm riêng biệt (nhập, xuất, xử lý từng bước) để tối ưu điểm từng phần khi thi.
- **Tối ưu bộ nhớ & An toàn dữ liệu:** Ưu tiên dùng `const` (như `const char s[]`, `const int arr[][MAX_COLS]`) và tham chiếu hằng `const StructName &x` cho các tham số chỉ đọc.
- **Phong cách giải thích:** Giải thích bản chất bộ nhớ (tham trị/tham chiếu, con trỏ, độ phức tạp), chỉ rõ lỗi biên/rác bộ nhớ trước khi đưa code sửa.

---

## 2. Trình độ hiện tại
- **Mảng 1 chiều (Đã nắm cơ bản):** Duyệt mảng, tìm kiếm tuyến tính, xóa phần tử, mảng tần suất (`cnt[256]`), kỹ thuật hai chỉ số (`read`/`write`), mô phỏng ngăn xếp bằng mảng tĩnh.
- **Mảng 2 chiều (Đã nắm cơ bản):** Nhập/xuất ma trận, sắp xếp theo hàng/cột, hoán vị hàng/cột, chuyển vị (`transpose`), xoay ma trận (`rotate`).
- **Chuỗi ký tự `char[]` (Khá vững chỉ số mảng):** Dùng cờ trạng thái `bool inWord` (chuẩn hóa hoa/thường `capitalizeWords`, tìm từ dài nhất `findLongestWord`), tách từ, đọc/ghi chuỗi an toàn với `'\0'`.
- **Struct & File văn bản (Đang củng cố):** Khai báo `struct`, truyền tham chiếu `Struct &`, đọc/ghi file với `ifstream`/`ofstream`, xử lý trôi lệnh `ignore()`.
- **Con trỏ & Cấp phát động (Chưa thạo - Sắp học):** Mới biết cơ bản `&`, `*`, truyền con trỏ; chưa thạo cấp phát động `new`/`delete`.

---

## 3. Danh sách bẫy & Lỗi cũ cần soi kỹ khi Review
1. **Truyền tham trị thay vì tham chiếu:** Truyền `Struct a` thay vì `Struct &a` khi hàm cần sửa dữ liệu gốc, hoặc thiếu dấu `[]` khi truyền mảng `Struct a[]`.
2. **Quên điều kiện dừng vòng lặp `while`:** Ví dụ dùng `strtok` nhưng quên gọi tiếp `ptr = strtok(NULL, " ")` gây vòng lặp vô tận; hoặc `strtok` cắt nát chuỗi gốc bằng `'\0'`.
3. **Biến đếm/chỉ số rác:** Quên khởi tạo giá trị ban đầu (`int read, write = 0;`) hoặc khai báo biến đếm bên trong vòng lặp.
4. **Chuỗi thiếu `'\0'` & Điều kiện biên ma trận:** Quên tự đóng `'\0'` khi sao chép chuỗi thủ công; chuyển vị tại chỗ trên ma trận không vuông (`rows != cols`) hoặc xoay ma trận với số lần `n < 0`.
5. **Tệp rác:** Tránh đẩy nhầm tệp `.exe` (hoặc tệp biên dịch đổi nhầm đuôi `.cpp`) lên repo.

---

## 4. Tiến độ & Nhiệm vụ hiện tại
- [x] Dựng khung thư mục chuẩn cho repo `Nh-ng_B-i_Code_Hay_L-m_-c`.
- [ ] **Đang làm (`03_chuoi_ky_tu/xu_ly_chuoi_co_ban/`):** Tách 3 file (`string_basic.h`, `string_basic.cpp`, `main.cpp`) tự cài đặt `countWords`, `myStrcpy`, `myStrcmp` (không dùng `<cstring>`).
- [ ] **Tiếp theo 1 (`04_struct_va_file/quan_ly_sinh_vien/`):** Hoàn thiện sửa lỗi `VietHoaTen`, `VietHoaTenList`, hàm sắp xếp và tối ưu `const &`.
- [ ] **Tiếp theo 2 (`05_con_tro_cap_phat_dong/`):** Luyện con trỏ với mảng 1D, chuỗi C-style và cấp phát động `new`/`delete`.
