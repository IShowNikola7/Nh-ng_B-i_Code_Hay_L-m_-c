# Những Bài Code Hay (C/C++ C-style)

Kho lưu trữ bài tập rèn tư duy thuật toán, chia hàm nhỏ và tổ chức mã nguồn theo lộ trình **Nền tảng C-style trước, Thư viện có sẵn sau** (theo chuẩn chương trình CSLT & KTLT - HCMUS).

---

## 🤖 HƯỚNG DẪN DÙNG VỚI BẤT KỲ AI CHATBOT NÀO (ChatGPT, Claude, DeepSeek, Gemini...)

Bạn có thể dùng kho bài tập này để học với **bất kỳ AI miễn phí nào** trên web mà không cần cài đặt phức tạp.

### Cách bắt đầu một buổi học với AI:
1. Mở một đoạn chat mới trên **ChatGPT**, **Claude**, **DeepSeek**, **Gemini** hoặc **Grok**.
2. Cung cấp thông tin cho AI theo 1 trong 2 cách:
   - **Cách 1 (Gửi link GitHub public):** Gửi trực tiếp link repo của bạn hoặc link 2 file [`AI_INSTRUCTIONS.md`](./AI_INSTRUCTIONS.md) và [`STUDY_LOG.md`](./STUDY_LOG.md) nếu AI có hỗ trợ đọc link web.
   - **Cách 2 (Copy nội dung chữ - Áp dụng cho mọi AI free):** Mở file [`AI_INSTRUCTIONS.md`](./AI_INSTRUCTIONS.md) và [`STUDY_LOG.md`](./STUDY_LOG.md) (trên GitHub hoặc máy tính), copy toàn bộ chữ rồi dán vào ô chat.
3. AI sẽ tự động:
   - Đọc tiến độ xem bạn đang học tới đâu.
   - Giảng lý thuyết ngắn gọn kèm mô hình bộ nhớ ASCII.
   - **Chỉ định chính xác tên file và thư mục** để bạn tạo trên máy.
   - **In sẵn khung code (Boilerplate)** sạch sẽ để bạn copy vào máy và tự code.
   - Khi bạn paste code nộp bài, AI sẽ chấm chi tiết và cung cấp dòng cập nhật để bạn dán vào `STUDY_LOG.md`.

---

## 📂 Cấu trúc thư mục & Chuyên đề

- `utils/` : Thư viện hàm dùng chung toàn dự án (`swap`, làm tròn số, nhập/xuất cơ bản...).
- `01_mang_1_chieu/` : Kỹ thuật hai chỉ số, mảng tần suất, xóa/chèn phần tử, mô phỏng ngăn xếp bằng mảng tĩnh.
- `02_mang_2_chieu/` : Nhập/xuất ma trận, sắp xếp hàng/cột, hoán vị, chuyển vị, xoay ma trận.
- `03_chuoi_ky_tu/` : Xử lý chuỗi C-style (`char[]` kết thúc bằng `'\0'`), kỹ thuật cờ trạng thái, chuẩn hóa, tách từ.
- `04_struct/` : Thiết kế kiểu dữ liệu cấu trúc (`struct`), truyền tham chiếu `&` / tham chiếu hằng `const &`.
- `05_doc_ghi_file/` : Đọc/ghi tệp văn bản (`ifstream`/`ofstream`), xử lý trôi lệnh, đọc dữ liệu định dạng.
- `06_con_tro_cap_phat_dong/` : Con trỏ thuần, mảng động, quản lý bộ nhớ Heap `new`/`delete`.
- `baitoangemini/` : Bãi thử nghiệm tự do, chứa các bài tập LeetCode, thuật toán đa dạng và bài toán tư duy tổng hợp.

---

## 🎯 Triết lý học tập cốt lõi
1. **Nền tảng trước, Công cụ sau:** Không dùng hàm có sẵn (`std::string`, `std::vector`, `<algorithm>`) khi chưa tự cài đặt được bằng con trỏ và mảng thuần.
2. **Bản chất bộ nhớ:** Luôn tư duy theo cấu trúc Stack / Heap, địa chỉ biến và con trỏ.
3. **Tự tay giải quyết:** Học theo phương pháp gợi mở (Socratic), tự tìm và sửa lỗi thay vì xem lời giải có sẵn.
