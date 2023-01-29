#include<bits/stdc++.h>
#include<Windows.h>
#include<conio.h>
#pragma execution_character_set( "utf-8" )
using namespace std;
class Store{
    public:
           string userAdmin[2] ={"duogxaolin","123456"}; // tài khoản admin
};
class Staff : public Store{
    public:
            char name[100];
            char date[100];
            char seniority[100];
            char position[100];
    void view_employees(int a, int b, int c);
    void add_employees(int m);   

};
class Client : public Store{
    public:
            char name[100];
            char date[100];
            char amount[100];
            char product[100];
            float money;
            float gift;
void view_client(int a, int b, int c);
void add_client(int m);
void num_rows(int a, int b, int c);
void num_gift(int a, int b, int c);
void num_money(int a, int b, int c);
}; 
void rand_text( char *result) {
	int length = 15;
    int i, rand_int;
    char char_set[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 
    for (i = 0; i <length; i++) {
        result[i] = char_set[rand() % sizeof(char_set)];
    }
    result[length] = 0;
}
void  Staff::view_employees(int a, int b, int c){

 string day = to_string(a);
    day = day + "_" + to_string(b) +"_" + to_string(c);
    string source = "data/staff_";
    string dot = ".txt";
	source = source + day + dot;
    string khach = "data/client_";
khach = khach + day + dot;
char* data = (char*)source.c_str();
    char s;
	 ifstream f1;
	 f1.open(data);
   int numchars = 0;
   int  numlines = 0;
    f1.get(s);
    while (f1) {
     while (f1 && s != '\n') {
       numchars = numchars + 1;
       f1.get(s);
     }
     numlines = numlines + 1;
     f1.get(s);
   }
	 
       ifstream readfile(data);
         string khachhang;
		  cout<<"Số Nhân Viên:"<< numlines<<endl;
    while(getline(readfile, khachhang)){
        cout<<khachhang << endl;
    }
	readfile.close();
}
void Staff::add_employees(int m){
	time_t now = time(0);
   tm *ltm = localtime(&now);
 string day = to_string(ltm->tm_mday);
    day = day + "_" + to_string(1 + ltm->tm_mon) +"_" + to_string(1900 + ltm->tm_year);
    string source = "data/staff_";
    string dot = ".txt";
	source = source + day + dot;
    string khach = "data/client_";
khach = khach + day + dot;
char* data = (char*)source.c_str();
char* add_khach = (char*)khach.c_str();
        char result[15 + 1];
    srand(time(NULL));
 
    rand_text(result);
    char c;
        Staff employees[100]; // Call Class constructor
    fstream f;
    ifstream f1;
f.open(data,ios::out | ios::app); //ios::app là cờ đánh dấu việc mở tệp để ghi thêm vào, không phải là lệnh
f1.open(data);
  int numchars = 0;
  int  numlines = 0;
   f1.get(c);
   while (f1) {
     while (f1 && c != '\n') {
       numchars = numchars + 1;
       f1.get(c);
     }
     numlines = numlines + 1;
     f1.get(c);
   }
    FILE *write;
    string str[1000];
 for(int i=0; i<m; i++){
     char data[100];
    cout << "Employee No."<< i+1 <<endl;
       cout << "Nhập Họ Và Tên : ";
       fflush(stdin);
  gets(employees[i].name);
       cout << "Ngày Sinh : ";
        fflush(stdin);
    gets(employees[i].date);
       cout << "Giờ Bắt Đầu Ca : ";
        fflush(stdin);
    gets(employees[i].seniority);
       cout << "Khu Vực : ";
        fflush(stdin);
    gets(employees[i].position);
    f <<"id:NV_"<<result<<" "<<"| ";
    f <<"Họ Và Tên:"<<employees[i].name<<" "<<"| ";
    f <<"Ngày Sinh:"<< employees[i].date<<" "<<"| ";
    f <<"Giờ Làm:"<< employees[i].seniority<<" "<<"| ";
    f <<"Khu Vực:"<< employees[i].position<<endl;

   
 }
f.close();
  
}
void Client::view_client(int a, int b, int c){
		time_t now = time(0);
   tm *ltm = localtime(&now);
 string day = to_string(a);
    day = day + "_" + to_string(b) +"_" + to_string(c);
    string source = "data/staff_";
    string dot = ".txt";
	source = source + day + dot;
    string khach = "data/client_";
khach = khach + day + dot;
char* data = (char*)khach.c_str();
    char s;
	 ifstream f1;
	 f1.open(data);
   int numchars = 0;
   int  numlines = 0;
    f1.get(s);
    while (f1) {
     while (f1 && s != '\n') {
       numchars = numchars + 1;
       f1.get(s);
     }
     numlines = numlines + 1;
     f1.get(s);
   }
       ifstream readfile(data);
         string khachhang;
		  cout <<"Số Khách Hàng:" << numlines/9<<endl;
    while(getline(readfile, khachhang)){
        cout<<khachhang << endl;
    }
	readfile.close();
}
void Client::num_gift(int a, int b, int c){
			time_t now = time(0);
   tm *ltm = localtime(&now);
 string day = to_string(a);

    day = day + "_" + to_string(b) +"_" + to_string(c);
    string source = "data/staff_";
    string dot = ".txt";
	string gift = "data/gift_";
	string doanhthu = "data/money_";
	string tongtien = "data/tong_";
	source = source + day + dot;
	gift = gift + day + dot;
	doanhthu = doanhthu + day + dot;
    tongtien = tongtien + day + dot;
	source = source + day + dot;
    string khach = "data/client_";
khach = khach + day + dot;
char* data = (char*)khach.c_str();
char* gifts = (char*)gift.c_str();
char* doanhthus = (char*)doanhthu.c_str();
char* money = (char*)tongtien.c_str();
    char s;
	 ifstream f1;
	 f1.open(data);
   int numchars = 0;
   int  numlines = 0;
    f1.get(s);
    while (f1) {
     while (f1 && s != '\n') {
       numchars = numchars + 1;
       f1.get(s);
     }
     numlines = numlines + 1;
     f1.get(s);
   }
	int sum=0;
	ifstream file(gifts,ios::in);
	while(!file.eof()){
	int x;
	file>>x;
    sum+=x;
    }
    file.close();
			  cout <<"Số Khách Hàng:" << numlines/9<<endl;
    cout<<"Tổng Số Tiền Giảm Giá = "<<sum<<" đ"<<endl;
}
void Client::num_rows(int a, int b, int c){
			time_t now = time(0);
   tm *ltm = localtime(&now);
 string day = to_string(a);
    day = day + "_" + to_string(b) +"_" + to_string(c);
    string source = "data/staff_";
    string dot = ".txt";
	string gift = "data/gift_";
	string doanhthu = "data/money_";
	string tongtien = "data/tong_";
	source = source + day + dot;
	gift = gift + day + dot;
	doanhthu = doanhthu + day + dot;
    tongtien = tongtien + day + dot;
	source = source + day + dot;
    string khach = "data/client_";
khach = khach + day + dot;
char* data = (char*)khach.c_str();
char* gifts = (char*)gift.c_str();
char* doanhthus = (char*)doanhthu.c_str();
char* money = (char*)tongtien.c_str();
    char s;
	 ifstream f1;
	 f1.open(data);
   int numchars = 0;
   int  numlines = 0;
    f1.get(s);
    while (f1) {
     while (f1 && s != '\n') {
       numchars = numchars + 1;
       f1.get(s);
     }
     numlines = numlines + 1;
     f1.get(s);
   }
	int sum=0;
	ifstream file(doanhthus,ios::in);
	while(!file.eof()){
	int x;
	file>>x;
    sum+=x;
    }
    file.close();
			  cout <<"Số Khách Hàng:" << numlines/9<<endl;
    cout<<"Tổng Doanh Thu = "<<sum<<" đ"<<endl;
}
void Client::num_money(int a, int b, int c){
			time_t now = time(0);
   tm *ltm = localtime(&now);
 string day = to_string(a);
    day = day + "_" + to_string(b) +"_" + to_string(c);
    string source = "data/staff_";
    string dot = ".txt";
	string gift = "data/gift_";
	string doanhthu = "data/money_";
	string tongtien = "data/tong_";
	source = source + day + dot;
	gift = gift + day + dot;
	doanhthu = doanhthu + day + dot;
    tongtien = tongtien + day + dot;
	source = source + day + dot;
    string khach = "data/client_";
khach = khach + day + dot;
char* data = (char*)khach.c_str();
char* gifts = (char*)gift.c_str();
char* doanhthus = (char*)doanhthu.c_str();
char* money = (char*)tongtien.c_str();
    char s;
	 ifstream f1;
	 f1.open(data);
   int numchars = 0;
   int  numlines = 0;
    f1.get(s);
    while (f1) {
     while (f1 && s != '\n') {
       numchars = numchars + 1;
       f1.get(s);
     }
     numlines = numlines + 1;
     f1.get(s);
   }
	int sum=0;
	ifstream file(money,ios::in);
	while(!file.eof()){
	int x;
	file>>x;
    sum+=x;
    }
    file.close();
			  cout <<"Số Khách Hàng:" << numlines/9<<endl;
    cout<<"Tổng Số Tiền(Chưa Giảm Giá) = "<<sum<<" đ"<<endl;
}
void Client::add_client(int m){
			time_t now = time(0);
   tm *ltm = localtime(&now);
 string day = to_string(ltm->tm_mday);
    day = day + "_" + to_string(1 + ltm->tm_mon) +"_" + to_string(1900 + ltm->tm_year);
    string source = "data/staff_";
    string dot = ".txt";
	string gift = "data/gift_";
	string doanhthu = "data/money_";
	string tongtien = "data/tong_";
	source = source + day + dot;
	gift = gift + day + dot;
	doanhthu = doanhthu + day + dot;
    tongtien = tongtien + day + dot;
	source = source + day + dot;
    string khach = "data/client_";
khach = khach + day + dot;
char* data = (char*)khach.c_str();
char* gifts = (char*)gift.c_str();
char* doanhthus = (char*)doanhthu.c_str();
char* money = (char*)tongtien.c_str();
    char result[15 + 1];
    srand(time(NULL));
 
    rand_text(result);
    srand(time(NULL)); //random
    char c;
        Client employees[100]; // Call Class constructor
    fstream f,giam,tong,sau;
    ifstream f1;
f.open(data,ios::out | ios::app); //ios::app là cờ đánh dấu việc mở tệp để ghi thêm vào, không phải là lệnh
giam.open(gifts,ios::out | ios::app); 
tong.open(money,ios::out | ios::app); 
sau.open(doanhthus,ios::out | ios::app); 
f1.open(data);
  int numchars = 0;
  int  numlines = 0;
   f1.get(c);
   while (f1) {
     while (f1 && c != '\n') {
       numchars = numchars + 1;
       f1.get(c);
     }
     numlines = numlines + 1;
     f1.get(c);
   }
    FILE *write;
    string str[1000];
 for(int i=0; i<m; i++){
     char data[100];
    cout << "Employee No."<< i+1 <<endl;
       cout << "Họ Và Tên Khách Hàng: ";
       fflush(stdin);
  gets(employees[i].name);
       cout << "Ngày Mua : ";
        fflush(stdin);
    gets(employees[i].date);
       cout << "Tên Các Sản Phẩm Mua : ";
        fflush(stdin);
    gets(employees[i].product);
       cout << "Tổng Số Lượng Mua : ";
        fflush(stdin);
    gets(employees[i].amount);
           cout << "Tổng Số Tiền : ";
        fflush(stdin);
    cin >>employees[i].money;
           cout << "Tiền Giảm Giá : ";
        fflush(stdin);
    cin >>employees[i].gift;
    f << "----------------------------"<<endl;
    f <<"id:KH_"<<result<<endl;
    f <<"Họ Và Tên:"<<employees[i].name<<endl;
    f <<"Ngày Mua:"<< employees[i].date<<endl;
    f <<"Sản Phẩm:"<< employees[i].product<<endl;
    f <<"Tổng Số Lượng:"<<employees[i].amount<<endl;
    f <<"Giá Bìa:"<< employees[i].money<<endl;
    f <<"Giảm giá:"<< employees[i].gift<<endl;
    f <<"Tiền Thanh Toán:"<<employees[i].money - employees[i].gift<<" đ "<<endl;
	tong <<employees[i].money<<endl;
	giam <<employees[i].gift<<endl;
	sau <<employees[i].money - employees[i].gift<<endl;
 }
f.close();
   
}
void formLogin(string &username,string &password)
{
	SetConsoleOutputCP(65001);
	cout << setw(15) << right << "" << "----------------------------\n";
	cout << setw(25) << left << "" << "Đăng Nhập" << endl;
	cout << endl;
	cout << setw(15) << right << "" << "Username: "; cin >> username;
	cout << endl;
	cout << setw(15) << right << "" << "Password: "; cin >> password;
	cout << setw(15) << right << "" << "----------------------------\n";
	system("CLS");
}
void ClearScrollback()
{
	cout << "\x1B[3J\x1B[H";
}
void loading()
{
	cout << setw(26) << left << "" << "Chờ Một Chút Nhé!\n\n";
	cout << setw(26) << setfill(' ') << "" << "Loading ";
	for (int i = 0; i < 3; i++)
	{
		Sleep(1000);
		cout << ".";
	}

}
void loadingdata()
{
	cout << setw(26) << left << "" << "Đang tải dữ liệu vui lòng đợi";
	for (int i = 0; i < 3; i++)
	{
		Sleep(1000);
		cout << ".";
	}
system("CLS");
}
void what_time(){
           // thời gian hiện tại tính theo hệ thống
   time_t now = time(0);


   tm *ltm = localtime(&now);

   // in ra các thành phần của cấu trúc tm struct
   cout << "\nHôm nay là:"<<ltm->tm_mday<<"/"<<1+ltm->tm_mon<<"/"<< 1900+ ltm->tm_year<< endl;
}
bool loginAdmin(string &username, string &password)
{
    Store duogxaolin;
	SetConsoleOutputCP(65001);
	auto  countFailLogin = 0;
	auto waitTimes = 0;
		do
		{
			formLogin(username, password);
			if (username != duogxaolin.userAdmin[0] || password != duogxaolin.userAdmin[1])
			{
				cout << setw(15) << left << "" << "Sai Tài Khoản Hoặc Mật Khẩu! Đăng Nhập Lại." << endl << endl;
				countFailLogin++;
				cout << setw(15) << left << "" << "Bạn Còn " << 5 - countFailLogin << " Lượt Đăng Nhập Nữa" << endl << endl;
			}
			if (countFailLogin == 5)
			{ 
				cout << setw(15) << left << "" << "Đăng Nhập Thất Bại Quá Nhiều! Chờ 15s Để Tiếp Tục.\n\n";
				Sleep(1000);
				system("CLS");
				waitTimes++;
				if (waitTimes == 3)
				{
					cout << endl;
					cout << setw(15) << left << "" << "Bạn Đã Đăng Nhập Thất Bại Qúa Nhiều! Bạn Không Thể Đăng Nhập Nữa.\n";
					Sleep(5000);
					return false;
				}
				for (int i = 0; i < 5; i++)
				{

					Sleep(1000);
					cout << setw(10) << left << "" << setw(20) << right << "Thời Gian Còn " << setw(2) << 5 - i << "s Nữa";
					ClearScrollback();
				}
				countFailLogin = 0;	
			}
		} while (username != duogxaolin.userAdmin[0] || password != duogxaolin.userAdmin[1]);
		return true;
}
void utf8(){
    SetConsoleOutputCP(65001);
}
void menu()
{
	SetConsoleOutputCP(65001);
	cout << setw(10) << left << "" << "********************************************************************\n";
	cout << setw(11) << right << "*" << setw(20) << left << "" << setw(55) << left << "Chào Mừng DuogXaoLin đã đăng nhập!" << "*" << endl;
	cout << setw(11) << right << "*" << setw(66) << "" << "*" << endl;
	cout << setw(11) << right << "*" << setw(20) << left << "" << setw(52) << left << " 1.Thêm Nhân Viên Trực Hôm Nay" << "*" << endl;
	cout << setw(11) << right << "*" << setw(66) << "" << "*" << endl;
	cout << setw(11) << right << "*" << setw(20) << left << "" << setw(52) << left << " 2.Xem Danh Sách Nhân Viên Trực Hôm Nay" << "*" << endl;
	cout << setw(11) << right << "*" << setw(66) << "" << "*" << endl;
	cout << setw(11) << right << "*" << setw(20) << left << "" << setw(50) << left << " 3.Thêm Khách Hàng Mua Hôm Nay" << "*" << endl;
	cout << setw(11) << right << "*" << setw(66) << "" << "*" << endl;
	cout << setw(11) << right << "*" << setw(20) << left << "" << setw(50) << left << " 4.Danh Sách Khách Hàng Mua Hôm Nay" << "*" << endl;
	cout << setw(11) << right << "*" << setw(66) << "" << "*" << endl;
	cout << setw(11) << right << "*" << setw(20) << left << "" << setw(61) << left << " 5.Tổng Số Tiền Khách Hàng Được Giảm Giá" << "*" << endl;
	cout << setw(11) << right << "*" << setw(66) << "" << "*" << endl;
	cout << setw(11) << right << "*" << setw(20) << left << "" << setw(57) << left << " 6.Tổng Số Tiền Hàng(Chưa Giảm Giá)" << "*" << endl;
	cout << setw(11) << right << "*" << setw(66) << "" << "*" << endl;
	cout << setw(11) << right << "*" << setw(20) << left << "" << setw(47) << left << " 7.Doanh Thu Hôm Nay" << "*" << endl;
	cout << setw(11) << right << "*" << setw(66) << "" << "*" << endl;
	cout << setw(11) << right << "*" << setw(20) << left << "" << setw(53) << left << " 8.Xem lại Ngày Hôm Trước" << "*" << endl;
	cout << setw(11) << right << "*" << setw(66) << "" << "*" << endl;
	cout << setw(10) << left << "" << "********************************************************************\n";
}
void menu2(int a, int b, int c)
{
	SetConsoleOutputCP(65001);
	cout << setw(10) << left << "" << "********************************************************************\n";
	cout << setw(11) << right << "*" << setw(20) << left << "" << setw(55) << left << "Chào Mừng DuogXaoLin đã đăng nhập!" << "*" << endl;
	cout << setw(11) << right << "*" << setw(66) << "" << "*" << endl;
	cout << setw(11) << right << "*" << setw(20) << left << "" << setw(52) << left << " 1.Xem Danh Sách Nhân Viên Trực Hôm Đó" << "*" << endl;
	cout << setw(11) << right << "*" << setw(66) << "" << "*" << endl;
	cout << setw(11) << right << "*" << setw(20) << left << "" << setw(50) << left << " 2.Danh Sách Khách Hàng Mua Hôm Đó" << "*" << endl;
	cout << setw(11) << right << "*" << setw(66) << "" << "*" << endl;
	cout << setw(11) << right << "*" << setw(20) << left << "" << setw(61) << left << " 3.Tổng Số Tiền Khách Hàng Được Giảm Giá" << "*" << endl;
	cout << setw(11) << right << "*" << setw(66) << "" << "*" << endl;
	cout << setw(11) << right << "*" << setw(20) << left << "" << setw(57) << left << " 4.Tổng Số Tiền Hàng(Chưa Giảm Giá)" << "*" << endl;
	cout << setw(11) << right << "*" << setw(66) << "" << "*" << endl;
	cout << setw(11) << right << "*" << setw(20) << left << "" << setw(47) << left << " 5.Doanh Thu Hôm Nay" << "*" << endl;
	cout << setw(11) << right << "*" << setw(66) << "" << "*" << endl;
	cout << setw(11) << right << "*" << setw(20)  << left << "               6.Xóa Toàn Bộ Dữ Liệu(" <<a<<"/"<<b<<"/"<<c<<")" "*" << endl;
	cout << setw(11) << right << "*" << setw(66) << "" << "*" << endl;
	cout << setw(11) << right << "*" << setw(20) << left << "" << setw(53) << left << " 6.Xem lại Ngày Hôm Trước" << "*" << endl;
	cout << setw(11) << right << "*" << setw(66) << "" << "*" << endl;
	cout << setw(10) << left << "" << "********************************************************************\n";
}
int main(){
	Staff employees[100]; // Call Class constructor
	Staff manager; // Call Class constructor
	Client clients;
    string username, password;
    int lenght = 0,optionHome,optionAdmin,OptionCustomer;
	int daycheck;
    char checkContinueAdmin{};
    utf8;

			if (loginAdmin(username, password))
			{
				system("CLS");
				cout << endl;
				cout << setw(25) << left << "" << "Chào Mừng DuogXaoLin Đã Đăng Nhập!\n\n";
				Sleep(1000);
				loading();
				cout << endl; 
				 while(true) {
					system("CLS");
                    cout <<"------Hello, Please select the function to perform--------"<<endl<<endl;
                    cout << "\t Nhập '1' để quản lý hệ thống hôm nay!\n";
                    cout << "\t Nhập '2' để xem lại những ngày trước\n";
					cout << "\t Lựa Chọn Khác Để Thoát Chương Trình\n";
                    cout << "Nhập lựa chọn của bạn:";
                    cin >> daycheck;
                     if(daycheck == 1){
						int ngay,thang,nam;
                       time_t now = time(0);
                       tm *ltm = localtime(&now);
                       string day = to_string(ltm->tm_mday);
					   ngay = ltm->tm_mday;
					   thang = 1 + ltm->tm_mon;
					   nam = 1900 + ltm->tm_year;
                        day = day + "_" + to_string(1 + ltm->tm_mon) +"_" + to_string(1900 + ltm->tm_year);
                        string source = "data/staff_";
                        string dot = ".txt";
						string gift = "data/gift_";
						string doanhthu = "data/money_";
						string tongtien = "data/tong_";
	                    source = source + day + dot;
						gift = gift + day + dot;
						doanhthu = doanhthu + day + dot;
						tongtien = tongtien + day + dot;
                        string khach = "data/client_";
                        khach = khach + day + dot;
                    char* add_staff = (char*)source.c_str();
                    char* add_khach = (char*)khach.c_str();
                     char* add_gift = (char*)gift.c_str();
					char* add_doanhthu = (char*)doanhthu.c_str();
					char* add_money = (char*)tongtien.c_str();
                         if (fopen(add_staff,"r")==NULL){ //kiểm tra xem đã tạo file chưa? chưa thì tạo
                      ofstream assets(add_staff);
                          assets.close(); 
                            }
	                    if (fopen(add_khach,"r")==NULL){ //kiểm tra xem đã tạo file chưa? chưa thì tạo
                          ofstream assets(add_khach);
                          assets.close(); 
                         }
						if (fopen(add_gift,"r")==NULL){ //kiểm tra xem đã tạo file chưa? chưa thì tạo
                          ofstream assets(add_gift);
                          assets.close(); 
						}
						if (fopen(add_gift,"r")==NULL){ //kiểm tra xem đã tạo file chưa? chưa thì tạo
                          ofstream assets(add_gift);
                          assets.close(); 
						}
						if (fopen(add_doanhthu,"r")==NULL){ //kiểm tra xem đã tạo file chưa? chưa thì tạo
                          ofstream assets(add_gift);
                          assets.close(); 
                         }
						if (fopen(add_money,"r")==NULL){ //kiểm tra xem đã tạo file chưa? chưa thì tạo
                          ofstream assets(add_gift);
                          assets.close(); 
                         }
											
                do{
					system("CLS");
					menu();
					cout << setw(15) << left << "" << "Nhập Lựa Chọn Của Bạn: "; cin >> optionAdmin; cin.ignore();
					switch (optionAdmin)
					{
				case 1:
						system("CLS");
					    cout << "vì lý do bảo mật sau khi thêm sẽ không thể xóa! vui lòng kiểm tra kỹ thông tin đã nhập trước khi lưu!"<<endl;
						Sleep(2000);
					    cout << "-----------ADD EMPLOOYEES-----------"<<endl;
                        int m;
                        cout << "Số Lượng Thêm : ";
                         do{
                        cin >>m;
                        if(m<1){
                        cout << "error, please input number >0 : ";
                        }
                          }while(m<1);
                         system("cls");
						   cout << "vì lý do bảo mật sau khi thêm sẽ không thể xóa! vui lòng kiểm tra kỹ thông tin đã nhập trước khi lưu!"<<endl;
                         manager.add_employees(m);
                         system("cls");
                          manager.view_employees(ngay,thang,nam);
					    break;
				case 2:  
				system("CLS");
				    loadingdata();
					manager.view_employees(ngay,thang,nam);
						break;
				case 3:
						system("CLS");
					      cout << "vì lý do bảo mật sau khi thêm sẽ không thể xóa! vui lòng kiểm tra kỹ thông tin đã nhập trước khi lưu!"<<endl;
						Sleep(2000);
                          cout << "-----------ADD CLIENT-----------"<<endl;
                        int cl;
                          cout << "Số Lượng Cần Thêm : ";
                        do{
                          cin >>cl;
                        if(cl<1){
                         cout << "Số lượng phải lớn hơn 0 : ";
                                }
                          }while(cl<1);
                      	system("CLS");
					      cout << "vì lý do bảo mật sau khi thêm sẽ không thể xóa! vui lòng kiểm tra kỹ thông tin đã nhập trước khi lưu!"<<endl;
						Sleep(2000);
                          clients.add_client(cl);
                       system("cls");
                          clients.view_client(ngay,thang,nam);
					    break;
				case 4:
			     	system("CLS");
                     loadingdata();
				     clients.view_client(ngay,thang,nam);
						break;
				case 5:
					system("CLS");
                     loadingdata();
                        clients.num_gift(ngay,thang,nam);
				        break;
				case 6:
					system("CLS");
                     loadingdata();
                        clients.num_money(ngay,thang,nam);
				        break;
				case 7:
					system("CLS");
                     loadingdata();
                        clients.num_rows(ngay,thang,nam);
				        break;
				case 8:
					checkContinueAdmin = 0;
				        break;
				default:cout << setw(15) << left << "" << "Lựa Chọn Không Hợp Lệ!\n\n";
				    	break;
					}
						cout << setw(10) << left << "" << "Bạn Muốn Tiếp Tục Phần Của Admin? Y/N ---------> "; cin >> checkContinueAdmin; cin.ignore();
						if (checkContinueAdmin != 'Y' && checkContinueAdmin != 'y')
						{
							cout << endl;
							cout << setw(10) << left << "" << "KẾT THÚC PHIÊN LÀM VIỆC CỦA ADMIN!" << endl;
						}
					
				} while (checkContinueAdmin == 'Y' || checkContinueAdmin == 'y');	
			
			

			
			}else if(daycheck ==2){
				time_t now = time(0);
                 tm *ltm = localtime(&now);
				int ngay,thang,nam;
			
			do{
				cout<<setw(10) <<"Nhập Năm Cần Xem:";
				cin >> nam;
				
				if(nam < 2000 or nam >1900 + ltm->tm_year){
				cout <<"Năm Không Hợp Lệ"<<endl;
			}
			}while(nam < 2000 or nam >1900 + ltm->tm_year);	
		    
			do{
				cout<<setw(10) <<"Nhập Tháng Cần Xem:";	
				cin >>thang;
			}while(thang<1 or thang>12);
			if(thang == 2){
				if(nam % 400 == 0){
			do{
			cout<<setw(10) <<"Nhập Ngày Cần Xem:";
            cin >> ngay;
			if(ngay < 1 or ngay >29){
				cout <<"Ngày Không Hợp Lệ"<<endl;
			}
			}while(ngay < 1 or ngay > 29);
				}else{
			do{
				cout<<setw(10) <<"Nhập Ngày Cần Xem:";
            cin >> ngay;
			if(ngay < 1 or ngay > 28){
				cout <<"Ngày Không Hợp Lệ"<<endl;
			}
			}while(ngay < 1 or ngay >28);
				}

			}else if(thang == 1 or thang == 3 or thang == 5 or thang == 7 or thang == 8 or thang == 10 or thang == 12){
				cout<<setw(10) <<"Nhập Ngày Cần Xem:";
			cout<<setw(10) <<"Nhập Ngày Cần Xem:";
			do{
            cin >> ngay;
			if(ngay < 1 or ngay >31){
				cout <<"Ngày Không Hợp Lệ"<<endl;
			}
			}while(ngay < 1 or ngay >31);
			}else{
			cout<<setw(10) <<"Nhập Ngày Cần Xem:";
			do{
            cin >> ngay;
			if(ngay < 1 or ngay >30){
				cout <<"Ngày Không Hợp Lệ"<<endl;
			}
			}while(ngay < 1 or ngay >30);
			}
			int namnay = 1900 + ltm->tm_year;
			if(ngay == ltm->tm_mday and thang == 1 + ltm->tm_mon and nam == namnay){
				cout <<"Dữ Liệu Cần Kiểm Tra Trùng Ngày Hôm Nay!!";
						 break;
			}

			string day = to_string(ngay); 
			day = day + "_" + to_string(thang) +"_" + to_string(nam);
			string source = "data/staff_";
			string del = "data/del_";
            string dot = ".txt";
			source = source + day + dot;
			del = del + day + dot;
			char* add_staff = (char*)source.c_str();
			char* delfile = (char*)del.c_str();
			string ngaycancheck = to_string(ngay) + "/" + to_string(thang) + "_" + to_string(nam);
                         if (fopen(add_staff,"r")==NULL){ //kiểm tra xem đã tạo file chưa? chưa thì tạo
                         cout <<"Dữ Liệu Đã Bị Xóa Bỏ Hoặc Không Tồn Tại!";
						 break;
                            }	
						if (fopen(delfile,"r")!=NULL){ //kiểm tra xem đã tạo file chưa? chưa thì tạo
                               cout <<"Dữ Liệu Đã Bị Xóa Bỏ Hoặc Không Tồn Tại!";
						 break;
	                           }					
                do{
					if (fopen(delfile,"r")!=NULL){ //kiểm tra xem đã tạo file chưa? chưa thì tạo
                     cout <<"Dữ Liệu Đã Bị Xóa Bỏ Hoặc Không Tồn Tại!";
						 break;
	                           }
					system("CLS");
					menu2(ngay,thang,nam);
					cout << setw(15) << left << "" << "Nhập Lựa Chọn Của Bạn: "; cin >> optionAdmin; cin.ignore();
					switch (optionAdmin)
					{
				case 1: 
				system("CLS");
				    loadingdata();
					cout <<"Ngày kiểm tra:"<<ngaycancheck <<endl;
					manager.view_employees(ngay,thang,nam);
						break;
				case 2:
			     	system("CLS");
                     loadingdata();
					cout <<"Ngày cần kiểm tra:"<<ngaycancheck <<endl;
				     clients.view_client(ngay,thang,nam);
						break;
				case 3:
					system("CLS");
                     loadingdata();
			cout <<"Ngày kiểm tra:"<<ngaycancheck <<endl;
                        clients.num_gift(ngay,thang,nam);
				        break;
				case 4:
					system("CLS");
                     loadingdata();
			cout <<"Ngày cần kiểm tra:"<<ngaycancheck <<endl;
                        clients.num_money(ngay,thang,nam);
				        break;
				case 5:
					system("CLS");
                     loadingdata();
			cout <<"Ngày cần kiểm tra:"<<ngaycancheck <<endl;
                        clients.num_rows(ngay,thang,nam);
				        break;
				case 6:
	cout << "-----Bạn có chắc muốn xóa hết data? sau khi xóa sẽ không thể khôi phục-----"<<endl;
    cout << "Nhập '1' để đồng ý"<<endl;
    cout << "Nhập giá trị khác để hủy"<<endl;
    int l;
    cout << " Input select: ";
    cin >> l;
    if(l==1){
    if (fopen(delfile,"r")==NULL){ //kiểm tra xem đã tạo file chưa? chưa thì tạo
    ofstream assets(delfile);
    assets.close(); 
	}
	cout <<"Đã Xóa File Thành Công!!";
	break;
    }else{
        cout << "Hủy thành công!"<<endl;
    }
				        break;
				case 7:
					checkContinueAdmin = 0;
				        break;
				default:cout << setw(15) << left << "" << "Lựa Chọn Không Hợp Lệ!\n\n";
				    	break;
					}
						cout << setw(10) << left << "" << "Bạn Muốn Tiếp Tục Phần Của Admin? Y/N ---------> "; cin >> checkContinueAdmin; cin.ignore();
						if (checkContinueAdmin != 'Y' && checkContinueAdmin != 'y')
						{
							cout << endl;
							cout << setw(10) << left << "" << "KẾT THÚC PHIÊN LÀM VIỆC CỦA ADMIN!" << endl;
						}
					
				} while (checkContinueAdmin == 'Y' || checkContinueAdmin == 'y');	
			
			

			
			}else{
				cout <<"Hẹn Gặp Lại Lần Sau <3"<< endl;
				return false;
			}

				 }
			} 
			else
			{

			}
			
}