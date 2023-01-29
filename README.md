#Project Cpp
Tổng quan về chương trình

Lệnh đặc biệt:
Hiển thị tiếng việt trong console: Để hiện thị tiếng việt trong console em đã sử dụng “SetConsoleOutputCP(65001);” của thư viện<Windows.h>. Nó cung cấp cho trình biến dịch các ký tự đặc biệt trong bảng mã utf-8 giúp có thể xuất ra màn hình văn bản có dấu.

Random ký tự: Sử dụng random và size để có thể đưa ra các ký tự ngẫu nhiên cho mã id khách hàng và nhân viên trực

Cách hoạt động
Đầu tiên để có thể vào được hệ thống em đã làm chức năng đăng nhập(lấy user từ class Store)
Bạn nhập sai tài khoản và mật khẩu 5 lần liên tiếp hệ thống sẽ khóa trong 15s tránh spam và sau đó bạn có thể nhập tiếp. 5 lần khóa sẽ thoát chương trình
Sau khi đăng nhập thành công hệ thống sẽ sleep 3s để load dữ liệu(vì nếu dữ liệu lớn quá sẽ bị crass)
Tiếp đó bạn sẽ được chuyển đến trang chọn giữa thêm ngày hôm nay và xem lại dữ liệu đã lưu
Đầu tiên nếu chọn 1 hệ thống sẽ kiểm tra ngày và giờ hiện tại qua thư viện và tiến hành kiểm tra file ngày hôm nay đã được tạo chưa? Nếu chưa sẽ tiến hành tạo sau đó mới đến bước tiếp theo
Đến Bước tiếp theo Sẽ có những lựa chọn sau đây:
Nhập 1 để thêm nhân viên trực ca hôm nay
Nhập số lượng cần thêm
Sau đó nhập thông tin nhân viên
Họ và tên, ngày sinh, thời gian bắt đầu làm, Khu vực quản lý
Sau khi nhập xong hệ thống sẽ hiện số nhân viên hôm nay trực và danh sách các nhân viên đó.
Và đây cũng là chức năng số 2: xem thông tin nhân viên hôm nay
Khi thực hiện xong câu lệnh hệ thống sẽ hỏi bạn có muốn tiếp tục không? Nếu có bấm Y hoặc y để trở về trang thêm nhân viên….. Nếu nhập phím bất kỳ khác hệ thống sẽ trả bạn về phần chọn ngày.

Tiếp đến là thêm khách hàng mua hôm nay

Bạn sẽ nhập vào họ tên khách hàng, ngày mua, các sản phẩm, số lượng sản phẩm, giá tiền và số tiền giảm giá

Sau đó hệ thống sẽ thêm vào file và in ra kết quả như sau Và đây cũng là chức năng của phần 4: xem thông tin khách hàng Phần 5,6,7 sau khi bấm chọn sẽ hiển thị ra số khách hàng mua và số tiền ứng với mỗi chức năng

Tiếp theo là phần xem những ngày trước đây

Đầu tiên bạn sẽ phải nhập năm muốn kiểm tra(nếu nhập năm <2000 và > năm hiện tại sẽ không hợp lệ! Tiếp theo là phần tháng sẽ từ 1-12 Riêng Phần ngày sẽ theo tháng và theo năm để kiểm tra có hợp lệ hay không Nếu là tháng 2 và năm nhuận sẽ có 29 ngày….

Sau Khi chọn ngày nếu ngày không tồn tại dữ liệu thì sẽ hiển thị như sau

Nếu ngày hợp lệ và dữ liệu chưa bị xóa sẽ như sau

Phần 1->5 sẽ như của phần 1 Phần 6 khi bấm vào sẽ hiển thị như sau

Sau khi bấm chọn 1 toàn bộ file dữ liệu sẽ bị xóa bỏ và k thể khôi phục! Và tất nhiên sẽ không xem được nữa. Nếu nhập giá trị khác quá trình hủy sẽ dừng lại